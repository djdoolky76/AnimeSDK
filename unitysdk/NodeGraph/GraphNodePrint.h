#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeGraph/GraphNodeFlow.h"

namespace NodeGraph { class GraphInputValuePort; }
namespace NodeGraph { class NodeGraphBase; }
namespace System { class String; }

#define NODEGRAPH_GRAPHNODEPRINT_GET_NODENAME_OFFSET UNITYSDK_OFFSET(0x106CCE40)
#define NODEGRAPH_GRAPHNODEPRINT_ONNODEACTIVE_OFFSET UNITYSDK_OFFSET(0x106CCFE0)
#define NODEGRAPH_GRAPHNODEPRINT__CTOR_OFFSET UNITYSDK_OFFSET(0x106CCE80)
#define NODEGRAPH_GRAPHNODEPRINT___BASE_ONNODEACTIVE_OFFSET UNITYSDK_OFFSET(0x106CD0C0)

namespace NodeGraph
{
	inline static constexpr unsigned int GraphNodePrint_TypeDefinitionIndex = 51987;

	class GraphNodePrint : public ::NodeGraph::GraphNodeFlow
	{
	public:
		::NodeGraph::GraphInputValuePort* log; // 0x58

		::System::Void _ctor(::NodeGraph::NodeGraphBase* nodeGraphBase)
		{
			return ((::System::Void(*)(::PVOID, ::NodeGraph::NodeGraphBase*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHNODEPRINT__CTOR_OFFSET))(this, nodeGraphBase);
		}

		::System::String* get_NodeName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHNODEPRINT_GET_NODENAME_OFFSET))(this);
		}

		::System::Void OnNodeActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHNODEPRINT_ONNODEACTIVE_OFFSET))(this);
		}

		::System::Void __base_OnNodeActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHNODEPRINT___BASE_ONNODEACTIVE_OFFSET))(this);
		}
	};
}
