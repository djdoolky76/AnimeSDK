#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ILBattleAvatarTag.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::ActivityIdleLive { class IdleLiveAvatarTagConfig; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONCONFIG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC4BD730)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONCONFIG___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC4BD760)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONCONFIG___C__CREATE_B__0_0_OFFSET UNITYSDK_OFFSET(0xC4BD770)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONCONFIG___C__CREATE_B__0_1_OFFSET UNITYSDK_OFFSET(0xC4BD780)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveDungeonConfig___c_TypeDefinitionIndex = 75199;

	class IdleLiveDungeonConfig___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveAvatarTagConfig*, ::System::Boolean>** StaticGet___9__0_1()
		{
			return (::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveAvatarTagConfig*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client.ActivityIdleLive", "<>c")->GetStaticField(0x244C0);
		}

		static ::System::Func_2<::RPG::GameCore::ILBattleAvatarTag, ::RPG::Client::ActivityIdleLive::IdleLiveAvatarTagConfig*>** StaticGet___9__0_0()
		{
			return (::System::Func_2<::RPG::GameCore::ILBattleAvatarTag, ::RPG::Client::ActivityIdleLive::IdleLiveAvatarTagConfig*>**)UnitySDK::FromName("RPG.Client.ActivityIdleLive", "<>c")->GetStaticField(0x244C8);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.ActivityIdleLive", "<>c")->GetStaticField(0x244D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONCONFIG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONCONFIG___C_CTOR_OFFSET))(this);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveAvatarTagConfig* _Create_b__0_0(::RPG::GameCore::ILBattleAvatarTag a1)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveAvatarTagConfig*(*)(::PVOID, ::RPG::GameCore::ILBattleAvatarTag))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONCONFIG___C__CREATE_B__0_0_OFFSET))(this, a1);
		}

		::System::Boolean _Create_b__0_1(::RPG::Client::ActivityIdleLive::IdleLiveAvatarTagConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveAvatarTagConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONCONFIG___C__CREATE_B__0_1_OFFSET))(this, a1);
		}

	};
}
