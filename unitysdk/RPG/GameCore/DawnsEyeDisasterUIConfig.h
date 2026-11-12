#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DawnsEyeWeatherUIBaseConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DawnsEyeDisasterUIConfig; }
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_DAWNSEYEDISASTERUICONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E806730)
#define RPG_GAMECORE_DAWNSEYEDISASTERUICONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E806740)
#define RPG_GAMECORE_DAWNSEYEDISASTERUICONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E8066E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DawnsEyeDisasterUIConfig_TypeDefinitionIndex = 23221;

	class DawnsEyeDisasterUIConfig : public ::RPG::GameCore::DawnsEyeWeatherUIBaseConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* Progress; // 0x10
		::RPG::GameCore::DynamicFloat* ShowWarning; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAWNSEYEDISASTERUICONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DawnsEyeDisasterUIConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DawnsEyeDisasterUIConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAWNSEYEDISASTERUICONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DawnsEyeDisasterUIConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DawnsEyeDisasterUIConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAWNSEYEDISASTERUICONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
