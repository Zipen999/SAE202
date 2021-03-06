/*
 \file	     test.hpp
 \author	    Mohamed HASSANI, Alexandre GLENAT, Thomas TISSIER
 
             Header Test, contient les fonctions de test des reseau et le remplissage
*/


#ifndef TEST_HPP
#define TEST_HPP
#include "algo.hpp"

transformers::Reseau1 testReseau1(std::vector<transformers::Objet> &vObjets);
transformers::Reseau2 testReseau2(std::vector<transformers::Objet> &vObjets);
std::vector<transformers::Objet> Remplissage();

#endif
