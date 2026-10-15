#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/RoadRash/ProjectileHitEffectConfig.h"
class BJIACBNKCCJ;
namespace RPG::Client::LittleGame::RoadRash { class RoadRashAbilityValueModifer; }
namespace UnityEngine { class AnimationCurve; }

namespace RPG::Client::LittleGame::RoadRash
{
	struct alignas(8) ProjectileParams
	{
		::System::Single InitHeight; // 0x10
		::System::Byte _padding0[0x4];
		::BJIACBNKCCJ* FlightStartRoad; // 0x18
		::System::Single FlightStartDistance; // 0x20
		::System::Single FlightStartOffset; // 0x24
		::System::Single FlightStartHeight; // 0x28
		::System::Single FlightDistance; // 0x2C
		::System::Single TravelDuration; // 0x30
		::System::Single DelayFallDuration; // 0x34
		::System::Single TotalFlightTime; // 0x38
		::System::Single FlightElapsedTime; // 0x3C
		::UnityEngine::AnimationCurve* TravelProgressCurve; // 0x40
		::RPG::Client::LittleGame::RoadRash::ProjectileHitEffectConfig HitEffectConfig; // 0x48
		::System::Single HitUltimateEnergy; // 0x68
		::System::Byte _padding1[0x4];
		::Il2CppArray<::RPG::Client::LittleGame::RoadRash::RoadRashAbilityValueModifer*>* HitSpeedModifiers; // 0x70
		::System::Single LaunchBehindDistance; // 0x78
		::System::Single LaunchLateralOffset; // 0x7C
		::System::Boolean IsTargetless; // 0x80
		::System::Byte _padding2[0x7];
		::BJIACBNKCCJ* TargetRoad; // 0x88
		::System::Single TargetDistance; // 0x90
		::System::Single TargetOffset; // 0x94
		::System::Single TargetHeight; // 0x98
	};
}
