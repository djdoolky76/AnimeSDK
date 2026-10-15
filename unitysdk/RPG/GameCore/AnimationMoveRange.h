#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/MoveOffsetCoordType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AnimationMoveRange; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_ANIMATIONMOVERANGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3C6710)
#define RPG_GAMECORE_ANIMATIONMOVERANGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3C5F20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AnimationMoveRange_TypeDefinitionIndex = 22462;

	class AnimationMoveRange : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x10
		::System::String* TargetAttachPointName; // 0x18
		::System::Boolean IsBehindTarget; // 0x20
		::System::Boolean IgnoreRadius; // 0x21
		::System::Boolean ApplyTargetPosY; // 0x22
		::System::Byte _padding0[0x5];
		::RPG::GameCore::DynamicFloat* Speed; // 0x28
		::RPG::GameCore::DynamicFloat* NormalizedExitTime; // 0x30
		::RPG::GameCore::DynamicFloat* OffsetTargetDistance; // 0x38
		::RPG::GameCore::MoveOffsetCoordType OffsetCoord; // 0x40
		::System::Byte _padding1[0x4];
		::RPG::GameCore::DynamicFloat* OffsetForward; // 0x48
		::RPG::GameCore::DynamicFloat* OffsetHorizontal; // 0x50
		::RPG::GameCore::DynamicFloat* OffsetVertical; // 0x58
		::RPG::GameCore::DynamicFloat* NormalizedTimeStart; // 0x60
		::RPG::GameCore::DynamicFloat* NormalizedTimeEnd; // 0x68
		::RPG::GameCore::DynamicFloat* MovePercentage; // 0x70
		::RPG::GameCore::DynamicFloat* DefaultMoveDistance; // 0x78
		::System::String* MoveCurve; // 0x80
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANIMATIONMOVERANGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AnimationMoveRange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AnimationMoveRange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANIMATIONMOVERANGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
