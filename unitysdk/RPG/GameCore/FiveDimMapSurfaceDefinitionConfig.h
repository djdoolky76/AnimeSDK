#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimMapSurfaceDefinitionConfig; }

#define RPG_GAMECORE_FIVEDIMMAPSURFACEDEFINITIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D69A220)
#define RPG_GAMECORE_FIVEDIMMAPSURFACEDEFINITIONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D69A1E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimMapSurfaceDefinitionConfig_TypeDefinitionIndex = 18522;

	class FiveDimMapSurfaceDefinitionConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMAPSURFACEDEFINITIONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimMapSurfaceDefinitionConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimMapSurfaceDefinitionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMAPSURFACEDEFINITIONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
