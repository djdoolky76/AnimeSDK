#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAISource.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ComplexSkillAISourceMaxTeamBPCost; }

#define RPG_GAMECORE_COMPLEXSKILLAISOURCEMAXTEAMBPCOST_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5D0BF0)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCEMAXTEAMBPCOST_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5D0C00)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCEMAXTEAMBPCOST_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5D0B30)

namespace RPG::GameCore
{
	class ComplexSkillAISourceMaxTeamBPCost : public ::RPG::GameCore::ComplexSkillAISource
	{
	public:
		::System::Boolean IsTarget; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEMAXTEAMBPCOST_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ComplexSkillAISourceMaxTeamBPCost* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ComplexSkillAISourceMaxTeamBPCost*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEMAXTEAMBPCOST_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ComplexSkillAISourceMaxTeamBPCost* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ComplexSkillAISourceMaxTeamBPCost*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEMAXTEAMBPCOST_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
