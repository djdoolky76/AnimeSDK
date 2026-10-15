#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimSetAdvAchievementAction; }

#define RPG_GAMECORE_FIVEDIMSETADVACHIEVEMENTACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6AA7A0)
#define RPG_GAMECORE_FIVEDIMSETADVACHIEVEMENTACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6AA7B0)
#define RPG_GAMECORE_FIVEDIMSETADVACHIEVEMENTACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6AA700)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSetAdvAchievementAction_TypeDefinitionIndex = 18792;

	class FiveDimSetAdvAchievementAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::UInt32 AchievementID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETADVACHIEVEMENTACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimSetAdvAchievementAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimSetAdvAchievementAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETADVACHIEVEMENTACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimSetAdvAchievementAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimSetAdvAchievementAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETADVACHIEVEMENTACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
