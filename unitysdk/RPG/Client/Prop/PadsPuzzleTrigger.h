#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace System { class Action; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_PROP_PADSPUZZLETRIGGER_CTOR_OFFSET UNITYSDK_OFFSET(0xDD64650)
#define RPG_CLIENT_PROP_PADSPUZZLETRIGGER_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0xDD64550)
#define RPG_CLIENT_PROP_PADSPUZZLETRIGGER_ONTRIGGEREXIT_OFFSET UNITYSDK_OFFSET(0xDD645D0)
#define RPG_CLIENT_PROP_PADSPUZZLETRIGGER_START_OFFSET UNITYSDK_OFFSET(0xDD644B0)

namespace RPG::Client::Prop
{
	class PadsPuzzleTrigger : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Action* onEnter; // 0x18
		::System::Action* onLeave; // 0x20
		::UnityEngine::Collider* PCBNMJBCPJP; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLETRIGGER_CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLETRIGGER_START_OFFSET))(this);
		}

		::System::Void OnTriggerEnter(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLETRIGGER_ONTRIGGERENTER_OFFSET))(this, a1);
		}

		::System::Void OnTriggerExit(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLETRIGGER_ONTRIGGEREXIT_OFFSET))(this, a1);
		}

	};
}
