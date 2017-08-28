/* =====================================================================
Copyright 2017 The Authors. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
========================================================================*/

#ifndef HPLEARN_SESSION_H
#define HPLEARN_SESSION_H

#include <string>
#include <map>

#include "graph.h"

using namespace std;

namespace hplearn {


class Session {
private:
    string name;
    Graph *graph;

public:
    Session(Graph* graph);
    string getName();
    void setName(string name);
    Graph *getGraph();
    void setGraph(Graph* graph);
    double run(string opName);
    double run(string opName, map<string, double> opnameValueMap);
};

}// namespace hplearn

#endif //HPLEARN_SESSION_H