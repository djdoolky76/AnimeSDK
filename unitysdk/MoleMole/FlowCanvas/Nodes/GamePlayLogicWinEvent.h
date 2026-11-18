#pragma once
#include "unitysdk/unitysdk.h"

namespace FlowCanvas { class FlowOutput; }
namespace ParadoxNotion { class IEventData; }
namespace ParadoxNotion::Services { class EventRouter; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_GAMEPLAYLOGICWINEVENT_ONRECEIVEEVENT_OFFSET UNITYSDK_OFFSET(0x1B4AB670)
#define MOLEMOLE_FLOWCANVAS_NODES_GAMEPLAYLOGICWINEVENT_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1B4AB5F0)
#define MOLEMOLE_FLOWCANVAS_NODES_GAMEPLAYLOGICWINEVENT_SUBSCRIBE_OFFSET UNITYSDK_OFFSET(0x1B4AB3B0)
#define MOLEMOLE_FLOWCANVAS_NODES_GAMEPLAYLOGICWINEVENT_UNSUBSCRIBE_OFFSET UNITYSDK_OFFSET(0x1B4AB4D0)
#define MOLEMOLE_FLOWCANVAS_NODES_GAMEPLAYLOGICWINEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4AB740)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int GamePlayLogicWinEvent_TypeDefinitionIndex = 45896;

	class GamePlayLogicWinEvent
	{
	public:
		::FlowCanvas::FlowOutput* _onReceived; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_GAMEPLAYLOGICWINEVENT__CTOR_OFFSET))(this);
		}

		::System::Void Subscribe(::ParadoxNotion::Services::EventRouter* router)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_GAMEPLAYLOGICWINEVENT_SUBSCRIBE_OFFSET))(this, router);
		}

		::System::Void UnSubscribe(::ParadoxNotion::Services::EventRouter* router)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_GAMEPLAYLOGICWINEVENT_UNSUBSCRIBE_OFFSET))(this, router);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_GAMEPLAYLOGICWINEVENT_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void OnReceiveEvent(::System::String* eventName, ::ParadoxNotion::IEventData* msg)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::ParadoxNotion::IEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_GAMEPLAYLOGICWINEVENT_ONRECEIVEEVENT_OFFSET))(this, eventName, msg);
		}
	};
}
