#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class MonsterSkillRowData; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_BATTLEMONSTERTEAMDETAILSKILLDATA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1B1E8510)
#define RPG_CLIENT_BATTLEMONSTERTEAMDETAILSKILLDATA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1B1E8550)
#define RPG_CLIENT_BATTLEMONSTERTEAMDETAILSKILLDATA___C___SORTSKILLS_B__2_0_OFFSET UNITYSDK_OFFSET(0x1B1E8560)
#define RPG_CLIENT_BATTLEMONSTERTEAMDETAILSKILLDATA___C___SORTSKILLS_B__2_1_OFFSET UNITYSDK_OFFSET(0x1B1E8590)
#define RPG_CLIENT_BATTLEMONSTERTEAMDETAILSKILLDATA___C___SORTSKILLS_B__2_2_OFFSET UNITYSDK_OFFSET(0x1B1E85F0)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleMonsterTeamDetailSkillData___c_TypeDefinitionIndex = 74067;

	class BattleMonsterTeamDetailSkillData___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::GameCore::MonsterSkillRowData*, ::System::Boolean>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::RPG::GameCore::MonsterSkillRowData*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x671F0);
		}

		static ::System::Func_2<::RPG::GameCore::MonsterSkillRowData*, ::System::UInt32>** StaticGet___9__2_2()
		{
			return (::System::Func_2<::RPG::GameCore::MonsterSkillRowData*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x671F8);
		}

		static ::System::Func_2<::RPG::GameCore::MonsterSkillRowData*, ::System::UInt32>** StaticGet___9__2_1()
		{
			return (::System::Func_2<::RPG::GameCore::MonsterSkillRowData*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x67200);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x67208);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMONSTERTEAMDETAILSKILLDATA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMONSTERTEAMDETAILSKILLDATA___C_CTOR_OFFSET))(this);
		}

		::System::Boolean __SortSkills_b__2_0(::RPG::GameCore::MonsterSkillRowData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MonsterSkillRowData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMONSTERTEAMDETAILSKILLDATA___C___SORTSKILLS_B__2_0_OFFSET))(this, a1);
		}

		::System::UInt32 __SortSkills_b__2_1(::RPG::GameCore::MonsterSkillRowData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::MonsterSkillRowData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMONSTERTEAMDETAILSKILLDATA___C___SORTSKILLS_B__2_1_OFFSET))(this, a1);
		}

		::System::UInt32 __SortSkills_b__2_2(::RPG::GameCore::MonsterSkillRowData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::MonsterSkillRowData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMONSTERTEAMDETAILSKILLDATA___C___SORTSKILLS_B__2_2_OFFSET))(this, a1);
		}

	};
}
