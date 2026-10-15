#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DawnsEyeWeatherUIBaseConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DawnsEyeSunnyUIConfig; }
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_DAWNSEYESUNNYUICONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5F4950)
#define RPG_GAMECORE_DAWNSEYESUNNYUICONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5F4960)
#define RPG_GAMECORE_DAWNSEYESUNNYUICONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5F4900)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DawnsEyeSunnyUIConfig_TypeDefinitionIndex = 22796;

	class DawnsEyeSunnyUIConfig : public ::RPG::GameCore::DawnsEyeWeatherUIBaseConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* Temperature; // 0x10
		::RPG::GameCore::DynamicFloat* Progress; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAWNSEYESUNNYUICONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DawnsEyeSunnyUIConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DawnsEyeSunnyUIConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAWNSEYESUNNYUICONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DawnsEyeSunnyUIConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DawnsEyeSunnyUIConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAWNSEYESUNNYUICONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
