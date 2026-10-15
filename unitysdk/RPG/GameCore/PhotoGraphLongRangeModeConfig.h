#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PhotoGraphLongRangeModeConfig; }

#define RPG_GAMECORE_PHOTOGRAPHLONGRANGEMODECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9116B0)
#define RPG_GAMECORE_PHOTOGRAPHLONGRANGEMODECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D911530)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PhotoGraphLongRangeModeConfig_TypeDefinitionIndex = 21657;

	class PhotoGraphLongRangeModeConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean HideResultToast; // 0x10
		::System::Boolean ShowSaveBtn; // 0x11
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHLONGRANGEMODECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PhotoGraphLongRangeModeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PhotoGraphLongRangeModeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHLONGRANGEMODECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
