#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackFormulaType.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/AttackTypeMask.h"
#include "unitysdk/RPG/GameCore/DamageIntegerizeCategory.h"
#include "unitysdk/RPG/GameCore/FinalDamageFormulaType.h"
#include "unitysdk/RPG/GameCore/HitTimeSlowIntensity.h"
#include "unitysdk/RPG/GameCore/HitTimeSlowType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AttackDamageTypeConfig; }
namespace RPG::GameCore { class AttackData; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class HitMotionParams; }
namespace RPG::GameCore { class HitTargetTimeSlowConfig; }
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_ATTACKDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEBA960)
#define RPG_GAMECORE_ATTACKDATA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DEBAD00)
#define RPG_GAMECORE_ATTACKDATA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DEBA820)
#define RPG_GAMECORE_ATTACKDATA_SHAREBYCOPY_OFFSET UNITYSDK_OFFSET(0x1DEBBF90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AttackData_TypeDefinitionIndex = 23008;

	class AttackData : public ::RPG::GameCore::JsonConfig
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
		::RPG::GameCore::DynamicFloat* DamageMulRatio; // 0x50
		::System::Boolean IsIndirect; // 0x58
		::System::Boolean IsNotHit; // 0x59
		::System::Byte _padding2[0x2];
		::RPG::GameCore::DamageIntegerizeCategory IntegerizeCategory; // 0x5C
		::RPG::GameCore::DynamicFloat* SPHitRatio; // 0x60
		::RPG::GameCore::AttackDamageTypeConfig* StanceDamageType; // 0x68
		::System::Boolean ForceMatchStanceWeakness; // 0x70
		::System::Byte _padding3[0x3];
		::RPG::GameCore::AttackType AttackType; // 0x74
		::RPG::GameCore::AttackTypeMask ExtraAttackTypeMask; // 0x78
		::System::Byte _padding4[0x4];
		::Il2CppArray<::RPG::GameCore::JsonEnum*>* DamageTag; // 0x80
		::RPG::GameCore::DynamicString* CustomName; // 0x88
		::System::Boolean DoNotTriggerBreak; // 0x90
		::System::Byte _padding5[0x7];
		::RPG::GameCore::DynamicFloat* BreakDamagePercentage; // 0x98
		::RPG::GameCore::DynamicFloat* ElationDamagePercentage; // 0xA0
		::RPG::GameCore::FinalDamageFormulaType FinalFormulaType; // 0xA8
		::System::Boolean IsMortallyWonded; // 0xAC
		::System::Boolean IsNonlethal; // 0xAD
		::System::Byte _padding6[0x2];
		::RPG::GameCore::JsonEnum* DamageBehavior; // 0xB0
		::RPG::GameCore::DynamicFloat* FrameHalt; // 0xB8
		::System::Boolean FrameHaltActiveNextFrame; // 0xC0
		::System::Boolean IsFaceToHitDir; // 0xC1
		::System::Byte _padding7[0x6];
		::System::String* HitAnimation; // 0xC8
		::System::String* HitEffectKey; // 0xD0
		::System::String* HitEffect; // 0xD8
		::RPG::GameCore::DynamicFloat* HitEffectMinMutexTime; // 0xE0
		::RPG::GameCore::DynamicFloat* HitEffectMaxMutexCount; // 0xE8
		::Il2CppArray<::System::String*>* HitRandomEffect; // 0xF0
		::System::Single HitEffectHeight; // 0xF8
		::System::Boolean IsHitEffectOffsetByScale; // 0xFC
		::System::Byte _padding8[0x3];
		::System::Single HitEffectOffsetAngle; // 0x100
		::RPG::GameCore::HitTimeSlowType HitTimeSlowType; // 0x104
		::RPG::GameCore::HitTimeSlowIntensity HitTimeSlowIntensity; // 0x108
		::System::Byte _padding9[0x4];
		::RPG::GameCore::HitMotionParams* HitMotion; // 0x110
		::System::Single HitPosHeight; // 0x118
		::System::Single HitAngleHorizontal; // 0x11C
		::System::Single RandomHitAngleHorizontal; // 0x120
		::System::Single HitAngleVertical; // 0x124
		::RPG::GameCore::TargetEvaluator* HitSource; // 0x128
		::System::Boolean TriggerHPBarAnimation; // 0x130
		::System::Boolean ScreenSpaceFloatMsg; // 0x131
		::System::Byte _padding10[0x6];
		::RPG::GameCore::HitTargetTimeSlowConfig* HitTargetTimeSlow; // 0x138
		::RPG::GameCore::TargetEvaluator* InheritTargetType; // 0x140
		::System::Boolean InheritDamageType; // 0x148
		::System::Boolean InheritHitEffect; // 0x149
		::System::Boolean InheritHitAnimation; // 0x14A
		::System::Boolean InheritHitPos; // 0x14B
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ATTACKDATA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AttackData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AttackData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ATTACKDATA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AttackData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AttackData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ATTACKDATA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		::System::Object* ShareByCopy()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ATTACKDATA_SHAREBYCOPY_OFFSET))(this);
		}

	};
}
