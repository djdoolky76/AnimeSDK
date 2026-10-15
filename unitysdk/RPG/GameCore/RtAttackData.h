#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackFormulaType.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/FinalDamageFormulaType.h"
#include "unitysdk/RPG/GameCore/HitTimeSlowIntensity.h"
#include "unitysdk/RPG/GameCore/HitTimeSlowType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AttackDamageTypeConfig; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class HitMotionParams; }
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class RtAttackData; }
namespace RPG::GameCore { class RtDamageExtraDataBase; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_RTATTACKDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA4AEB0)
#define RPG_GAMECORE_RTATTACKDATA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA49CB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtAttackData_TypeDefinitionIndex = 24160;

	class RtAttackData : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::AttackDamageTypeConfig* DamageType; // 0x10
		::RPG::GameCore::AttackFormulaType FormulaType; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicFloat* DamagePercentage; // 0x20
		::RPG::GameCore::DynamicFloat* DamageValue; // 0x28
		::RPG::GameCore::AttackFormulaType ExtraFormulaType; // 0x30
		::System::Byte _padding1[0x4];
		::RPG::GameCore::DynamicFloat* ExtraDamagePercentage; // 0x38
		::RPG::GameCore::DynamicFloat* StanceValue; // 0x40
		::RPG::GameCore::DynamicFloat* HitSplitRatio; // 0x48
		::System::Boolean IsIndirect; // 0x50
		::System::Boolean IsNotHit; // 0x51
		::System::Byte _padding2[0x6];
		::RPG::GameCore::DynamicFloat* SPHitRatio; // 0x58
		::RPG::GameCore::AttackDamageTypeConfig* StanceDamageType; // 0x60
		::System::Boolean ForceMatchStanceWeakness; // 0x68
		::System::Byte _padding3[0x3];
		::RPG::GameCore::AttackType AttackType; // 0x6C
		::Il2CppArray<::RPG::GameCore::JsonEnum*>* DamageTag; // 0x70
		::RPG::GameCore::DynamicString* CustomName; // 0x78
		::System::Boolean DoNotTriggerBreak; // 0x80
		::System::Byte _padding4[0x7];
		::RPG::GameCore::DynamicFloat* BreakDamagePercentage; // 0x88
		::RPG::GameCore::DynamicFloat* ElationDamagePercentage; // 0x90
		::RPG::GameCore::FinalDamageFormulaType FinalFormulaType; // 0x98
		::System::Boolean IsMortallyWonded; // 0x9C
		::System::Boolean IsNonlethal; // 0x9D
		::System::Byte _padding5[0x2];
		::RPG::GameCore::JsonEnum* DamageBehavior; // 0xA0
		::RPG::GameCore::DynamicFloat* FrameHalt; // 0xA8
		::System::Boolean FrameHaltActiveNextFrame; // 0xB0
		::System::Boolean IsFaceToHitDir; // 0xB1
		::System::Byte _padding6[0x6];
		::System::String* HitAnimation; // 0xB8
		::System::String* HitEffect; // 0xC0
		::RPG::GameCore::DynamicFloat* HitEffectMinMutexTime; // 0xC8
		::RPG::GameCore::DynamicFloat* HitEffectMaxMutexCount; // 0xD0
		::Il2CppArray<::System::String*>* HitRandomEffect; // 0xD8
		::System::Single HitEffectHeight; // 0xE0
		::System::Boolean IsHitEffectOffsetByScale; // 0xE4
		::System::Byte _padding7[0x3];
		::System::Single HitEffectOffsetAngle; // 0xE8
		::RPG::GameCore::HitTimeSlowType HitTimeSlowType; // 0xEC
		::RPG::GameCore::HitTimeSlowIntensity HitTimeSlowIntensity; // 0xF0
		::System::Byte _padding8[0x4];
		::RPG::GameCore::HitMotionParams* HitMotion; // 0xF8
		::System::Single HitPosHeight; // 0x100
		::System::Single HitAngleHorizontal; // 0x104
		::System::Single RandomHitAngleHorizontal; // 0x108
		::System::Single HitAngleVertical; // 0x10C
		::RPG::GameCore::TargetEvaluator* HitSource; // 0x110
		::System::Boolean TriggerHPBarAnimation; // 0x118
		::System::Boolean ScreenSpaceFloatMsg; // 0x119
		::System::Byte _padding9[0x6];
		::RPG::GameCore::TargetEvaluator* InheritTargetType; // 0x120
		::System::Boolean InheritDamageType; // 0x128
		::System::Boolean InheritHitEffect; // 0x129
		::System::Boolean InheritHitAnimation; // 0x12A
		::System::Boolean InheritHitPos; // 0x12B
		::System::Byte _padding10[0x4];
		::RPG::GameCore::RtDamageExtraDataBase* ExtraData; // 0x130
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTATTACKDATA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtAttackData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtAttackData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTATTACKDATA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
