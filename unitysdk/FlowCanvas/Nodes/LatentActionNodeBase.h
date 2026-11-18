#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/LatentActionNodeBase_InvocationMode.h"
#include "unitysdk/FlowCanvas/Nodes/SimplexNode.h"
#include "unitysdk/FlowCanvas/Nodes/LatentActionNodeBase_RoutineData.h"
#include "unitysdk/FlowCanvas/Flow.h"

namespace FlowCanvas { class FlowNode; }
namespace FlowCanvas { class FlowOutput; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class Coroutine; }

#define FLOWCANVAS_NODES_LATENTACTIONNODEBASE_BEGIN_OFFSET UNITYSDK_OFFSET(0x1EBAB7B0)
#define FLOWCANVAS_NODES_LATENTACTIONNODEBASE_BREAKALL_OFFSET UNITYSDK_OFFSET(0x1EBAB710)
#define FLOWCANVAS_NODES_LATENTACTIONNODEBASE_GET_ALLOWROUTINEQUEUEING_OFFSET UNITYSDK_OFFSET(0x1EBABB50)
#define FLOWCANVAS_NODES_LATENTACTIONNODEBASE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1EBAB5C0)
#define FLOWCANVAS_NODES_LATENTACTIONNODEBASE_INTERNALCOROUTINE_OFFSET UNITYSDK_OFFSET(0x1EBAB950)
#define FLOWCANVAS_NODES_LATENTACTIONNODEBASE_ONBREAK_OFFSET UNITYSDK_OFFSET(0x1EBABB40)
#define FLOWCANVAS_NODES_LATENTACTIONNODEBASE_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x1EBAB690)
#define FLOWCANVAS_NODES_LATENTACTIONNODEBASE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x1EBAB6A0)
#define FLOWCANVAS_NODES_LATENTACTIONNODEBASE_ONREGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1EBAB9C0)
#define FLOWCANVAS_NODES_LATENTACTIONNODEBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EBABB60)
#define FLOWCANVAS_NODES_LATENTACTIONNODEBASE__INTERNALCOROUTINE_B__15_0_OFFSET UNITYSDK_OFFSET(0x1EBABB70)
#define FLOWCANVAS_NODES_LATENTACTIONNODEBASE__ONREGISTERPORTS_B__16_0_OFFSET UNITYSDK_OFFSET(0x1EBABB80)
#define FLOWCANVAS_NODES_LATENTACTIONNODEBASE__ONREGISTERPORTS_B__16_1_OFFSET UNITYSDK_OFFSET(0x1EBABB90)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int LatentActionNodeBase_TypeDefinitionIndex = 30723;

	class LatentActionNodeBase : public ::FlowCanvas::Nodes::SimplexNode
	{
	public:
		::UnityEngine::Coroutine* currentCoroutine; // 0x30
		::FlowCanvas::FlowOutput* onStart; // 0x38
		::System::Collections::Generic::Queue_1<::System::Object*>* routineQueue; // 0x40
		::FlowCanvas::FlowOutput* onFinish; // 0x48
		::FlowCanvas::FlowOutput* onUpdate; // 0x50
		::System::Boolean graphStoped; // 0x58
		::System::Byte _padding0[0x3];
		::FlowCanvas::Nodes::LatentActionNodeBase_InvocationMode invocationMode; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LATENTACTIONNODEBASE__CTOR_OFFSET))(this);
		}

		::System::String* get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LATENTACTIONNODEBASE_GET_NAME_OFFSET))(this);
		}

		::System::Void OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LATENTACTIONNODEBASE_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LATENTACTIONNODEBASE_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Void Begin(::System::Collections::IEnumerator* enumerator, ::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::IEnumerator*, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LATENTACTIONNODEBASE_BEGIN_OFFSET))(this, enumerator, f);
		}

		::System::Void BreakAll(::System::Boolean callFinish)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LATENTACTIONNODEBASE_BREAKALL_OFFSET))(this, callFinish);
		}

		::System::Collections::IEnumerator* InternalCoroutine(::FlowCanvas::Nodes::LatentActionNodeBase_RoutineData data)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::FlowCanvas::Nodes::LatentActionNodeBase_RoutineData))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LATENTACTIONNODEBASE_INTERNALCOROUTINE_OFFSET))(this, data);
		}

		::System::Void OnRegisterPorts(::FlowCanvas::FlowNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::FlowNode*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LATENTACTIONNODEBASE_ONREGISTERPORTS_OFFSET))(this, node);
		}

		::System::Void OnBreak()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LATENTACTIONNODEBASE_ONBREAK_OFFSET))(this);
		}

		::System::Boolean get_allowRoutineQueueing()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LATENTACTIONNODEBASE_GET_ALLOWROUTINEQUEUEING_OFFSET))(this);
		}

		::System::Void _InternalCoroutine_b__15_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LATENTACTIONNODEBASE__INTERNALCOROUTINE_B__15_0_OFFSET))(this);
		}

		::System::Void _OnRegisterPorts_b__16_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LATENTACTIONNODEBASE__ONREGISTERPORTS_B__16_0_OFFSET))(this, f);
		}

		::System::Void _OnRegisterPorts_b__16_1(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LATENTACTIONNODEBASE__ONREGISTERPORTS_B__16_1_OFFSET))(this, f);
		}
	};
}
