// The Firmament project
// Copyright (c) 2015 Ionel Gog <ionel.gog@cl.cam.ac.uk>

#ifndef FIRMAMENT_SCHEDULING_DIMACS_REMOVE_NODE_H
#define FIRMAMENT_SCHEDULING_DIMACS_REMOVE_NODE_H

#include "base/types.h"
#include "misc/map-util.h"
#include "scheduling/flow_graph_arc.h"
#include "scheduling/flow_graph_node.h"

#include "scheduling/dimacs_change.h"

namespace firmament {

  class DIMACSRemoveNode : public DIMACSChange {

  public:
  DIMACSRemoveNode(const FlowGraphNode& node): DIMACSChange(), node_id_(node.id_) {
    }

    const string GenerateChange() const;

  private:
    uint64_t node_id_;

  };

} // namespace firmament

#endif // FIRMAMENT_SCHEDULING_DIMACS_REMOVE_NODE_H
