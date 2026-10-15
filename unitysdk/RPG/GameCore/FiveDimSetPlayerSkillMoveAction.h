#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimSetPlayerSkillMoveAction; }

#define RPG_GAMECORE_FIVEDIMSETPLAYERSKILLMOVEACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6DA520)
#define RPG_GAMECORE_FIVEDIMSETPLAYERSKILLMOVEACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6DA530)
#define RPG_GAMECORE_FIVEDIMSETPLAYERSKILLMOVEACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6DA450)

namespace RPG::GameCore
{
	class FiveDimSetPlayerSkillMoveAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean IsEnter; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETPLAYERSKILLMOVEACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimSetPlayerSkillMoveAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimSetPlayerSkillMoveAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETPLAYERSKILLMOVEACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimSetPlayerSkillMoveAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimSetPlayerSkillMoveAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETPLAYERSKILLMOVEACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
