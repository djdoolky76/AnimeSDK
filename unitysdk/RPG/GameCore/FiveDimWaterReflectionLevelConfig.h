#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimWaterReflectionLevelConfig; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMWATERREFLECTIONLEVELCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6E2E00)
#define RPG_GAMECORE_FIVEDIMWATERREFLECTIONLEVELCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6E2C00)

namespace RPG::GameCore
{
	class FiveDimWaterReflectionLevelConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* WaterUniqueName; // 0x10
		::System::String* MatPath; // 0x18
		::System::String* MatPath_LowQuality; // 0x20
		::System::Boolean UseNearCameraFade; // 0x28
		::System::Byte _padding0[0x3];
		::System::Single NearCameraFadeOffset; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMWATERREFLECTIONLEVELCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimWaterReflectionLevelConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimWaterReflectionLevelConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMWATERREFLECTIONLEVELCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
