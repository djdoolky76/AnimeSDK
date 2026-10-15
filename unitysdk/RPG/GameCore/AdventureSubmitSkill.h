#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdventureSubmitSkill; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVENTURESUBMITSKILL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3CDDC0)
#define RPG_GAMECORE_ADVENTURESUBMITSKILL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3CDE00)
#define RPG_GAMECORE_ADVENTURESUBMITSKILL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3CDD60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureSubmitSkill_TypeDefinitionIndex = 20219;

	class AdventureSubmitSkill : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Caster; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESUBMITSKILL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureSubmitSkill* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureSubmitSkill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESUBMITSKILL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureSubmitSkill* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureSubmitSkill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESUBMITSKILL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
