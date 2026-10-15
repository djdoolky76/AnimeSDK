#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAISource.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAIValueInTeamType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ComplexSkillAISourceValueInTeamRatio; }

#define RPG_GAMECORE_COMPLEXSKILLAISOURCEVALUEINTEAMRATIO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5D23D0)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCEVALUEINTEAMRATIO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5D23E0)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCEVALUEINTEAMRATIO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5D2390)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComplexSkillAISourceValueInTeamRatio_TypeDefinitionIndex = 15527;

	class ComplexSkillAISourceValueInTeamRatio : public ::RPG::GameCore::ComplexSkillAISource
	{
	public:
		::RPG::GameCore::ComplexSkillAIValueInTeamType ValueType; // 0x10
		::System::Boolean OverrideRange; // 0x14
		::System::Byte _padding0[0x3];
		::RPG::GameCore::FixPoint OverrideMin; // 0x18
		::RPG::GameCore::FixPoint OverrideMax; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEVALUEINTEAMRATIO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ComplexSkillAISourceValueInTeamRatio* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ComplexSkillAISourceValueInTeamRatio*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEVALUEINTEAMRATIO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ComplexSkillAISourceValueInTeamRatio* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ComplexSkillAISourceValueInTeamRatio*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEVALUEINTEAMRATIO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
