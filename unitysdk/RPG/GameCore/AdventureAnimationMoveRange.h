#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdventureAnimationMoveRange; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVENTUREANIMATIONMOVERANGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3B68E0)
#define RPG_GAMECORE_ADVENTUREANIMATIONMOVERANGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3B6300)

namespace RPG::GameCore
{
	class AdventureAnimationMoveRange : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x10
		::System::Boolean IgnoreRadius; // 0x18
		::System::Byte _padding0[0x7];
		::RPG::GameCore::DynamicFloat* OffsetTargetDistance; // 0x20
		::RPG::GameCore::DynamicFloat* NormalizedTimeStart; // 0x28
		::RPG::GameCore::DynamicFloat* NormalizedTimeEnd; // 0x30
		::RPG::GameCore::DynamicFloat* MovePercentage; // 0x38
		::RPG::GameCore::DynamicFloat* DefaultMoveDistance; // 0x40
		::RPG::GameCore::DynamicFloat* MaxMoveDistance; // 0x48
		::System::Boolean OnlyMoveForward; // 0x50
		::System::Byte _padding1[0x7];
		::RPG::GameCore::DynamicFloat* MaxSpeed; // 0x58
		::RPG::GameCore::DynamicFloat* SteerNormalizedTimeStart; // 0x60
		::RPG::GameCore::DynamicFloat* SteerNormalizedTimeEnd; // 0x68
		::RPG::GameCore::DynamicFloat* MaxSteerSpeed; // 0x70
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREANIMATIONMOVERANGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureAnimationMoveRange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureAnimationMoveRange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREANIMATIONMOVERANGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
