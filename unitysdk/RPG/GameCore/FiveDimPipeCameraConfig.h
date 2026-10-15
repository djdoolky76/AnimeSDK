#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseCameraConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimPipeCameraConfig; }

#define RPG_GAMECORE_FIVEDIMPIPECAMERACONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6CFCA0)
#define RPG_GAMECORE_FIVEDIMPIPECAMERACONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6CFCD0)
#define RPG_GAMECORE_FIVEDIMPIPECAMERACONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6CFC50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimPipeCameraConfig_TypeDefinitionIndex = 18628;

	class FiveDimPipeCameraConfig : public ::RPG::GameCore::FiveDimBaseCameraConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPIPECAMERACONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimPipeCameraConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimPipeCameraConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPIPECAMERACONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimPipeCameraConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimPipeCameraConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPIPECAMERACONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
