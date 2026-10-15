#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class BattleMonsterTeamDetailSkillData; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_BATTLEMONSTERTEAMDETAILDATA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC846100)
#define RPG_CLIENT_BATTLEMONSTERTEAMDETAILDATA___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC846140)
#define RPG_CLIENT_BATTLEMONSTERTEAMDETAILDATA___C__GETALLPHASESKILLS_B__3_0_OFFSET UNITYSDK_OFFSET(0xC846150)

namespace RPG::Client
{
	class BattleMonsterTeamDetailData___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x5B4F0);
		}

		static ::System::Comparison_1<::RPG::Client::BattleMonsterTeamDetailSkillData*>** StaticGet___9__3_0()
		{
			return (::System::Comparison_1<::RPG::Client::BattleMonsterTeamDetailSkillData*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x5B4F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMONSTERTEAMDETAILDATA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMONSTERTEAMDETAILDATA___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _GetAllPhaseSkills_b__3_0(::RPG::Client::BattleMonsterTeamDetailSkillData* a1, ::RPG::Client::BattleMonsterTeamDetailSkillData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::BattleMonsterTeamDetailSkillData*, ::RPG::Client::BattleMonsterTeamDetailSkillData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMONSTERTEAMDETAILDATA___C__GETALLPHASESKILLS_B__3_0_OFFSET))(this, a1, a2);
		}

	};
}
