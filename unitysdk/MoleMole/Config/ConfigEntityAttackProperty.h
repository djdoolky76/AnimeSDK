#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HFOOOAHPHGD.h"
#include "unitysdk/MoleMole/Config/AttackPropConfigType.h"
#include "unitysdk/MoleMole/Config/DamageElementType.h"
#include "unitysdk/MoleMole/Config/DamageHitType.h"
#include "unitysdk/MoleMole/Config/HitAnimDirectionType.h"
#include "unitysdk/MoleMole/Config/HitDataType.h"
#include "unitysdk/MoleMole/Config/HitDirectionType.h"
#include "unitysdk/MoleMole/Config/HitForwardType.h"
#include "unitysdk/MoleMole/Config/HitStrengthType.h"
#include "unitysdk/MoleMole/Config/SpecialDamageTextType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace MoleMole::Config { class AttackTimeSlowConfig; }
namespace MoleMole::Config { class ConfigHitEffect; }
namespace MoleMole::Config { class DynamicFloat; }
namespace MoleMole::Config { class DynamicInt; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGENTITYATTACKPROPERTY_CLONE_OFFSET UNITYSDK_OFFSET(0x1923CE90)
#define MOLEMOLE_CONFIG_CONFIGENTITYATTACKPROPERTY_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1923AD50)
#define MOLEMOLE_CONFIG_CONFIGENTITYATTACKPROPERTY_FROMFLX_OFFSET UNITYSDK_OFFSET(0x192351B0)
#define MOLEMOLE_CONFIG_CONFIGENTITYATTACKPROPERTY_GET_ANIMEVENTATTACK_OFFSET UNITYSDK_OFFSET(0x1923C980)
#define MOLEMOLE_CONFIG_CONFIGENTITYATTACKPROPERTY_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1923ADB0)
#define MOLEMOLE_CONFIG_CONFIGENTITYATTACKPROPERTY_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x19235230)
#define MOLEMOLE_CONFIG_CONFIGENTITYATTACKPROPERTY_SET_ANIMEVENTATTACK_OFFSET UNITYSDK_OFFSET(0x1923C990)
#define MOLEMOLE_CONFIG_CONFIGENTITYATTACKPROPERTY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1923CF90)
#define MOLEMOLE_CONFIG_CONFIGENTITYATTACKPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x1923C9E0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityAttackProperty_TypeDefinitionIndex = 63696;

