#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PhotoGraphTripodModeConfig; }

#define RPG_GAMECORE_PHOTOGRAPHTRIPODMODECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D913F50)
#define RPG_GAMECORE_PHOTOGRAPHTRIPODMODECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D913DF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PhotoGraphTripodModeConfig_TypeDefinitionIndex = 21658;

	class PhotoGraphTripodModeConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single ColliderRadius; // 0x10
		::System::Boolean UseFakePlayer; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHTRIPODMODECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PhotoGraphTripodModeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PhotoGraphTripodModeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHTRIPODMODECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
