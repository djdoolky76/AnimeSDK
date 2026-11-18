#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/Status.h"
#include "unitysdk/NodeCanvas/StateMachines/FSMNode.h"
#include "unitysdk/NodeCanvas/StateMachines/FSMState_TransitionEvaluationMode.h"

namespace NodeCanvas::Framework { class IBlackboard; }
namespace NodeCanvas::Framework { class Node; }
namespace NodeCanvas::StateMachines { class FSMConnection; }
namespace UnityEngine { class Component; }

#define NODECANVAS_STATEMACHINES_FSMSTATE_CANCONNECTFROMSOURCE_OFFSET UNITYSDK_OFFSET(0x1EBB65C0)
#define NODECANVAS_STATEMACHINES_FSMSTATE_CANCONNECTTOTARGET_OFFSET UNITYSDK_OFFSET(0x1EBB6660)
#define NODECANVAS_STATEMACHINES_FSMSTATE_CHECKTRANSITIONS_OFFSET UNITYSDK_OFFSET(0x1EBB68F0)
#define NODECANVAS_STATEMACHINES_FSMSTATE_FINISH_1_OFFSET UNITYSDK_OFFSET(0x1EBB6580)
#define NODECANVAS_STATEMACHINES_FSMSTATE_FINISH_2_OFFSET UNITYSDK_OFFSET(0x1EBB6540)
#define NODECANVAS_STATEMACHINES_FSMSTATE_FINISH_OFFSET UNITYSDK_OFFSET(0x1EBB6530)
#define NODECANVAS_STATEMACHINES_FSMSTATE_GETTRANSITIONS_OFFSET UNITYSDK_OFFSET(0x1EBB6390)
#define NODECANVAS_STATEMACHINES_FSMSTATE_GET_ALLOWASPRIME_OFFSET UNITYSDK_OFFSET(0x1EBB6330)
#define NODECANVAS_STATEMACHINES_FSMSTATE_GET_CANSELFCONNECT_OFFSET UNITYSDK_OFFSET(0x1EBB6340)
#define NODECANVAS_STATEMACHINES_FSMSTATE_GET_MAXINCONNECTIONS_OFFSET UNITYSDK_OFFSET(0x1EBB6350)
#define NODECANVAS_STATEMACHINES_FSMSTATE_GET_MAXOUTCONNECTIONS_OFFSET UNITYSDK_OFFSET(0x1EBB6360)
#define NODECANVAS_STATEMACHINES_FSMSTATE_GET_TRANSITIONEVALUATION_OFFSET UNITYSDK_OFFSET(0x1EBB6370)
#define NODECANVAS_STATEMACHINES_FSMSTATE_ONENTER_OFFSET UNITYSDK_OFFSET(0x1EBB6C80)
#define NODECANVAS_STATEMACHINES_FSMSTATE_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1EBB6700)
#define NODECANVAS_STATEMACHINES_FSMSTATE_ONEXIT_OFFSET UNITYSDK_OFFSET(0x1EBB6CA0)
#define NODECANVAS_STATEMACHINES_FSMSTATE_ONGRAPHPAUSED_OFFSET UNITYSDK_OFFSET(0x1EBB65A0)
#define NODECANVAS_STATEMACHINES_FSMSTATE_ONINIT_OFFSET UNITYSDK_OFFSET(0x1EBB6C70)
#define NODECANVAS_STATEMACHINES_FSMSTATE_ONPAUSE_OFFSET UNITYSDK_OFFSET(0x1EBB6CB0)
#define NODECANVAS_STATEMACHINES_FSMSTATE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1EBB6B50)
#define NODECANVAS_STATEMACHINES_FSMSTATE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1EBB6C90)
#define NODECANVAS_STATEMACHINES_FSMSTATE_SET_TRANSITIONEVALUATION_OFFSET UNITYSDK_OFFSET(0x1EBB6380)
#define NODECANVAS_STATEMACHINES_FSMSTATE_UPDATE_OFFSET UNITYSDK_OFFSET(0x1EBB6890)
#define NODECANVAS_STATEMACHINES_FSMSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EBB6CC0)