	class ConfigEntityAttackProperty : public ::System::Object
	{
	public:
		static ::MoleMole::Config::ConfigEntityAttackProperty** StaticGet_DEFAULT()
		{
			return (::MoleMole::Config::ConfigEntityAttackProperty**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntityAttackProperty_TypeDefinitionIndex)->GetStaticField(0x3BDB0);
		}
		// static const ::System::String* CONFIG_PATH; // 0x0
		::MoleMole::Config::DynamicFloat* ExhaustedChaseValue; // 0x10
		::MoleMole::Config::DynamicFloat* ExhaustedAccumulationValue; // 0x18
		::System::String* AbilityTargetKey; // 0x20
		::MoleMole::Config::ConfigHitEffect* SkyHitEffect; // 0x28
		::MoleMole::Config::DynamicFloat* ElementAccumulationValue; // 0x30
		::MoleMole::Config::DynamicInt* FrameHalt; // 0x38
		::Il2CppArray<::System::String*>* TagTemplateList; // 0x40
		::MoleMole::Config::DynamicInt* TriggerBuffLevel; // 0x48
		::MoleMole::Config::DynamicInt* BackupGroundHitHeavyFrameHalt; // 0x50
		::System::String* StandardConfigKey; // 0x58
		::MoleMole::Config::DynamicFloat* EtherPurifyPercentage; // 0x60
		::Il2CppArray<::System::String*>* TagList; // 0x68
		::System::String* AttackerTimeSlowKey; // 0x70
		::MoleMole::Config::ConfigHitEffect* DownHitEffect; // 0x78
		::System::String* OverrideBackupHitGround; // 0x80
		::Il2CppArray<::System::String*>* ZoneTagsTemplateList; // 0x88
		::Il2CppArray<::System::String*>* ZoneTagsBlacklist; // 0x90
		::MoleMole::Config::DynamicInt* BackupFrameHalt; // 0x98
		::System::String* AttackeeTimeSlowKey; // 0xA0
		::Il2CppArray<::System::String*>* ZoneTags; // 0xA8
		::MoleMole::Config::DynamicInt* OverrideDamageStaggerLevel; // 0xB0
		::System::String* DistanceAttenuationCurve; // 0xB8
		::MoleMole::Config::DynamicInt* AttackerFrameHalt; // 0xC0
		::MoleMole::Config::ConfigHitEffect* GroundHitEffect; // 0xC8
		::System::Collections::Generic::List_1<::MoleMole::Config::AttackTimeSlowConfig*>* timeSlowList; // 0xD0
		::MoleMole::Config::DynamicInt* DamageBreakLevel; // 0xD8
		::MoleMole::Config::DynamicFloat* DamageBreakLevelProbability; // 0xE0
		::MoleMole::Config::DynamicFloat* BreakStunRatio; // 0xE8
		::MoleMole::Config::DynamicInt* BackupGroundHitHeavyAttackerFrameHalt; // 0xF0
		::MoleMole::Config::DynamicInt* DestructionDurability; // 0xF8
		::MoleMole::Config::DynamicInt* BackupAttackerFrameHalt; // 0x100
		::MoleMole::Config::DynamicInt* DestructionClass; // 0x108
		::System::String* OverrideBackupShake; // 0x110
		::MoleMole::Config::DynamicFloat* AddedDamageValue; // 0x118
		::MoleMole::Config::DynamicFloat* EtherInfectionPercentage; // 0x120
		::Il2CppArray<::System::String*>* ZoneTagsTemplateBlacklist; // 0x128
		::MoleMole::Config::DynamicFloat* DamagePercentage; // 0x130
		::MoleMole::Config::HitForwardType AttackHitForwardType; // 0x138
		::System::Boolean Neutral; // 0x13C
		::System::Boolean BanDamage; // 0x13D
		::System::Boolean ForceDamageInvincibleTarget; // 0x13E
		::System::Boolean IsIndirectTriggerCounter; // 0x13F
		::System::Boolean ForceDamageBlockTarget; // 0x140
		::System::Boolean IsUseBackupGroundHitHeavyFrameHalt; // 0x141
		::System::Boolean IsCauseExhausted; // 0x142
		::System::Boolean IsCauseStun; // 0x143
		::System::Boolean IsUseBackupFrameHalt; // 0x144
		::System::Boolean IsHeavyAttack; // 0x145
		::System::Boolean ForceDamageInWitchSlow; // 0x146
		::System::Byte _padding0[0x1];
		::MoleMole::Config::DamageElementType DamageElement; // 0x148
		::MoleMole::Config::HitAnimDirectionType AnimDirectionType; // 0x14C
		::MoleMole::Config::DamageHitType DamageHitType; // 0x150
		::HFOOOAHPHGD AtkSourceType; // 0x154
		::MoleMole::Config::HitStrengthType HitStrenType; // 0x158
		::System::Boolean Enemy; // 0x15C
		::System::Boolean IsIgnoreWallCheck; // 0x15D
		::System::Boolean isNoAnimAttackEvent; // 0x15E
		::System::Boolean IsSharpDamage; // 0x15F
		::System::Boolean OverrideDamageElementByAttackerElement; // 0x160
		::System::Boolean IsSkipDefAttack; // 0x161
		::System::Boolean Allied; // 0x162
		::System::Boolean IsHeal; // 0x163
		::System::Single DamageTextWaitTime; // 0x164
		::MoleMole::Config::HitDirectionType OverrideHitAttackeeDirType; // 0x168
		::MoleMole::Config::HitDataType HitType; // 0x16C
		::System::Int32 DamageTextID; // 0x170
		::MoleMole::Config::SpecialDamageTextType SpecialDamageTextType; // 0x174
		::System::Boolean IgnoreEvadeDummy; // 0x178
		::System::Boolean UseDistanceAttenuation; // 0x179
		::System::Boolean IsIndirect; // 0x17A
		::System::Boolean IsUseAbilityTargetKey; // 0x17B
		::MoleMole::Config::AttackPropConfigType AttackPropConfigEnum; // 0x17C
		::System::Int32 AtkSourceInt; // 0x180

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYATTACKPROPERTY__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYATTACKPROPERTY__CCTOR_OFFSET))();
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYATTACKPROPERTY_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYATTACKPROPERTY_INTERNALFROMFLX_OFFSET))(this, node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYATTACKPROPERTY_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYATTACKPROPERTY_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean get_AnimEventAttack()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYATTACKPROPERTY_GET_ANIMEVENTATTACK_OFFSET))(this);
		}

		::System::Void set_AnimEventAttack(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYATTACKPROPERTY_SET_ANIMEVENTATTACK_OFFSET))(this, value);
		}

		::MoleMole::Config::ConfigEntityAttackProperty* Clone()
		{
			return ((::MoleMole::Config::ConfigEntityAttackProperty*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYATTACKPROPERTY_CLONE_OFFSET))(this);
		}
	};
}
