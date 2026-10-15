#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/ALKHIHHGNKG.h"
namespace RPG::Client { class UIDragScope; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_UIDRAGGHOST_AWAKE_OFFSET UNITYSDK_OFFSET(0xE399610)
#define RPG_CLIENT_UIDRAGGHOST_CTOR_OFFSET UNITYSDK_OFFSET(0xE399C10)
#define RPG_CLIENT_UIDRAGGHOST_KKCNMLOOPHE_OFFSET UNITYSDK_OFFSET(0xE399B20)
#define RPG_CLIENT_UIDRAGGHOST_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xE399960)
#define RPG_CLIENT_UIDRAGGHOST_ONENABLE_OFFSET UNITYSDK_OFFSET(0xE3996F0)

namespace RPG::Client
{
	class UIDragGhost : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::UIDragScope* OAMCDOCACHG; // 0x18
		::UnityEngine::RectTransform* JAKMENOCECF; // 0x20
		::UnityEngine::CanvasGroup* MLMFIEKIPHG; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGHOST_CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGHOST_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGHOST_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGHOST_ONDISABLE_OFFSET))(this);
		}

		::System::Void KKCNMLOOPHE(::ALKHIHHGNKG a1)
		{
			return ((::System::Void(*)(::PVOID, ::ALKHIHHGNKG))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGHOST_KKCNMLOOPHE_OFFSET))(this, a1);
		}

	};
}
