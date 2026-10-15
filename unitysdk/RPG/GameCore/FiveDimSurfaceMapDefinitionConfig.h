#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimSurfaceMapDefinitionConfig; }

#define RPG_GAMECORE_FIVEDIMSURFACEMAPDEFINITIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6E0790)
#define RPG_GAMECORE_FIVEDIMSURFACEMAPDEFINITIONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6E0750)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSurfaceMapDefinitionConfig_TypeDefinitionIndex = 18521;

	class FiveDimSurfaceMapDefinitionConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSURFACEMAPDEFINITIONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimSurfaceMapDefinitionConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimSurfaceMapDefinitionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSURFACEMAPDEFINITIONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
