#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierAddElationEquipSellPriceConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDELATIONEQUIPSELLPRICECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E93F380)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDELATIONEQUIPSELLPRICECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E93F390)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDELATIONEQUIPSELLPRICECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E93F340)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierAddElationEquipSellPriceConfig_TypeDefinitionIndex = 19806;

	class GridFightModifierAddElationEquipSellPriceConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDELATIONEQUIPSELLPRICECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierAddElationEquipSellPriceConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierAddElationEquipSellPriceConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDELATIONEQUIPSELLPRICECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierAddElationEquipSellPriceConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierAddElationEquipSellPriceConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDELATIONEQUIPSELLPRICECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
