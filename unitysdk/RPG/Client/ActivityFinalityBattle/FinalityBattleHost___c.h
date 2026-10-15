#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LBJLBMOOJGM;
namespace System { class Object; }

#define RPG_CLIENT_ACTIVITYFINALITYBATTLE_FINALITYBATTLEHOST___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC3F0D70)
#define RPG_CLIENT_ACTIVITYFINALITYBATTLE_FINALITYBATTLEHOST___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC3F0DA0)
#define RPG_CLIENT_ACTIVITYFINALITYBATTLE_FINALITYBATTLEHOST___C___CCTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0xC3F0DB0)

namespace RPG::Client::ActivityFinalityBattle
{
	inline static constexpr unsigned int FinalityBattleHost___c_TypeDefinitionIndex = 82060;

	class FinalityBattleHost___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.ActivityFinalityBattle", "<>c")->GetStaticField(0x15730);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFINALITYBATTLE_FINALITYBATTLEHOST___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFINALITYBATTLE_FINALITYBATTLEHOST___C_CTOR_OFFSET))(this);
		}

		::LBJLBMOOJGM* __cctor_b__0_0()
		{
			return ((::LBJLBMOOJGM*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFINALITYBATTLE_FINALITYBATTLEHOST___C___CCTOR_B__0_0_OFFSET))(this);
		}

	};
}
