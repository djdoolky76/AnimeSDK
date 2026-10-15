#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::LittleGame { class MonoTrigger; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace UnityEngine { class Collider; }

#define RPG_CLIENT_LITTLEGAME_MONOTRIGGER___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD46BDC0)
#define RPG_CLIENT_LITTLEGAME_MONOTRIGGER___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD46BDF0)
#define RPG_CLIENT_LITTLEGAME_MONOTRIGGER___C___SETLISTENGUESTCOLLIDERENABLE_B__13_0_OFFSET UNITYSDK_OFFSET(0xD46BE00)

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int MonoTrigger___c_TypeDefinitionIndex = 76512;

	class MonoTrigger___c : public ::System::Object
	{
	public:
		static ::System::Action_3<::RPG::Client::LittleGame::MonoTrigger*, ::UnityEngine::Collider*, ::System::Boolean>** StaticGet___9__13_0()
		{
			return (::System::Action_3<::RPG::Client::LittleGame::MonoTrigger*, ::UnityEngine::Collider*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client.LittleGame", "<>c")->GetStaticField(0x2B8C0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.LittleGame", "<>c")->GetStaticField(0x2B8C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MONOTRIGGER___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MONOTRIGGER___C_CTOR_OFFSET))(this);
		}

		::System::Void __SetListenGuestColliderEnable_b__13_0(::RPG::Client::LittleGame::MonoTrigger* a1, ::UnityEngine::Collider* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::MonoTrigger*, ::UnityEngine::Collider*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MONOTRIGGER___C___SETLISTENGUESTCOLLIDERENABLE_B__13_0_OFFSET))(this, a1, a2, a3);
		}

	};
}