namespace NodeCanvas::StateMachines
{
	inline static constexpr unsigned int FSMState_TypeDefinitionIndex = 29534;

	class FSMState : public ::NodeCanvas::StateMachines::FSMNode
	{
	public:
		::System::Boolean _hasInit; // 0x78
		::System::Byte _padding0[0x3];
		::NodeCanvas::StateMachines::FSMState_TransitionEvaluationMode _transitionEvaluation; // 0x7C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FSMSTATE__CTOR_OFFSET))(this);
		}

		::System::Boolean get_allowAsPrime()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FSMSTATE_GET_ALLOWASPRIME_OFFSET))(this);
		}

		::System::Boolean get_canSelfConnect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FSMSTATE_GET_CANSELFCONNECT_OFFSET))(this);
		}

		::System::Int32 get_maxInConnections()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FSMSTATE_GET_MAXINCONNECTIONS_OFFSET))(this);
		}

		::System::Int32 get_maxOutConnections()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FSMSTATE_GET_MAXOUTCONNECTIONS_OFFSET))(this);
		}

		::NodeCanvas::StateMachines::FSMState_TransitionEvaluationMode get_transitionEvaluation()
		{
			return ((::NodeCanvas::StateMachines::FSMState_TransitionEvaluationMode(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FSMSTATE_GET_TRANSITIONEVALUATION_OFFSET))(this);
		}

		::System::Void set_transitionEvaluation(::NodeCanvas::StateMachines::FSMState_TransitionEvaluationMode value)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::StateMachines::FSMState_TransitionEvaluationMode))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FSMSTATE_SET_TRANSITIONEVALUATION_OFFSET))(this, value);
		}

		::Il2CppArray<::NodeCanvas::StateMachines::FSMConnection*>* GetTransitions()
		{
			return ((::Il2CppArray<::NodeCanvas::StateMachines::FSMConnection*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FSMSTATE_GETTRANSITIONS_OFFSET))(this);
		}

		::System::Void Finish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FSMSTATE_FINISH_OFFSET))(this);
		}

		::System::Void Finish_1(::System::Boolean inSuccess)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FSMSTATE_FINISH_1_OFFSET))(this, inSuccess);
		}

		::System::Void Finish_2(::NodeCanvas::Framework::Status status)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::Status))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FSMSTATE_FINISH_2_OFFSET))(this, status);
		}

		::System::Void OnGraphPaused()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FSMSTATE_ONGRAPHPAUSED_OFFSET))(this);
		}

		::System::Boolean CanConnectFromSource(::NodeCanvas::Framework::Node* sourceNode)
		{
			return ((::System::Boolean(*)(::PVOID, ::NodeCanvas::Framework::Node*))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FSMSTATE_CANCONNECTFROMSOURCE_OFFSET))(this, sourceNode);
		}

		::System::Boolean CanConnectToTarget(::NodeCanvas::Framework::Node* targetNode)
		{
			return ((::System::Boolean(*)(::PVOID, ::NodeCanvas::Framework::Node*))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FSMSTATE_CANCONNECTTOTARGET_OFFSET))(this, targetNode);
		}

		::NodeCanvas::Framework::Status OnExecute(::UnityEngine::Component* agent, ::NodeCanvas::Framework::IBlackboard* bb)
		{
			return ((::NodeCanvas::Framework::Status(*)(::PVOID, ::UnityEngine::Component*, ::NodeCanvas::Framework::IBlackboard*))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FSMSTATE_ONEXECUTE_OFFSET))(this, agent, bb);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FSMSTATE_UPDATE_OFFSET))(this);
		}

		::System::Boolean CheckTransitions()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FSMSTATE_CHECKTRANSITIONS_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FSMSTATE_ONRESET_OFFSET))(this);
		}

		::System::Void OnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FSMSTATE_ONINIT_OFFSET))(this);
		}

		::System::Void OnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FSMSTATE_ONENTER_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FSMSTATE_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FSMSTATE_ONEXIT_OFFSET))(this);
		}

		::System::Void OnPause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FSMSTATE_ONPAUSE_OFFSET))(this);
		}
	};
}
