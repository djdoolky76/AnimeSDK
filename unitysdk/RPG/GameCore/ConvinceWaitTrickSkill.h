#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ConvinceTrickSkillType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ConvinceWaitTrickSkill; }

#define RPG_GAMECORE_CONVINCEWAITTRICKSKILL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5DFDC0)
#define RPG_GAMECORE_CONVINCEWAITTRICKSKILL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5DFDD0)
#define RPG_GAMECORE_CONVINCEWAITTRICKSKILL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5DFD90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConvinceWaitTrickSkill_TypeDefinitionIndex = 21844;

	class ConvinceWaitTrickSkill : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::ConvinceTrickSkillType TrickSkillType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEWAITTRICKSKILL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ConvinceWaitTrickSkill* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ConvinceWaitTrickSkill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEWAITTRICKSKILL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ConvinceWaitTrickSkill* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ConvinceWaitTrickSkill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEWAITTRICKSKILL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
