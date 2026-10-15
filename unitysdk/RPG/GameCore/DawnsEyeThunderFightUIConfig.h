#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DawnsEyeWeatherUIBaseConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DawnsEyeThunderFightUIConfig; }
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_DAWNSEYETHUNDERFIGHTUICONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5C7220)
#define RPG_GAMECORE_DAWNSEYETHUNDERFIGHTUICONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5C7230)
#define RPG_GAMECORE_DAWNSEYETHUNDERFIGHTUICONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5C71D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DawnsEyeThunderFightUIConfig_TypeDefinitionIndex = 22798;

	class DawnsEyeThunderFightUIConfig : public ::RPG::GameCore::DawnsEyeWeatherUIBaseConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* DarkCharge; // 0x10
		::RPG::GameCore::DynamicFloat* LightCharge; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAWNSEYETHUNDERFIGHTUICONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DawnsEyeThunderFightUIConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DawnsEyeThunderFightUIConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAWNSEYETHUNDERFIGHTUICONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DawnsEyeThunderFightUIConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DawnsEyeThunderFightUIConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAWNSEYETHUNDERFIGHTUICONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
