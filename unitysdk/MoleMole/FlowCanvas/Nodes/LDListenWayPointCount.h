#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/FlowCanvas/Flow.h"

class ENGKPGFGGLM;
class NPBMNAMFCAB;
namespace FlowCanvas { class FlowInput; }
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Coroutine; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENWAYPOINTCOUNT_BINDEVENT_OFFSET UNITYSDK_OFFSET(0x162371B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENWAYPOINTCOUNT_HANDLERWAYPOINTEVT_OFFSET UNITYSDK_OFFSET(0x16237510)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENWAYPOINTCOUNT_INTERNALENTITYSTAYCOROUTINE_OFFSET UNITYSDK_OFFSET(0x162379E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENWAYPOINTCOUNT_ONENTITYENTERWAYPOINT_OFFSET UNITYSDK_OFFSET(0x16237650)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENWAYPOINTCOUNT_ONENTITYEXITWAYPOINT_OFFSET UNITYSDK_OFFSET(0x16237810)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENWAYPOINTCOUNT_ONEVENTFROMANYONE_OFFSET UNITYSDK_OFFSET(0x16237350)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENWAYPOINTCOUNT_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x162369B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENWAYPOINTCOUNT_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x162369F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENWAYPOINTCOUNT_ONNODETASKFINISH_OFFSET UNITYSDK_OFFSET(0x162375A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENWAYPOINTCOUNT_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x162367C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENWAYPOINTCOUNT_STARTLISTEN_OFFSET UNITYSDK_OFFSET(0x16236C10)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENWAYPOINTCOUNT_UNBINDEVENT_OFFSET UNITYSDK_OFFSET(0x16236A70)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENWAYPOINTCOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x16237A60)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENWAYPOINTCOUNT__REGISTERPORTS_B__19_0_OFFSET UNITYSDK_OFFSET(0x16237AA0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENWAYPOINTCOUNT___BASE_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x16237AD0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENWAYPOINTCOUNT___BASE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x16237AE0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDListenWayPointCount_TypeDefinitionIndex = 71360;

	class LDListenWayPointCount : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		// static const ::System::Single stayTickInterval; // 0x0
		::FlowCanvas::ValueInput_1<::System::String*>* waypointInput; // 0xA8
		::System::String* currWayPath; // 0xB0
		::FlowCanvas::ValueInput_1<::MoleMole::Battle::Entity*>* entityInput; // 0xB8
		::FlowCanvas::ValueInput_1<::System::String*>* waypathNameInput; // 0xC0
		::UnityEngine::Coroutine* stayWaypointCo; // 0xC8
		::FlowCanvas::FlowOutput* wayPointInPort; // 0xD0
		::FlowCanvas::FlowOutput* outputPort; // 0xD8
		::FlowCanvas::FlowInput* inputPort; // 0xE0
		::FlowCanvas::FlowOutput* wayPointStayPort; // 0xE8
		::FlowCanvas::FlowOutput* wayPointOutPort; // 0xF0
		::System::String* currWayPoint; // 0xF8
		::FlowCanvas::ValueInput_1<::System::Int32>* triggerCountInput; // 0x100
		::System::Single elapsedStart; // 0x108
		::System::Int32 currentListenCount; // 0x10C
		::System::Single timer; // 0x110
		::System::UInt32 listenEntityId; // 0x114
		::System::Boolean attachEventFinish; // 0x118
		::System::Boolean nodeStart; // 0x119

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENWAYPOINTCOUNT__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENWAYPOINTCOUNT_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENWAYPOINTCOUNT_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENWAYPOINTCOUNT_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Void StartListen(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENWAYPOINTCOUNT_STARTLISTEN_OFFSET))(this, f);
		}

		::System::Void BindEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENWAYPOINTCOUNT_BINDEVENT_OFFSET))(this);
		}

		::System::Void UnBindEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENWAYPOINTCOUNT_UNBINDEVENT_OFFSET))(this);
		}

		::System::Void OnEventFromAnyone(::ENGKPGFGGLM* evt)
		{
			return ((::System::Void(*)(::PVOID, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENWAYPOINTCOUNT_ONEVENTFROMANYONE_OFFSET))(this, evt);
		}

		::System::Void HandlerWayPointEvt(::NPBMNAMFCAB* evtWayPoint)
		{
			return ((::System::Void(*)(::PVOID, ::NPBMNAMFCAB*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENWAYPOINTCOUNT_HANDLERWAYPOINTEVT_OFFSET))(this, evtWayPoint);
		}

		::System::Void OnEntityEnterWaypoint(::System::String* path, ::System::String* waypoint, ::System::Single stayTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENWAYPOINTCOUNT_ONENTITYENTERWAYPOINT_OFFSET))(this, path, waypoint, stayTime);
		}

		::System::Void OnEntityExitWaypoint(::System::String* waypath, ::System::String* waypoint)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENWAYPOINTCOUNT_ONENTITYEXITWAYPOINT_OFFSET))(this, waypath, waypoint);
		}

		::System::Void OnNodeTaskFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENWAYPOINTCOUNT_ONNODETASKFINISH_OFFSET))(this);
		}

		::System::Collections::IEnumerator* InternalEntityStayCoroutine()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENWAYPOINTCOUNT_INTERNALENTITYSTAYCOROUTINE_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__19_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENWAYPOINTCOUNT__REGISTERPORTS_B__19_0_OFFSET))(this, f);
		}

		::System::Void __base_OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENWAYPOINTCOUNT___BASE_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void __base_OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENWAYPOINTCOUNT___BASE_ONGRAPHSTOPED_OFFSET))(this);
		}
	};
}
