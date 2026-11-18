#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DJDDGKFCNAJ_IGOPHLMOGAO.h"
#include "unitysdk/NodeGraph/GraphNodeFlow.h"
#include "unitysdk/NodeGraph/IGraphNode_NodeState.h"

namespace NodeGraph { class NodeGraphBase; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NODEGRAPH_MAINCITY_SETBLACKCURTAIN_ONNODEACTIVEWITHSTATE_OFFSET UNITYSDK_OFFSET(0x12917D20)
#define NODEGRAPH_MAINCITY_SETBLACKCURTAIN_ONNODEUPDATE_OFFSET UNITYSDK_OFFSET(0x12917F40)
#define NODEGRAPH_MAINCITY_SETBLACKCURTAIN_ONREGISTERPARAM_OFFSET UNITYSDK_OFFSET(0x12917B00)
#define NODEGRAPH_MAINCITY_SETBLACKCURTAIN__CTOR_OFFSET UNITYSDK_OFFSET(0x12917950)
#define NODEGRAPH_MAINCITY_SETBLACKCURTAIN__ONNODEACTIVEWITHSTATE_B__7_0_OFFSET UNITYSDK_OFFSET(0x12918140)
#define NODEGRAPH_MAINCITY_SETBLACKCURTAIN__ONREGISTERPARAM_B__6_0_OFFSET UNITYSDK_OFFSET(0x129180B0)
#define NODEGRAPH_MAINCITY_SETBLACKCURTAIN__ONREGISTERPARAM_B__6_1_OFFSET UNITYSDK_OFFSET(0x129180E0)
#define NODEGRAPH_MAINCITY_SETBLACKCURTAIN__ONREGISTERPARAM_B__6_2_OFFSET UNITYSDK_OFFSET(0x12918110)
#define NODEGRAPH_MAINCITY_SETBLACKCURTAIN___BASE_ONNODEACTIVEWITHSTATE_OFFSET UNITYSDK_OFFSET(0x12918150)
#define NODEGRAPH_MAINCITY_SETBLACKCURTAIN___BASE_ONNODEUPDATE_OFFSET UNITYSDK_OFFSET(0x129181F0)
#define NODEGRAPH_MAINCITY_SETBLACKCURTAIN___BASE_ONREGISTERPARAM_OFFSET UNITYSDK_OFFSET(0x12918290)

namespace NodeGraph::MainCity
{
	inline static constexpr unsigned int SetBlackCurtain_TypeDefinitionIndex = 64724;

	class SetBlackCurtain : public ::NodeGraph::GraphNodeFlow
	{
	public:
		::System::Single FadeTime; // 0x58
		::System::Single _timer; // 0x5C
		::System::Single WaitTime; // 0x60
		::System::Boolean _end; // 0x64
		::System::Boolean IsBlack; // 0x65

		::System::Void _ctor(::NodeGraph::NodeGraphBase* nodeGraphBase)
		{
			return ((::System::Void(*)(::PVOID, ::NodeGraph::NodeGraphBase*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETBLACKCURTAIN__CTOR_OFFSET))(this, nodeGraphBase);
		}

		::System::Void OnRegisterParam(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>* _paramRegister)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETBLACKCURTAIN_ONREGISTERPARAM_OFFSET))(this, _paramRegister);
		}

		::NodeGraph::IGraphNode_NodeState OnNodeActiveWithState()
		{
			return ((::NodeGraph::IGraphNode_NodeState(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETBLACKCURTAIN_ONNODEACTIVEWITHSTATE_OFFSET))(this);
		}

		::NodeGraph::IGraphNode_NodeState OnNodeUpdate(::System::Single deltaTime)
		{
			return ((::NodeGraph::IGraphNode_NodeState(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETBLACKCURTAIN_ONNODEUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void _OnRegisterParam_b__6_0(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETBLACKCURTAIN__ONREGISTERPARAM_B__6_0_OFFSET))(this, node);
		}

		::System::Void _OnRegisterParam_b__6_1(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETBLACKCURTAIN__ONREGISTERPARAM_B__6_1_OFFSET))(this, node);
		}

		::System::Void _OnRegisterParam_b__6_2(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETBLACKCURTAIN__ONREGISTERPARAM_B__6_2_OFFSET))(this, node);
		}

		::System::Void _OnNodeActiveWithState_b__7_0(::DJDDGKFCNAJ_IGOPHLMOGAO reason)
		{
			return ((::System::Void(*)(::PVOID, ::DJDDGKFCNAJ_IGOPHLMOGAO))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETBLACKCURTAIN__ONNODEACTIVEWITHSTATE_B__7_0_OFFSET))(this, reason);
		}

		::NodeGraph::IGraphNode_NodeState __base_OnNodeActiveWithState()
		{
			return ((::NodeGraph::IGraphNode_NodeState(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETBLACKCURTAIN___BASE_ONNODEACTIVEWITHSTATE_OFFSET))(this);
		}

		::NodeGraph::IGraphNode_NodeState __base_OnNodeUpdate(::System::Single P0)
		{
			return ((::NodeGraph::IGraphNode_NodeState(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETBLACKCURTAIN___BASE_ONNODEUPDATE_OFFSET))(this, P0);
		}

		::System::Void __base_OnRegisterParam(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETBLACKCURTAIN___BASE_ONREGISTERPARAM_OFFSET))(this, P0);
		}
	};
}
