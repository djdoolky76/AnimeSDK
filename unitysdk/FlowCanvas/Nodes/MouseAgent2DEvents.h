#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/RaycastHit2D.h"
#include "unitysdk/ParadoxNotion/EventData.h"

namespace FlowCanvas { class FlowOutput; }
namespace ParadoxNotion::Services { class EventRouter; }
namespace UnityEngine { class Collider2D; }

#define FLOWCANVAS_NODES_MOUSEAGENT2DEVENTS_ONMOUSEDOWN_OFFSET UNITYSDK_OFFSET(0x1EF60440)
#define FLOWCANVAS_NODES_MOUSEAGENT2DEVENTS_ONMOUSEDRAG_OFFSET UNITYSDK_OFFSET(0x1EF60560)
#define FLOWCANVAS_NODES_MOUSEAGENT2DEVENTS_ONMOUSEENTER_OFFSET UNITYSDK_OFFSET(0x1EF600A0)
#define FLOWCANVAS_NODES_MOUSEAGENT2DEVENTS_ONMOUSEEXIT_OFFSET UNITYSDK_OFFSET(0x1EF603B0)
#define FLOWCANVAS_NODES_MOUSEAGENT2DEVENTS_ONMOUSEOVER_OFFSET UNITYSDK_OFFSET(0x1EF60320)
#define FLOWCANVAS_NODES_MOUSEAGENT2DEVENTS_ONMOUSEUP_OFFSET UNITYSDK_OFFSET(0x1EF604D0)
#define FLOWCANVAS_NODES_MOUSEAGENT2DEVENTS_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1EF5F7B0)
#define FLOWCANVAS_NODES_MOUSEAGENT2DEVENTS_STOREHIT_OFFSET UNITYSDK_OFFSET(0x1EF60130)
#define FLOWCANVAS_NODES_MOUSEAGENT2DEVENTS_SUBSCRIBE_OFFSET UNITYSDK_OFFSET(0x1EF5F920)
#define FLOWCANVAS_NODES_MOUSEAGENT2DEVENTS_UNSUBSCRIBE_OFFSET UNITYSDK_OFFSET(0x1EF5FCE0)
#define FLOWCANVAS_NODES_MOUSEAGENT2DEVENTS__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF605F0)
#define FLOWCANVAS_NODES_MOUSEAGENT2DEVENTS__REGISTERPORTS_B__8_0_OFFSET UNITYSDK_OFFSET(0x1EF60640)
#define FLOWCANVAS_NODES_MOUSEAGENT2DEVENTS__REGISTERPORTS_B__8_1_OFFSET UNITYSDK_OFFSET(0x1EF60650)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int MouseAgent2DEvents_TypeDefinitionIndex = 30275;

	class MouseAgent2DEvents
	{
	public:
		::FlowCanvas::FlowOutput* onDown; // 0xC0
		::FlowCanvas::FlowOutput* onEnter; // 0xC8
		::FlowCanvas::FlowOutput* onUp; // 0xD0
		::FlowCanvas::FlowOutput* onExit; // 0xD8
		::FlowCanvas::FlowOutput* onOver; // 0xE0
		::UnityEngine::Collider2D* receiver; // 0xE8
		::FlowCanvas::FlowOutput* onDrag; // 0xF0
		::UnityEngine::RaycastHit2D hit; // 0xF8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_MOUSEAGENT2DEVENTS__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_MOUSEAGENT2DEVENTS_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Subscribe(::ParadoxNotion::Services::EventRouter* router)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_MOUSEAGENT2DEVENTS_SUBSCRIBE_OFFSET))(this, router);
		}

		::System::Void UnSubscribe(::ParadoxNotion::Services::EventRouter* router)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_MOUSEAGENT2DEVENTS_UNSUBSCRIBE_OFFSET))(this, router);
		}

		::System::Void OnMouseEnter(::ParadoxNotion::EventData msg)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::EventData))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_MOUSEAGENT2DEVENTS_ONMOUSEENTER_OFFSET))(this, msg);
		}

		::System::Void OnMouseOver(::ParadoxNotion::EventData msg)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::EventData))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_MOUSEAGENT2DEVENTS_ONMOUSEOVER_OFFSET))(this, msg);
		}

		::System::Void OnMouseExit(::ParadoxNotion::EventData msg)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::EventData))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_MOUSEAGENT2DEVENTS_ONMOUSEEXIT_OFFSET))(this, msg);
		}

		::System::Void OnMouseDown(::ParadoxNotion::EventData msg)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::EventData))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_MOUSEAGENT2DEVENTS_ONMOUSEDOWN_OFFSET))(this, msg);
		}

		::System::Void OnMouseUp(::ParadoxNotion::EventData msg)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::EventData))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_MOUSEAGENT2DEVENTS_ONMOUSEUP_OFFSET))(this, msg);
		}

		::System::Void OnMouseDrag(::ParadoxNotion::EventData msg)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::EventData))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_MOUSEAGENT2DEVENTS_ONMOUSEDRAG_OFFSET))(this, msg);
		}

		::System::Void StoreHit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_MOUSEAGENT2DEVENTS_STOREHIT_OFFSET))(this);
		}

		::UnityEngine::Collider2D* _RegisterPorts_b__8_0()
		{
			return ((::UnityEngine::Collider2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_MOUSEAGENT2DEVENTS__REGISTERPORTS_B__8_0_OFFSET))(this);
		}

		::UnityEngine::RaycastHit2D _RegisterPorts_b__8_1()
		{
			return ((::UnityEngine::RaycastHit2D(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_MOUSEAGENT2DEVENTS__REGISTERPORTS_B__8_1_OFFSET))(this);
		}
	};
}
