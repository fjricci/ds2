//
// Copyright (c) 2014, Facebook, Inc.
// All rights reserved.
//
// This source code is licensed under the University of Illinois/NCSA Open
// Source License found in the LICENSE file in the root directory of this
// source tree. An additional grant of patent rights can be found in the
// PATENTS file in the same directory.
//

#include "DebugServer2/Target/Process.h"
#include "DebugServer2/Target/ThreadBase.h"

namespace ds2 {
namespace Target {

ThreadBase::ThreadBase(Process *process, ThreadId tid)
    : _process(process), _tid(tid), _state(kInvalid) {
  _process->insert(this);
}

ThreadBase::~ThreadBase() = default;

ErrorCode ThreadBase::prepareSoftwareSingleStep(Address const &) {
  return kErrorUnsupported;
}
}
}
