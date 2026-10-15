#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class IronTombNormalModeThresholdConfig; }

#define RPG_GAMECORE_IRONTOMBNORMALMODETHRESHOLDCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D78D3B0)
#define RPG_GAMECORE_IRONTOMBNORMALMODETHRESHOLDCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D78D190)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IronTombNormalModeThresholdConfig_TypeDefinitionIndex = 22803;

	class IronTombNormalModeThresholdConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* WarningThreshold; // 0x10
		::RPG::GameCore::DynamicFloat* ErrorThreshold; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IRONTOMBNORMALMODETHRESHOLDCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::IronTombNormalModeThresholdConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::IronTombNormalModeThresholdConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IRONTOMBNORMALMODETHRESHOLDCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
