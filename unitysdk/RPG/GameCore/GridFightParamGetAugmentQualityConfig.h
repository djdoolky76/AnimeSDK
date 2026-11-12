#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightParamGetAugmentQualityConfig; }

#define RPG_GAMECORE_GRIDFIGHTPARAMGETAUGMENTQUALITYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E946DB0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETAUGMENTQUALITYCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E946DC0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETAUGMENTQUALITYCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E946D70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetAugmentQualityConfig_TypeDefinitionIndex = 19843;

	class GridFightParamGetAugmentQualityConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETAUGMENTQUALITYCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamGetAugmentQualityConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamGetAugmentQualityConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETAUGMENTQUALITYCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamGetAugmentQualityConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamGetAugmentQualityConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETAUGMENTQUALITYCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
