#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimPropMoveConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimGeckoMoveConfig; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMGECKOMOVECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6C16D0)
#define RPG_GAMECORE_FIVEDIMGECKOMOVECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6C16F0)
#define RPG_GAMECORE_FIVEDIMGECKOMOVECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6C1690)

namespace RPG::GameCore
{
	class FiveDimGeckoMoveConfig : public ::RPG::GameCore::FiveDimPropMoveConfig
	{
	public:
		::System::Single FallGravityMultiplier; // 0x40
		::System::Single MaxFallSpeedMultiplier; // 0x44
		::System::Single LandingDuration; // 0x48
		::System::Byte _padding0[0x4];
		::System::String* OnFallEvent; // 0x50
		::System::String* OnLandEvent; // 0x58
		::System::String* OnRecoverEvent; // 0x60
		::System::String* OnHitPlayerEvent; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGECKOMOVECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimGeckoMoveConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimGeckoMoveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGECKOMOVECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimGeckoMoveConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimGeckoMoveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGECKOMOVECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
