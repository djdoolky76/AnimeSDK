#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierSetBuyExpCostConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETBUYEXPCOSTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D707C90)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETBUYEXPCOSTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D707CA0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETBUYEXPCOSTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D707C50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierSetBuyExpCostConfig_TypeDefinitionIndex = 19405;

	class GridFightModifierSetBuyExpCostConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETBUYEXPCOSTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierSetBuyExpCostConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierSetBuyExpCostConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETBUYEXPCOSTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierSetBuyExpCostConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierSetBuyExpCostConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETBUYEXPCOSTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
