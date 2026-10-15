#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseCameraConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimSurfaceCameraConfig; }

#define RPG_GAMECORE_FIVEDIMSURFACECAMERACONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6DFCD0)
#define RPG_GAMECORE_FIVEDIMSURFACECAMERACONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6DFD00)
#define RPG_GAMECORE_FIVEDIMSURFACECAMERACONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6DFC80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSurfaceCameraConfig_TypeDefinitionIndex = 18626;

	class FiveDimSurfaceCameraConfig : public ::RPG::GameCore::FiveDimBaseCameraConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSURFACECAMERACONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimSurfaceCameraConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimSurfaceCameraConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSURFACECAMERACONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimSurfaceCameraConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimSurfaceCameraConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSURFACECAMERACONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
