#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventCondition.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimPlayerSkillArrowCondition; }

#define RPG_GAMECORE_FIVEDIMPLAYERSKILLARROWCONDITION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6D25F0)
#define RPG_GAMECORE_FIVEDIMPLAYERSKILLARROWCONDITION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6D2600)
#define RPG_GAMECORE_FIVEDIMPLAYERSKILLARROWCONDITION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6D2580)

namespace RPG::GameCore
{
	class FiveDimPlayerSkillArrowCondition : public ::RPG::GameCore::FiveDimBaseEventCondition
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPLAYERSKILLARROWCONDITION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimPlayerSkillArrowCondition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimPlayerSkillArrowCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPLAYERSKILLARROWCONDITION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimPlayerSkillArrowCondition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimPlayerSkillArrowCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPLAYERSKILLARROWCONDITION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
