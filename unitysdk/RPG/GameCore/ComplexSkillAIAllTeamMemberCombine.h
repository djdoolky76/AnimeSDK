#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAIListCombineType.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAISource.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ComplexSkillAIAllTeamMemberCombine; }
namespace RPG::GameCore { class ComplexSkillAISource; }

#define RPG_GAMECORE_COMPLEXSKILLAIALLTEAMMEMBERCOMBINE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D59F1C0)
#define RPG_GAMECORE_COMPLEXSKILLAIALLTEAMMEMBERCOMBINE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D59F1D0)
#define RPG_GAMECORE_COMPLEXSKILLAIALLTEAMMEMBERCOMBINE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D59F190)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComplexSkillAIAllTeamMemberCombine_TypeDefinitionIndex = 15541;

	class ComplexSkillAIAllTeamMemberCombine : public ::RPG::GameCore::ComplexSkillAISource
	{
	public:
		::RPG::GameCore::TeamType TeamType; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::GameCore::ComplexSkillAISource* Evaluator; // 0x18
		::RPG::GameCore::ComplexSkillAIListCombineType ListCombineType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIALLTEAMMEMBERCOMBINE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ComplexSkillAIAllTeamMemberCombine* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ComplexSkillAIAllTeamMemberCombine*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIALLTEAMMEMBERCOMBINE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ComplexSkillAIAllTeamMemberCombine* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ComplexSkillAIAllTeamMemberCombine*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIALLTEAMMEMBERCOMBINE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
