#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightParamGetTraitTrailblazeCoinCostConfig; }

#define RPG_GAMECORE_GRIDFIGHTPARAMGETTRAITTRAILBLAZECOINCOSTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x208BFFA0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETTRAITTRAILBLAZECOINCOSTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x208BFFB0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETTRAITTRAILBLAZECOINCOSTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x208BFF60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetTraitTrailblazeCoinCostConfig_TypeDefinitionIndex = 19881;

	class GridFightParamGetTraitTrailblazeCoinCostConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETTRAITTRAILBLAZECOINCOSTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamGetTraitTrailblazeCoinCostConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamGetTraitTrailblazeCoinCostConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETTRAITTRAILBLAZECOINCOSTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamGetTraitTrailblazeCoinCostConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamGetTraitTrailblazeCoinCostConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETTRAITTRAILBLAZECOINCOSTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
