#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SkillType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShowBattleSkillEnhanced; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SHOWBATTLESKILLENHANCED_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAD8720)
#define RPG_GAMECORE_SHOWBATTLESKILLENHANCED_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAD8730)
#define RPG_GAMECORE_SHOWBATTLESKILLENHANCED_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAD86E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowBattleSkillEnhanced_TypeDefinitionIndex = 22927;

	class ShowBattleSkillEnhanced : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::SkillType SkillType; // 0x20
		::System::Int32 ChildSkillIndex; // 0x24
		::System::Boolean IsShow; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBATTLESKILLENHANCED_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowBattleSkillEnhanced* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowBattleSkillEnhanced*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBATTLESKILLENHANCED_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowBattleSkillEnhanced* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowBattleSkillEnhanced*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBATTLESKILLENHANCED_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
