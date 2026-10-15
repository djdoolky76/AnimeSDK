#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseCameraConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimLevelCameraConfig; }
namespace RPG::GameCore { class LevelTriggerInfo; }

#define RPG_GAMECORE_FIVEDIMLEVELCAMERACONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6B1920)
#define RPG_GAMECORE_FIVEDIMLEVELCAMERACONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6B1950)
#define RPG_GAMECORE_FIVEDIMLEVELCAMERACONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6C5EF0)

namespace RPG::GameCore
{
	class FiveDimLevelCameraConfig : public ::RPG::GameCore::FiveDimBaseCameraConfig
	{
	public:
		::System::Boolean CreateTrigger; // 0x90
		::System::Byte _padding0[0x7];
		::RPG::GameCore::LevelTriggerInfo* TriggerInfo; // 0x98
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMLEVELCAMERACONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimLevelCameraConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimLevelCameraConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMLEVELCAMERACONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimLevelCameraConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimLevelCameraConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMLEVELCAMERACONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
