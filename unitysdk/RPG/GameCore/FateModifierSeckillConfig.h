#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FateModifierSeckillConfig; }

#define RPG_GAMECORE_FATEMODIFIERSECKILLCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D66DF90)
#define RPG_GAMECORE_FATEMODIFIERSECKILLCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D66DFA0)
#define RPG_GAMECORE_FATEMODIFIERSECKILLCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D66DF50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateModifierSeckillConfig_TypeDefinitionIndex = 19277;

	class FateModifierSeckillConfig : public ::RPG::GameCore::FateModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERSECKILLCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateModifierSeckillConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateModifierSeckillConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERSECKILLCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateModifierSeckillConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateModifierSeckillConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERSECKILLCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
