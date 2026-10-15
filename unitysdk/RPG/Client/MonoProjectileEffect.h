#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EAPGFKLGCDH.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace RPG::Client { class MonoProjectileEffect_JGIFFOCBKEB; }
namespace System { class Action; }
namespace UnityEngine { class Collider; }

#define RPG_CLIENT_MONOPROJECTILEEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0xD84F6C0)
#define RPG_CLIENT_MONOPROJECTILEEFFECT_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xD84F660)
#define RPG_CLIENT_MONOPROJECTILEEFFECT_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0xD84F510)
#define RPG_CLIENT_MONOPROJECTILEEFFECT_ONTRIGGEREXIT_OFFSET UNITYSDK_OFFSET(0xD84F590)
#define RPG_CLIENT_MONOPROJECTILEEFFECT_UPDATE_OFFSET UNITYSDK_OFFSET(0xD84F600)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoProjectileEffect_TypeDefinitionIndex = 70145;

	class MonoProjectileEffect : public ::UnityEngine::MonoBehaviour
	{
	public:
		::EAPGFKLGCDH effect; // 0x18
		::RPG::Client::MonoProjectileEffect_JGIFFOCBKEB* triggerEnterCallback; // 0x28
		::RPG::Client::MonoProjectileEffect_JGIFFOCBKEB* triggerExitCallback; // 0x30
		::System::Action* OnProjectileLateUpdate; // 0x38
		::System::Action* OnProjectileUpdate; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPROJECTILEEFFECT_CTOR_OFFSET))(this);
		}

		::System::Void OnTriggerEnter(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPROJECTILEEFFECT_ONTRIGGERENTER_OFFSET))(this, a1);
		}

		::System::Void OnTriggerExit(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPROJECTILEEFFECT_ONTRIGGEREXIT_OFFSET))(this, a1);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPROJECTILEEFFECT_UPDATE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPROJECTILEEFFECT_LATEUPDATE_OFFSET))(this);
		}

	};
}
