#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimPropMoveConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimCleanerBotMoveConfig; }
namespace RPG::GameCore { class FiveDimEffectItem; }
namespace RPG::GameCore { class FloatCurve; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMCLEANERBOTMOVECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D687680)
#define RPG_GAMECORE_FIVEDIMCLEANERBOTMOVECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6876C0)
#define RPG_GAMECORE_FIVEDIMCLEANERBOTMOVECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D687610)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimCleanerBotMoveConfig_TypeDefinitionIndex = 16690;

	class FiveDimCleanerBotMoveConfig : public ::RPG::GameCore::FiveDimPropMoveConfig
	{
	public:
		::System::Single FallGravityMultiplier; // 0x40
		::System::Single MaxFallSpeedMultiplier; // 0x44
		::System::Single FallDuration; // 0x48
		::System::Byte _padding0[0x4];
		::RPG::GameCore::FloatCurve* FallCurve; // 0x50
		::System::Single DefaultFallSpeed; // 0x58
		::System::Single LandingDuration; // 0x5C
		::System::Single LowFallThreshold; // 0x60
		::System::Single StuckAutoDestroyDuration; // 0x64
		::System::Single StuckRelaxedGroundQueryDuration; // 0x68
		::System::Byte _padding1[0x4];
		::System::String* OnLowFallEvent; // 0x70
		::System::String* OnLowLandEvent; // 0x78
		::System::String* OnFallEvent; // 0x80
		::System::String* OnLandEvent; // 0x88
		::System::String* OnRecoverEvent; // 0x90
		::System::String* OnBumpEvent; // 0x98
		::System::String* OnSteppedEvent; // 0xA0
		::System::String* OnLeaveEvent; // 0xA8
		::System::String* OnBounceEvent; // 0xB0
		::System::String* OnMoveLeftEvent; // 0xB8
		::System::String* OnMoveRightEvent; // 0xC0
		::System::String* MoveAudioEvent; // 0xC8
		::System::String* MoveStopAudioEvent; // 0xD0
		::System::String* MoveOnWaterAudioEvent; // 0xD8
		::System::String* MoveStopOnWaterAudioEvent; // 0xE0
		::System::String* MoveHitEvent; // 0xE8
		::Il2CppArray<::RPG::GameCore::FiveDimEffectItem*>* MoveTrailEffects; // 0xF0
		::Il2CppArray<::RPG::GameCore::FiveDimEffectItem*>* FadeOutEffects; // 0xF8
		::System::Boolean EnableTrampoline; // 0x100
		::System::Boolean OverrideJumpParams; // 0x101
		::System::Byte _padding2[0x2];
		::System::Single TrampolineJumpHeight; // 0x104
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCLEANERBOTMOVECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimCleanerBotMoveConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimCleanerBotMoveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCLEANERBOTMOVECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimCleanerBotMoveConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimCleanerBotMoveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCLEANERBOTMOVECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
