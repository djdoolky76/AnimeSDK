#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/BaseMonoGenericView.h"
class EMJIDLCDFMI;
class HMBJNEDIDHB;
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace System { class String; }
namespace UnityEngine { class Collider; }

#define RPG_CLIENT_LITTLEGAME_MONOTRIGGER_AFACJKFOHND_OFFSET UNITYSDK_OFFSET(0xDEE2690)
#define RPG_CLIENT_LITTLEGAME_MONOTRIGGER_CTOR_OFFSET UNITYSDK_OFFSET(0xDEE2C80)
#define RPG_CLIENT_LITTLEGAME_MONOTRIGGER_GETCOLLIDER_OFFSET UNITYSDK_OFFSET(0xDEE20F0)
#define RPG_CLIENT_LITTLEGAME_MONOTRIGGER_GETENTITY_OFFSET UNITYSDK_OFFSET(0xDEE2000)
#define RPG_CLIENT_LITTLEGAME_MONOTRIGGER_GET_ISACTIVEANDENABLED_OFFSET UNITYSDK_OFFSET(0xDEE2190)
#define RPG_CLIENT_LITTLEGAME_MONOTRIGGER_GONECDMEKHG_OFFSET UNITYSDK_OFFSET(0xDEE2940)
#define RPG_CLIENT_LITTLEGAME_MONOTRIGGER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xDEE2040)
#define RPG_CLIENT_LITTLEGAME_MONOTRIGGER_INITTRIGGERRUNTIMEINFO_OFFSET UNITYSDK_OFFSET(0xDEE20A0)
#define RPG_CLIENT_LITTLEGAME_MONOTRIGGER_JMHFHECFHBI_OFFSET UNITYSDK_OFFSET(0xDEE2290)
#define RPG_CLIENT_LITTLEGAME_MONOTRIGGER_LOEAOMGAHLA_OFFSET UNITYSDK_OFFSET(0xDEE2C10)
#define RPG_CLIENT_LITTLEGAME_MONOTRIGGER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xDEE2BB0)
#define RPG_CLIENT_LITTLEGAME_MONOTRIGGER_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0xDEE24C0)
#define RPG_CLIENT_LITTLEGAME_MONOTRIGGER_ONTRIGGEREXIT_OFFSET UNITYSDK_OFFSET(0xDEE2B10)
#define RPG_CLIENT_LITTLEGAME_MONOTRIGGER_RELEASE_OFFSET UNITYSDK_OFFSET(0xDEE21A0)

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int MonoTrigger_TypeDefinitionIndex = 78843;

	class MonoTrigger : public ::RPG::Client::LittleGame::BaseMonoGenericView
	{
	public:
		::Entitas::IEntity* KAKEIDJDNHJ; // 0x20
		::HMBJNEDIDHB* BNAKBJCJGFM; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MONOTRIGGER_CTOR_OFFSET))(this);
		}

		::Entitas::IEntity* GetEntity()
		{
			return ((::Entitas::IEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MONOTRIGGER_GETENTITY_OFFSET))(this);
		}

		::System::Void Initialize(::Entitas::IContext* a1, ::EMJIDLCDFMI* a2, ::Entitas::IEntity* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::EMJIDLCDFMI*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MONOTRIGGER_INITIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void InitTriggerRuntimeInfo(::HMBJNEDIDHB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HMBJNEDIDHB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MONOTRIGGER_INITTRIGGERRUNTIMEINFO_OFFSET))(this, a1);
		}

		::UnityEngine::Collider* GetCollider()
		{
			return ((::UnityEngine::Collider*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MONOTRIGGER_GETCOLLIDER_OFFSET))(this);
		}

		::System::Boolean get_IsActiveAndEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MONOTRIGGER_GET_ISACTIVEANDENABLED_OFFSET))(this);
		}

		::System::Void Release(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MONOTRIGGER_RELEASE_OFFSET))(this, a1);
		}

		::System::Void OnTriggerEnter(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MONOTRIGGER_ONTRIGGERENTER_OFFSET))(this, a1);
		}

		::System::Void OnTriggerExit(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MONOTRIGGER_ONTRIGGEREXIT_OFFSET))(this, a1);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MONOTRIGGER_ONDISABLE_OFFSET))(this);
		}

		::System::Void GONECDMEKHG(::System::Boolean a1, ::UnityEngine::Collider* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MONOTRIGGER_GONECDMEKHG_OFFSET))(this, a1, a2);
		}

		::System::Void JMHFHECFHBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MONOTRIGGER_JMHFHECFHBI_OFFSET))(this);
		}

		::System::Void LOEAOMGAHLA(::UnityEngine::Collider* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MONOTRIGGER_LOEAOMGAHLA_OFFSET))(this, a1, a2);
		}

		::System::Void AFACJKFOHND(::UnityEngine::Collider* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MONOTRIGGER_AFACJKFOHND_OFFSET))(this, a1, a2);
		}

	};
}
