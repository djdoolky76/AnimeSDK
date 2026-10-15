#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackFormulaType.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
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

#define RPG_GAMECORE_ATTACKDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D403170)
#define RPG_GAMECORE_ATTACKDATA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D403510)
#define RPG_GAMECORE_ATTACKDATA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D403030)
#define RPG_GAMECORE_ATTACKDATA_SHAREBYCOPY_OFFSET UNITYSDK_OFFSET(0x1D404760)

namespace RPG::GameCore
{
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
		::Il2CppArray<::RPG::GameCore::JsonEnum*>* DamageTag; // 0x78
		::RPG::GameCore::DynamicString* CustomName; // 0x80
		::System::Boolean DoNotTriggerBreak; // 0x88
		::System::Byte _padding4[0x7];
		::RPG::GameCore::DynamicFloat* BreakDamagePercentage; // 0x90
		::RPG::GameCore::DynamicFloat* ElationDamagePercentage; // 0x98
		::RPG::GameCore::FinalDamageFormulaType FinalFormulaType; // 0xA0
		::System::Boolean IsMortallyWonded; // 0xA4
		::System::Boolean IsNonlethal; // 0xA5
		::System::Byte _padding5[0x2];
		::RPG::GameCore::JsonEnum* DamageBehavior; // 0xA8
		::RPG::GameCore::DynamicFloat* FrameHalt; // 0xB0
		::System::Boolean FrameHaltActiveNextFrame; // 0xB8
		::System::Boolean IsFaceToHitDir; // 0xB9
		::System::Byte _padding6[0x6];
		::System::String* HitAnimation; // 0xC0
		::System::String* HitEffectKey; // 0xC8
		::System::String* HitEffect; // 0xD0
		::RPG::GameCore::DynamicFloat* HitEffectMinMutexTime; // 0xD8
		::RPG::GameCore::DynamicFloat* HitEffectMaxMutexCount; // 0xE0
		::Il2CppArray<::System::String*>* HitRandomEffect; // 0xE8
		::System::Single HitEffectHeight; // 0xF0
		::System::Boolean IsHitEffectOffsetByScale; // 0xF4
		::System::Byte _padding7[0x3];
		::System::Single HitEffectOffsetAngle; // 0xF8
		::RPG::GameCore::HitTimeSlowType HitTimeSlowType; // 0xFC
		::RPG::GameCore::HitTimeSlowIntensity HitTimeSlowIntensity; // 0x100
		::System::Byte _padding8[0x4];
		::RPG::GameCore::HitMotionParams* HitMotion; // 0x108
		::System::Single HitPosHeight; // 0x110
		::System::Single HitAngleHorizontal; // 0x114
		::System::Single RandomHitAngleHorizontal; // 0x118
		::System::Single HitAngleVertical; // 0x11C
		::RPG::GameCore::TargetEvaluator* HitSource; // 0x120
		::System::Boolean TriggerHPBarAnimation; // 0x128
		::System::Boolean ScreenSpaceFloatMsg; // 0x129
		::System::Byte _padding9[0x6];
		::RPG::GameCore::HitTargetTimeSlowConfig* HitTargetTimeSlow; // 0x130
		::RPG::GameCore::TargetEvaluator* InheritTargetType; // 0x138
		::System::Boolean InheritDamageType; // 0x140
		::System::Boolean InheritHitEffect; // 0x141
		::System::Boolean InheritHitAnimation; // 0x142
		::System::Boolean InheritHitPos; // 0x143
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
