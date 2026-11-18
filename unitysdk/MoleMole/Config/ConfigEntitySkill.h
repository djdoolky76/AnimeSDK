#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/EntitySkillType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGENTITYSKILL_EQUALSSKILLTYPE_OFFSET UNITYSDK_OFFSET(0x18B95890)
#define MOLEMOLE_CONFIG_CONFIGENTITYSKILL_ISEXQTE_OFFSET UNITYSDK_OFFSET(0x18B958F0)
#define MOLEMOLE_CONFIG_CONFIGENTITYSKILL__CTOR_OFFSET UNITYSDK_OFFSET(0x18B95870)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntitySkill_TypeDefinitionIndex = 78193;

	class ConfigEntitySkill : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* TagList; // 0x10
		::System::String* InstantTriggerAbilityName; // 0x18
		::System::String* InstantTriggerAnimEventID; // 0x20
		::MoleMole::Config::EntitySkillType SkillType; // 0x28
		::System::Boolean EPEmptyWhenInit; // 0x2C
		::System::Boolean NotConsumeFever; // 0x2D
		::System::Boolean ResetSlienceCdOnConsumeEP; // 0x2E
		::System::Byte _padding0[0x1];
		::System::Int32 SilenceCDRecoverEP; // 0x30
		::System::Int32 ConsumeOnceEP; // 0x34
		::System::Single NeedSp; // 0x38
		::System::Int32 ForceCDRecoverEP; // 0x3C
		::System::Single ForceCD; // 0x40
		::MoleMole::Config::EntitySkillType SkillType02; // 0x44
		::System::Int32 MaxEp; // 0x48
		::System::Single SilenceCD; // 0x4C
		::System::Single CountCD; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSKILL__CTOR_OFFSET))(this);
		}

		::System::Boolean EqualsSkillType(::MoleMole::Config::EntitySkillType inputSkillType)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::EntitySkillType))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSKILL_EQUALSSKILLTYPE_OFFSET))(this, inputSkillType);
		}

		::System::Boolean IsExQTE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSKILL_ISEXQTE_OFFSET))(this);
		}
	};
}
