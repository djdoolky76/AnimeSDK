#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/ParadoxNotion/EventData.h"

namespace FlowCanvas { class FlowOutput; }
namespace ParadoxNotion::Services { class EventRouter; }
namespace UnityEngine { class Collider; }

#define FLOWCANVAS_NODES_MOUSEAGENTEVENTS_ONMOUSEDOWN_OFFSET UNITYSDK_OFFSET(0x1D5D1940)
#define FLOWCANVAS_NODES_MOUSEAGENTEVENTS_ONMOUSEDRAG_OFFSET UNITYSDK_OFFSET(0x1D5D1A60)
#define FLOWCANVAS_NODES_MOUSEAGENTEVENTS_ONMOUSEENTER_OFFSET UNITYSDK_OFFSET(0x1D5D15A0)
#define FLOWCANVAS_NODES_MOUSEAGENTEVENTS_ONMOUSEEXIT_OFFSET UNITYSDK_OFFSET(0x1D5D18B0)
#define FLOWCANVAS_NODES_MOUSEAGENTEVENTS_ONMOUSEOVER_OFFSET UNITYSDK_OFFSET(0x1D5D1820)
#define FLOWCANVAS_NODES_MOUSEAGENTEVENTS_ONMOUSEUP_OFFSET UNITYSDK_OFFSET(0x1D5D19D0)
#define FLOWCANVAS_NODES_MOUSEAGENTEVENTS_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1D5D0CB0)
#define FLOWCANVAS_NODES_MOUSEAGENTEVENTS_STOREHIT_OFFSET UNITYSDK_OFFSET(0x1D5D1630)
#define FLOWCANVAS_NODES_MOUSEAGENTEVENTS_SUBSCRIBE_OFFSET UNITYSDK_OFFSET(0x1D5D0E20)
#define FLOWCANVAS_NODES_MOUSEAGENTEVENTS_UNSUBSCRIBE_OFFSET UNITYSDK_OFFSET(0x1D5D11E0)
#define FLOWCANVAS_NODES_MOUSEAGENTEVENTS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5D1AF0)
#define FLOWCANVAS_NODES_MOUSEAGENTEVENTS__REGISTERPORTS_B__8_0_OFFSET UNITYSDK_OFFSET(0x1D5D1B40)
#define FLOWCANVAS_NODES_MOUSEAGENTEVENTS__REGISTERPORTS_B__8_1_OFFSET UNITYSDK_OFFSET(0x1D5D1B50)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int MouseAgentEvents_TypeDefinitionIndex = 29192;

	class MouseAgentEvents
	{
	public:
		::FlowCanvas::FlowOutput* onOver; // 0xC0
		::FlowCanvas::FlowOutput* onDown; // 0xC8
		::FlowCanvas::FlowOutput* onEnter; // 0xD0
		::FlowCanvas::FlowOutput* onExit; // 0xD8
		::FlowCanvas::FlowOutput* onUp; // 0xE0
		::UnityEngine::Collider* receiver; // 0xE8
		::FlowCanvas::FlowOutput* onDrag; // 0xF0
		::UnityEngine::RaycastHit hit; // 0xF8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_MOUSEAGENTEVENTS__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_MOUSEAGENTEVENTS_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Subscribe(::ParadoxNotion::Services::EventRouter* router)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_MOUSEAGENTEVENTS_SUBSCRIBE_OFFSET))(this, router);
		}

		::System::Void UnSubscribe(::ParadoxNotion::Services::EventRouter* router)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_MOUSEAGENTEVENTS_UNSUBSCRIBE_OFFSET))(this, router);
		}

		::System::Void OnMouseEnter(::ParadoxNotion::EventData msg)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::EventData))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_MOUSEAGENTEVENTS_ONMOUSEENTER_OFFSET))(this, msg);
		}

		::System::Void OnMouseOver(::ParadoxNotion::EventData msg)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::EventData))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_MOUSEAGENTEVENTS_ONMOUSEOVER_OFFSET))(this, msg);
		}

		::System::Void OnMouseExit(::ParadoxNotion::EventData msg)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::EventData))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_MOUSEAGENTEVENTS_ONMOUSEEXIT_OFFSET))(this, msg);
		}

		::System::Void OnMouseDown(::ParadoxNotion::EventData msg)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::EventData))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_MOUSEAGENTEVENTS_ONMOUSEDOWN_OFFSET))(this, msg);
		}

		::System::Void OnMouseUp(::ParadoxNotion::EventData msg)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::EventData))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_MOUSEAGENTEVENTS_ONMOUSEUP_OFFSET))(this, msg);
		}

		::System::Void OnMouseDrag(::ParadoxNotion::EventData msg)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::EventData))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_MOUSEAGENTEVENTS_ONMOUSEDRAG_OFFSET))(this, msg);
		}

		::System::Void StoreHit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_MOUSEAGENTEVENTS_STOREHIT_OFFSET))(this);
		}

		::UnityEngine::Collider* _RegisterPorts_b__8_0()
		{
			return ((::UnityEngine::Collider*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_MOUSEAGENTEVENTS__REGISTERPORTS_B__8_0_OFFSET))(this);
		}

		::UnityEngine::RaycastHit _RegisterPorts_b__8_1()
		{
			return ((::UnityEngine::RaycastHit(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_MOUSEAGENTEVENTS__REGISTERPORTS_B__8_1_OFFSET))(this);
		}
	};
}
