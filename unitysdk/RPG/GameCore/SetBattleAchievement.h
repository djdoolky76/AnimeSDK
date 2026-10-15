#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class SetBattleAchievement; }

#define RPG_GAMECORE_SETBATTLEACHIEVEMENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA96360)
#define RPG_GAMECORE_SETBATTLEACHIEVEMENT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA963D0)
#define RPG_GAMECORE_SETBATTLEACHIEVEMENT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA962D0)

namespace RPG::GameCore
{
	class SetBattleAchievement : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 AchievementID; // 0x18
		::RPG::GameCore::PropertyModifyFunction ModifyFunction; // 0x1C
		::RPG::GameCore::DynamicFloat* ModifyValue; // 0x20
		::System::Boolean TagMatch; // 0x28
		::System::Boolean ClientAuthority; // 0x29
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBATTLEACHIEVEMENT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetBattleAchievement* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetBattleAchievement*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBATTLEACHIEVEMENT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetBattleAchievement* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetBattleAchievement*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBATTLEACHIEVEMENT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
