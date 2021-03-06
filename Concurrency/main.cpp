//
//  main.cpp
//  Concurrency
//
//  Created by 张成 on 2016/10/1.
//  Copyright © 2016年 张成. All rights reserved.
//

#include <iostream>

#include "common.h"

#include "ManagerThread.hpp"

#include "thread_guard.hpp"
#include "threadsafe_stack.hpp"

#include "SwapObject.hpp"

#include "CallOnce.hpp"

#include "SafeQueue.hpp"

#include "FutureTest.hpp"

#include "AtomicTest.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    
    //ManagerThread mt;
    //mt.run();

    //RUN_CLASS(ManagerThread);
    
    //RUN_CLASS(ThreadSafeSimple);
    
    
    //RUN_CLASS(TestSwap);
    
    //RUN_CLASS(CallOnce);
    
    //RUN_CLASS(SafeQueue);
    
    //RUN_CLASS(FutureTest);

    RUN_CLASS(AtomicTest);
    return 0;
}
