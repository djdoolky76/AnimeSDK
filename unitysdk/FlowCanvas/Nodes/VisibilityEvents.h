#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ParadoxNotion/EventData.h"

namespace FlowCanvas { class FlowOutput; }
namespace ParadoxNotion::Services { class EventRouter; }
namespace UnityEngine { class GameObject; }

#define FLOWCANVAS_NODES_VISIBILITYEVENTS_ONBECAMEINVISIBLE_OFFSET UNITYSDK_OFFSET(0x1EF886B0)
#define FLOWCANVAS_NODES_VISIBILITYEVENTS_ONBECAMEVISIBLE_OFFSET UNITYSDK_OFFSET(0x1EF88620)
#define FLOWCANVAS_NODES_VISIBILITYEVENTS_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1EF882A0)
#define FLOWCANVAS_NODES_VISIBILITYEVENTS_SUBSCRIBE_OFFSET UNITYSDK_OFFSET(0x1EF88360)
#define FLOWCANVAS_NODES_VISIBILITYEVENTS_UNSUBSCRIBE_OFFSET UNITYSDK_OFFSET(0x1EF884C0)
#define FLOWCANVAS_NODES_VISIBILITYEVENTS__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF88740)
#define FLOWCANVAS_NODES_VISIBILITYEVENTS__REGISTERPORTS_B__3_0_OFFSET UNITYSDK_OFFSET(0x1EF88790)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int VisibilityEvents_TypeDefinitionIndex = 30334;

	class VisibilityEvents
	{
	public:
		::FlowCanvas::FlowOutput* onInvisible; // 0xC0
		::FlowCanvas::FlowOutput* onVisible; // 0xC8
		::UnityEngine::GameObject* receiver; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_VISIBILITYEVENTS__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_VISIBILITYEVENTS_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Subscribe(::ParadoxNotion::Services::EventRouter* router)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_VISIBILITYEVENTS_SUBSCRIBE_OFFSET))(this, router);
		}

		::System::Void UnSubscribe(::ParadoxNotion::Services::EventRouter* router)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_VISIBILITYEVENTS_UNSUBSCRIBE_OFFSET))(this, router);
		}

		::System::Void OnBecameVisible(::ParadoxNotion::EventData msg)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::EventData))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_VISIBILITYEVENTS_ONBECAMEVISIBLE_OFFSET))(this, msg);
		}

		::System::Void OnBecameInvisible(::ParadoxNotion::EventData msg)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::EventData))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_VISIBILITYEVENTS_ONBECAMEINVISIBLE_OFFSET))(this, msg);
		}

		::UnityEngine::GameObject* _RegisterPorts_b__3_0()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_VISIBILITYEVENTS__REGISTERPORTS_B__3_0_OFFSET))(this);
		}
	};
}
