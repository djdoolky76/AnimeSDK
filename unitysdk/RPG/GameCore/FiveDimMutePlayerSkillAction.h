#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimMutePlayerSkillAction; }

#define RPG_GAMECORE_FIVEDIMMUTEPLAYERSKILLACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6A11D0)
#define RPG_GAMECORE_FIVEDIMMUTEPLAYERSKILLACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6A11E0)
#define RPG_GAMECORE_FIVEDIMMUTEPLAYERSKILLACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6A1100)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimMutePlayerSkillAction_TypeDefinitionIndex = 18769;

	class FiveDimMutePlayerSkillAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean IsMute; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMUTEPLAYERSKILLACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimMutePlayerSkillAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimMutePlayerSkillAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMUTEPLAYERSKILLACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimMutePlayerSkillAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimMutePlayerSkillAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMUTEPLAYERSKILLACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
