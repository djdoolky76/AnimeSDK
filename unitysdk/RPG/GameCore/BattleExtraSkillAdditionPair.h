#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleExtraPropertyAdditionPair.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BattleExtraSkillAdditionPair; }

#define RPG_GAMECORE_BATTLEEXTRASKILLADDITIONPAIR_CTOR_OFFSET UNITYSDK_OFFSET(0x1E66E940)
#define RPG_GAMECORE_BATTLEEXTRASKILLADDITIONPAIR_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E66E950)
#define RPG_GAMECORE_BATTLEEXTRASKILLADDITIONPAIR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E66EDC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleExtraSkillAdditionPair_TypeDefinitionIndex = 24092;

	class BattleExtraSkillAdditionPair : public ::RPG::GameCore::BattleExtraPropertyAdditionPair
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEXTRASKILLADDITIONPAIR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::BattleExtraSkillAdditionPair* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BattleExtraSkillAdditionPair*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEXTRASKILLADDITIONPAIR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::BattleExtraSkillAdditionPair* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BattleExtraSkillAdditionPair*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEXTRASKILLADDITIONPAIR_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
