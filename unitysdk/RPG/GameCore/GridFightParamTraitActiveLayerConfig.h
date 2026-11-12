#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightParamTraitActiveLayerConfig; }

#define RPG_GAMECORE_GRIDFIGHTPARAMTRAITACTIVELAYERCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E948620)
#define RPG_GAMECORE_GRIDFIGHTPARAMTRAITACTIVELAYERCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E948630)
#define RPG_GAMECORE_GRIDFIGHTPARAMTRAITACTIVELAYERCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E9485E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamTraitActiveLayerConfig_TypeDefinitionIndex = 19819;

	class GridFightParamTraitActiveLayerConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMTRAITACTIVELAYERCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamTraitActiveLayerConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamTraitActiveLayerConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMTRAITACTIVELAYERCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamTraitActiveLayerConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamTraitActiveLayerConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMTRAITACTIVELAYERCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
