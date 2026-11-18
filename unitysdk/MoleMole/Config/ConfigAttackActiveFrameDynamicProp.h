#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGATTACKACTIVEFRAMEDYNAMICPROP__CTOR_OFFSET UNITYSDK_OFFSET(0x18B91460)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigAttackActiveFrameDynamicProp_TypeDefinitionIndex = 56216;

	class ConfigAttackActiveFrameDynamicProp : public ::System::Object
	{
	public:
		::System::String* BlendCustomPropertyKey; // 0x10
		::System::Single CustomAttackPropertyPercent; // 0x18
		::System::Single ExhaustedAccumPercent; // 0x1C
		::System::Single IndividualFeverConsumePercent; // 0x20
		::System::Boolean IsOverrideDynamicProp; // 0x24
		::System::Byte _padding0[0x3];
		::System::Int32 OverrideDynamicPropKey2; // 0x28
		::System::Int32 OverrdieDynamicPropKey; // 0x2C
		::System::Single BreakStunRatioPercent; // 0x30
		::System::Single EtherInfectionPercentage; // 0x34
		::System::Single EpConsumePercent; // 0x38
		::System::Single ExhaustedChasePercent; // 0x3C
		::System::Single FeverRecoveryPercent; // 0x40
		::System::Single SpRecoveryPercent; // 0x44
		::System::Single IndividualFeverRecoverPercent; // 0x48
		::System::Single RpRecoveryPercent; // 0x4C
		::System::Single DamageRatioPercent; // 0x50
		::System::Single SpConsumePercent; // 0x54
		::System::Single RpConsumePercent; // 0x58
		::System::Single EtherPurifyPercentage; // 0x5C
		::System::Single EpRecoveryPercent; // 0x60
		::System::Single ElementAbnormalAccumPercent; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGATTACKACTIVEFRAMEDYNAMICPROP__CTOR_OFFSET))(this);
		}
	};
}
