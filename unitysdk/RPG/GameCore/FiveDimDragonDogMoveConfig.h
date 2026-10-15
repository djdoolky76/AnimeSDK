#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimPropMoveConfig.h"
#include "unitysdk/RPG/MVector2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimDragonDogMoveConfig; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMDRAGONDOGMOVECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6B9DF0)
#define RPG_GAMECORE_FIVEDIMDRAGONDOGMOVECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6B9E20)
#define RPG_GAMECORE_FIVEDIMDRAGONDOGMOVECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6B9D90)

namespace RPG::GameCore
{
	class FiveDimDragonDogMoveConfig : public ::RPG::GameCore::FiveDimPropMoveConfig
	{
	public:
		::RPG::MVector2 DetectionCube; // 0x40
		::RPG::MVector2 DetectionOffset; // 0x48
		::System::Single FallGravityMultiplier; // 0x50
		::System::Single MaxFallSpeedMultiplier; // 0x54
		::System::Single LandingDuration; // 0x58
		::System::Single LandEventMinFallDistance; // 0x5C
		::System::Single HitRecoverDuration; // 0x60
		::System::Single PlayerCatchUpDistance; // 0x64
		::System::Single TargetCatchUpDistance; // 0x68
		::System::Single ObstacleDetectDistance; // 0x6C
		::System::String* OnFallEvent; // 0x70
		::System::String* OnLandEvent; // 0x78
		::System::String* OnRecoverEvent; // 0x80
		::System::String* OnMoveEvent; // 0x88
		::System::String* OnStopEvent; // 0x90
		::System::String* OnTurnEvent; // 0x98
		::System::String* OnHitEvent; // 0xA0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDRAGONDOGMOVECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimDragonDogMoveConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimDragonDogMoveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDRAGONDOGMOVECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimDragonDogMoveConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimDragonDogMoveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDRAGONDOGMOVECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
