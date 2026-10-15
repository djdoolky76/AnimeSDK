#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimMapSurfaceDefinitionConfig; }

#define RPG_GAMECORE_FIVEDIMMAPSURFACEDEFINITIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6C7C90)
#define RPG_GAMECORE_FIVEDIMMAPSURFACEDEFINITIONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6C7C50)

namespace RPG::GameCore
{
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
