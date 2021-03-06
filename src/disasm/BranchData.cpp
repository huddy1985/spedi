//===------------------------------------------------------------*- C++ -*-===//
//
// This file is distributed under BSD License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
// 
// Copyright (c) 2015-2016 University of Kaiserslautern.

#include "BranchData.h"
#include <cstring>

namespace disasm {

BranchData::BranchData() :
    m_direct_branch{false},
    m_conditional_branch{false},
    m_is_call{false},
    m_target{0} {
}
}
