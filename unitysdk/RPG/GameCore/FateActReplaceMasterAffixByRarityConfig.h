#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FateActReplaceMasterAffixByRarityConfig; }

#define RPG_GAMECORE_FATEACTREPLACEMASTERAFFIXBYRARITYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D699F90)
#define RPG_GAMECORE_FATEACTREPLACEMASTERAFFIXBYRARITYCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D699FA0)
#define RPG_GAMECORE_FATEACTREPLACEMASTERAFFIXBYRARITYCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D699F50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateActReplaceMasterAffixByRarityConfig_TypeDefinitionIndex = 19236;

	class FateActReplaceMasterAffixByRarityConfig : public ::RPG::GameCore::FateActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTREPLACEMASTERAFFIXBYRARITYCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateActReplaceMasterAffixByRarityConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateActReplaceMasterAffixByRarityConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTREPLACEMASTERAFFIXBYRARITYCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateActReplaceMasterAffixByRarityConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateActReplaceMasterAffixByRarityConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTREPLACEMASTERAFFIXBYRARITYCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
