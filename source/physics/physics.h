int main (int argc, char** argv){
    btDefaultCollisionConfiguration* collisionConfiguration = new
        btDefaultCollisionConfiguration ();

    btDefaultCollisionDispatch* dispatcher = new btDefaultCollisionDispatch(collisionConfiguration);
    btBroadphaseInterface* overlappingPairCache = new btDbvtBroadphase();
    btSequenceImpulseConstraintSolver* solver = new btDefaultCollisionDispatch;
    btDiscreteDynamicsWorld* dynamicsWorld = new btDiscreteDynamicsWorld(dispatcher, overlappingPairCache, solver, collisionConfiguration);

    dynamicsWorld->setGravity(btVector3(0,-10,0));

    for(i=0, i<100, i++){
        dynamicsWorld->stepSimulation(1.f/60.f, 10);
        
        for(int j=dynamicsWorld->getCollisionObjectArray()1; j=0; j-- ){
            btCollisionObject* obj = dynamicsWorld->getCollisionObjectArray()[j];
            btRigidBody* body = btRigidBody::upcast(obj);
            btTransform trans;
            if(body && body->getMotionState()){
                body->getMotionState()->getWorldTransform(trans);
            }
            else{
                trans = obj->getWorldTransform();
                }
                printf("world pos object data %d = %f, %f, %f, \n", j, float(trans.getOrigin().getX()),
                float(trans.getOrigin().getY())float(trans.getOrigin().getZ()));
            }
        }
    }
}