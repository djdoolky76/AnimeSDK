#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAISource.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ComplexSkillAIGetStrengthLevel; }

#define RPG_GAMECORE_COMPLEXSKILLAIGETSTRENGTHLEVEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5CE420)
#define RPG_GAMECORE_COMPLEXSKILLAIGETSTRENGTHLEVEL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5CE430)
#define RPG_GAMECORE_COMPLEXSKILLAIGETSTRENGTHLEVEL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5CE3B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComplexSkillAIGetStrengthLevel_TypeDefinitionIndex = 15571;

	class ComplexSkillAIGetStrengthLevel : public ::RPG::GameCore::ComplexSkillAISource
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIGETSTRENGTHLEVEL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ComplexSkillAIGetStrengthLevel* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ComplexSkillAIGetStrengthLevel*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIGETSTRENGTHLEVEL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ComplexSkillAIGetStrengthLevel* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ComplexSkillAIGetStrengthLevel*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIGETSTRENGTHLEVEL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
