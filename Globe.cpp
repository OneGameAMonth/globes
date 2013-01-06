//
//  Globe.cpp
//  mac
//
//  Created by Ali Helmy on 06/01/2013.
//  Copyright (c) 2013 wackyCube. All rights reserved.
//

#include "Globe.h"

Globe::Globe() : GameObject() {
    model = new Icosphere();
}

Globe::~Globe(){
    
}

void Globe::update(GLfloat elapsedTime) {
    
}