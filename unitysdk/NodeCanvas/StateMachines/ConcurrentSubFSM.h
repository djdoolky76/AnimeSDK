#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::Framework { class BBParameter; }
namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace NodeCanvas::StateMachines { class FSM; }
namespace System { class String; }

#define NODECANVAS_STATEMACHINES_CONCURRENTSUBFSM_GET_ALLOWASPRIME_OFFSET UNITYSDK_OFFSET(0x1EB88C20)
#define NODECANVAS_STATEMACHINES_CONCURRENTSUBFSM_GET_MAXINCONNECTIONS_OFFSET UNITYSDK_OFFSET(0x1EB88C00)
#define NODECANVAS_STATEMACHINES_CONCURRENTSUBFSM_GET_MAXOUTCONNECTIONS_OFFSET UNITYSDK_OFFSET(0x1EB88C10)
#define NODECANVAS_STATEMACHINES_CONCURRENTSUBFSM_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1EB88BD0)
#define NODECANVAS_STATEMACHINES_CONCURRENTSUBFSM_GET_SUBGRAPHPARAMETER_OFFSET UNITYSDK_OFFSET(0x1EB88CF0)
#define NODECANVAS_STATEMACHINES_CONCURRENTSUBFSM_GET_SUBGRAPH_OFFSET UNITYSDK_OFFSET(0x1EB88C30)
#define NODECANVAS_STATEMACHINES_CONCURRENTSUBFSM_NODECANVAS_FRAMEWORK_IUPDATABLE_UPDATE_OFFSET UNITYSDK_OFFSET(0x1EB88EE0)
#define NODECANVAS_STATEMACHINES_CONCURRENTSUBFSM_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x1EB88D00)
#define NODECANVAS_STATEMACHINES_CONCURRENTSUBFSM_SET_SUBGRAPH_OFFSET UNITYSDK_OFFSET(0x1EB88C90)
#define NODECANVAS_STATEMACHINES_CONCURRENTSUBFSM__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB88EF0)
#define NODECANVAS_STATEMACHINES_CONCURRENTSUBFSM__ONGRAPHSTARTED_B__14_0_OFFSET UNITYSDK_OFFSET(0x1EB88F10)

namespace NodeCanvas::StateMachines
{
	inline static constexpr unsigned int ConcurrentSubFSM_TypeDefinitionIndex = 30196;

	class ConcurrentSubFSM
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::NodeCanvas::StateMachines::FSM*>* _subFSM; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_CONCURRENTSUBFSM__CTOR_OFFSET))(this);
		}

		::System::String* get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_CONCURRENTSUBFSM_GET_NAME_OFFSET))(this);
		}

		::System::Int32 get_maxInConnections()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_CONCURRENTSUBFSM_GET_MAXINCONNECTIONS_OFFSET))(this);
		}

		::System::Int32 get_maxOutConnections()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_CONCURRENTSUBFSM_GET_MAXOUTCONNECTIONS_OFFSET))(this);
		}

		::System::Boolean get_allowAsPrime()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_CONCURRENTSUBFSM_GET_ALLOWASPRIME_OFFSET))(this);
		}

		::NodeCanvas::StateMachines::FSM* get_subGraph()
		{
			return ((::NodeCanvas::StateMachines::FSM*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_CONCURRENTSUBFSM_GET_SUBGRAPH_OFFSET))(this);
		}

		::System::Void set_subGraph(::NodeCanvas::StateMachines::FSM* value)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::StateMachines::FSM*))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_CONCURRENTSUBFSM_SET_SUBGRAPH_OFFSET))(this, value);
		}

		::NodeCanvas::Framework::BBParameter* get_subGraphParameter()
		{
			return ((::NodeCanvas::Framework::BBParameter*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_CONCURRENTSUBFSM_GET_SUBGRAPHPARAMETER_OFFSET))(this);
		}

		::System::Void OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_CONCURRENTSUBFSM_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void NodeCanvas_Framework_IUpdatable_Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_CONCURRENTSUBFSM_NODECANVAS_FRAMEWORK_IUPDATABLE_UPDATE_OFFSET))(this);
		}

		::System::Void _OnGraphStarted_b__14_0(::System::Boolean result)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_CONCURRENTSUBFSM__ONGRAPHSTARTED_B__14_0_OFFSET))(this, result);
		}
	};
}
