#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace RPG::Client { class UIDragEventReceiver; }
namespace RPG::Client { class UIDragScope; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define RPG_CLIENT_UIDRAGEVENTRECEIVER_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xE399160)
#define RPG_CLIENT_UIDRAGEVENTRECEIVER_CTOR_OFFSET UNITYSDK_OFFSET(0xE399600)
#define RPG_CLIENT_UIDRAGEVENTRECEIVER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xE3993F0)
#define RPG_CLIENT_UIDRAGEVENTRECEIVER_ONDRAG_OFFSET UNITYSDK_OFFSET(0xE399260)
#define RPG_CLIENT_UIDRAGEVENTRECEIVER_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0xE399450)

namespace RPG::Client
{
	class UIDragEventReceiver : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::UIDragScope* OAMCDOCACHG; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGEVENTRECEIVER_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::UIDragEventReceiver* BPLPBPMEODA(::RPG::Client::UIDragScope* a1)
		{
			return ((::RPG::Client::UIDragEventReceiver*(*)(::RPG::Client::UIDragScope*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGEVENTRECEIVER_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGEVENTRECEIVER_ONDRAG_OFFSET))(this, a1);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGEVENTRECEIVER_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnEndDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGEVENTRECEIVER_ONENDDRAG_OFFSET))(this, a1);
		}

	};
}
