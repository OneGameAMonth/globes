//
//  Globe.h
//  mac
//
//  Created by Ali Helmy on 06/01/2013.
//  Copyright (c) 2013 wackyCube. All rights reserved.
//

#ifndef __electricSheep__Globe__
#define __electricSheep__Globe__

#include "Icosphere.h"
#include "GameObject.h"
#include <vector>
#include <map>

class Globe : public GameObject {
    
public:
    Globe();
    ~Globe();
    virtual void update(GLfloat elapsedTime);
};

#endif /* defined(__electricSheep__Globe__) */
