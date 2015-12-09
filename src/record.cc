/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "record.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>



Record::Record(){
    this->n = this->colz.size();
}
Record::~Record(){
}
int Record::getCol(Column *x, uint64 n){
    if ( n >= this->n)
        return ErrColumnGet;
    
    *x = this->colz[n];
    return NormalOK;
}
int Record::getNum(uint64 *n) { *n = this->n; return NormalOK; };
int Record::addCol(Column *x){
    
    this->colz.push_back(*x);
    this->n = this->colz.size();
    
    return NormalOK;
}


