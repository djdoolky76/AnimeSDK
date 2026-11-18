#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeGraph/GraphNodeFlow.h"
#include "unitysdk/NodeGraph/IGraphNode_NodeState.h"

namespace NodeGraph { class GraphOutputPort; }
namespace NodeGraph { class NodeGraphBase; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NODEGRAPH_MAINCITY_TRIGGER_CHECKCONDITION_OFFSET UNITYSDK_OFFSET(0xEEB5700)
#define NODEGRAPH_MAINCITY_TRIGGER_ONNODEACTIVEWITHSTATE_OFFSET UNITYSDK_OFFSET(0xEEB7520)
#define NODEGRAPH_MAINCITY_TRIGGER_ONNODEUPDATE_OFFSET UNITYSDK_OFFSET(0xEEB7840)
#define NODEGRAPH_MAINCITY_TRIGGER_ONREGISTERPARAM_OFFSET UNITYSDK_OFFSET(0xEEB71A0)
#define NODEGRAPH_MAINCITY_TRIGGER_ONTRIGGER_OFFSET UNITYSDK_OFFSET(0xEEB7E50)
#define NODEGRAPH_MAINCITY_TRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0xEEB5090)
#define NODEGRAPH_MAINCITY_TRIGGER__ONREGISTERPARAM_B__13_0_OFFSET UNITYSDK_OFFSET(0xEEB7E90)
#define NODEGRAPH_MAINCITY_TRIGGER__ONREGISTERPARAM_B__13_1_OFFSET UNITYSDK_OFFSET(0xEEB7EC0)
#define NODEGRAPH_MAINCITY_TRIGGER__ONREGISTERPARAM_B__13_2_OFFSET UNITYSDK_OFFSET(0xEEB7EF0)
#define NODEGRAPH_MAINCITY_TRIGGER__ONREGISTERPARAM_B__13_3_OFFSET UNITYSDK_OFFSET(0xEEB7F30)
#define NODEGRAPH_MAINCITY_TRIGGER__ONREGISTERPARAM_B__13_4_OFFSET UNITYSDK_OFFSET(0xEEB7F60)
#define NODEGRAPH_MAINCITY_TRIGGER__ONREGISTERPARAM_B__13_5_OFFSET UNITYSDK_OFFSET(0xEEB7F90)
#define NODEGRAPH_MAINCITY_TRIGGER___BASE_ONNODEACTIVEWITHSTATE_OFFSET UNITYSDK_OFFSET(0xEEB7FC0)
#define NODEGRAPH_MAINCITY_TRIGGER___BASE_ONNODEUPDATE_OFFSET UNITYSDK_OFFSET(0xEEB80B0)
#define NODEGRAPH_MAINCITY_TRIGGER___BASE_ONREGISTERPARAM_OFFSET UNITYSDK_OFFSET(0xEEB8060)

namespace NodeGraph::MainCity
{
	inline static constexpr unsigned int Trigger_TypeDefinitionIndex = 75579;

	class Trigger : public ::NodeGraph::GraphNodeFlow
	{
	public:
		::NodeGraph::GraphOutputPort* _onMaxCount; // 0x58
		::NodeGraph::GraphOutputPort* _onTrigger; // 0x60
		::System::Single conditionDuration; // 0x68
		::System::Single _cdTimer; // 0x6C
		::System::Boolean invert; // 0x70
		::System::Boolean InGroup; // 0x71
		::System::Boolean saveToSpecial; // 0x72
		::System::Boolean CheckResultByGroup; // 0x73
		::System::Single triggerDelta; // 0x74
		::System::Single _triggerTimer; // 0x78
		::System::Int32 repeatCount; // 0x7C
		::System::Int32 _triggerLocalCount; // 0x80

		::System::Void _ctor(::NodeGraph::NodeGraphBase* nodeGraphBase)
		{
			return ((::System::Void(*)(::PVOID, ::NodeGraph::NodeGraphBase*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_TRIGGER__CTOR_OFFSET))(this, nodeGraphBase);
		}

		::System::Void OnRegisterParam(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>* _paramRegister)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_TRIGGER_ONREGISTERPARAM_OFFSET))(this, _paramRegister);
		}

		::NodeGraph::IGraphNode_NodeState OnNodeActiveWithState()
		{
			return ((::NodeGraph::IGraphNode_NodeState(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_TRIGGER_ONNODEACTIVEWITHSTATE_OFFSET))(this);
		}

		::NodeGraph::IGraphNode_NodeState OnNodeUpdate(::System::Single deltaTime)
		{
			return ((::NodeGraph::IGraphNode_NodeState(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_TRIGGER_ONNODEUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void OnTrigger()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_TRIGGER_ONTRIGGER_OFFSET))(this);
		}

		::System::Boolean CheckCondition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_TRIGGER_CHECKCONDITION_OFFSET))(this);
		}

		::System::Void _OnRegisterParam_b__13_0(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_TRIGGER__ONREGISTERPARAM_B__13_0_OFFSET))(this, node);
		}

		::System::Void _OnRegisterParam_b__13_1(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_TRIGGER__ONREGISTERPARAM_B__13_1_OFFSET))(this, node);
		}

		::System::Void _OnRegisterParam_b__13_2(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_TRIGGER__ONREGISTERPARAM_B__13_2_OFFSET))(this, node);
		}

		::System::Void _OnRegisterParam_b__13_3(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_TRIGGER__ONREGISTERPARAM_B__13_3_OFFSET))(this, node);
		}

		::System::Void _OnRegisterParam_b__13_4(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_TRIGGER__ONREGISTERPARAM_B__13_4_OFFSET))(this, node);
		}

		::System::Void _OnRegisterParam_b__13_5(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_TRIGGER__ONREGISTERPARAM_B__13_5_OFFSET))(this, node);
		}

		::NodeGraph::IGraphNode_NodeState __base_OnNodeActiveWithState()
		{
			return ((::NodeGraph::IGraphNode_NodeState(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_TRIGGER___BASE_ONNODEACTIVEWITHSTATE_OFFSET))(this);
		}

		::System::Void __base_OnRegisterParam(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_TRIGGER___BASE_ONREGISTERPARAM_OFFSET))(this, P0);
		}

		::NodeGraph::IGraphNode_NodeState __base_OnNodeUpdate(::System::Single P0)
		{
			return ((::NodeGraph::IGraphNode_NodeState(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_TRIGGER___BASE_ONNODEUPDATE_OFFSET))(this, P0);
		}
	};
}
