#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeGraph/GraphNodeFlow.h"
#include "unitysdk/NodeGraph/IGraphNode_NodeState.h"

namespace NodeGraph { class GraphOutputPort; }
namespace NodeGraph { class GraphOutputValuePort; }
namespace NodeGraph { class NodeGraphBase; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NODEGRAPH_MAINCITY_FOREACH_ONNODEACTIVEWITHSTATE_OFFSET UNITYSDK_OFFSET(0x13A3BA10)
#define NODEGRAPH_MAINCITY_FOREACH_ONNODECLEAR_OFFSET UNITYSDK_OFFSET(0x13A3C620)
#define NODEGRAPH_MAINCITY_FOREACH_ONNODEEND_OFFSET UNITYSDK_OFFSET(0x13A3C690)
#define NODEGRAPH_MAINCITY_FOREACH_ONREGISTERPARAM_OFFSET UNITYSDK_OFFSET(0x13A3B7F0)
#define NODEGRAPH_MAINCITY_FOREACH__CTOR_OFFSET UNITYSDK_OFFSET(0x13A3B6D0)
#define NODEGRAPH_MAINCITY_FOREACH__ONREGISTERPARAM_B__12_0_OFFSET UNITYSDK_OFFSET(0x13A3C700)
#define NODEGRAPH_MAINCITY_FOREACH__ONREGISTERPARAM_B__12_1_OFFSET UNITYSDK_OFFSET(0x13A3D1A0)
#define NODEGRAPH_MAINCITY_FOREACH__ONREGISTERPARAM_B__12_2_OFFSET UNITYSDK_OFFSET(0x13A3DB40)
#define NODEGRAPH_MAINCITY_FOREACH___BASE_ONNODEACTIVEWITHSTATE_OFFSET UNITYSDK_OFFSET(0x13A3E510)
#define NODEGRAPH_MAINCITY_FOREACH___BASE_ONNODECLEAR_OFFSET UNITYSDK_OFFSET(0x13A3E5B0)
#define NODEGRAPH_MAINCITY_FOREACH___BASE_ONNODEEND_OFFSET UNITYSDK_OFFSET(0x13A3E640)
#define NODEGRAPH_MAINCITY_FOREACH___BASE_ONREGISTERPARAM_OFFSET UNITYSDK_OFFSET(0x13A3E6D0)

namespace NodeGraph::MainCity
{
	inline static constexpr unsigned int Foreach_TypeDefinitionIndex = 46219;

	class Foreach : public ::NodeGraph::GraphNodeFlow
	{
	public:
		::NodeGraph::GraphOutputPort* onProcess; // 0x58
		::System::Collections::Generic::List_1<::NodeGraph::GraphOutputValuePort*>* StringValue; // 0x60
		::NodeGraph::GraphOutputValuePort* IndexValue; // 0x68
		::System::Collections::Generic::List_1<::NodeGraph::GraphOutputValuePort*>* IntValue; // 0x70
		::System::Collections::Generic::List_1<::NodeGraph::GraphOutputValuePort*>* FloatValue; // 0x78
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Int32>*>* IntValues; // 0x80
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::String*>*>* StringValues; // 0x88
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Single>*>* FloatValues; // 0x90
		::NodeGraph::GraphOutputValuePort* IsLastValue; // 0x98
		::NodeGraph::GraphOutputPort* onEnd; // 0xA0
		::System::Int32 _index; // 0xA8

		::System::Void _ctor(::NodeGraph::NodeGraphBase* nodeGraphBase)
		{
			return ((::System::Void(*)(::PVOID, ::NodeGraph::NodeGraphBase*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_FOREACH__CTOR_OFFSET))(this, nodeGraphBase);
		}

		::System::Void OnRegisterParam(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>* _paramRegister)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_FOREACH_ONREGISTERPARAM_OFFSET))(this, _paramRegister);
		}

		::NodeGraph::IGraphNode_NodeState OnNodeActiveWithState()
		{
			return ((::NodeGraph::IGraphNode_NodeState(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_FOREACH_ONNODEACTIVEWITHSTATE_OFFSET))(this);
		}

		::System::Void OnNodeClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_FOREACH_ONNODECLEAR_OFFSET))(this);
		}

		::System::Void OnNodeEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_FOREACH_ONNODEEND_OFFSET))(this);
		}

		::System::Void _OnRegisterParam_b__12_0(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_FOREACH__ONREGISTERPARAM_B__12_0_OFFSET))(this, node);
		}

		::System::Void _OnRegisterParam_b__12_1(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_FOREACH__ONREGISTERPARAM_B__12_1_OFFSET))(this, node);
		}

		::System::Void _OnRegisterParam_b__12_2(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_FOREACH__ONREGISTERPARAM_B__12_2_OFFSET))(this, node);
		}

		::NodeGraph::IGraphNode_NodeState __base_OnNodeActiveWithState()
		{
			return ((::NodeGraph::IGraphNode_NodeState(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_FOREACH___BASE_ONNODEACTIVEWITHSTATE_OFFSET))(this);
		}

		::System::Void __base_OnNodeClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_FOREACH___BASE_ONNODECLEAR_OFFSET))(this);
		}

		::System::Void __base_OnNodeEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_FOREACH___BASE_ONNODEEND_OFFSET))(this);
		}

		::System::Void __base_OnRegisterParam(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_FOREACH___BASE_ONREGISTERPARAM_OFFSET))(this, P0);
		}
	};
}
