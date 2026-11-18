#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeGraph/NodeGraphVariables.h"
#include "unitysdk/NodeGraph/NodeGraphVariables_NodeGraphVariablesScope.h"

#define NODEGRAPH_NODEGRAPHGLOBALVARIABLES_GET_SCOPE_OFFSET UNITYSDK_OFFSET(0xE12CC20)
#define NODEGRAPH_NODEGRAPHGLOBALVARIABLES__CTOR_OFFSET UNITYSDK_OFFSET(0xE12CC30)

namespace NodeGraph
{
	inline static constexpr unsigned int NodeGraphGlobalVariables_TypeDefinitionIndex = 72024;

	class NodeGraphGlobalVariables : public ::NodeGraph::NodeGraphVariables
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_NODEGRAPHGLOBALVARIABLES__CTOR_OFFSET))(this);
		}

		::NodeGraph::NodeGraphVariables_NodeGraphVariablesScope get_Scope()
		{
			return ((::NodeGraph::NodeGraphVariables_NodeGraphVariablesScope(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_NODEGRAPHGLOBALVARIABLES_GET_SCOPE_OFFSET))(this);
		}
	};
}
