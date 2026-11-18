#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IAMFDNPIIKD.h"
#include "unitysdk/JKJKJDDKFIE.h"
#include "unitysdk/MoleMole/Arcade/CompanionProject/CpSkillEffectData.h"

namespace MoleMole::Arcade::CompanionProject { class CpAoeAreaParam; }

#define MOLEMOLE_ARCADE_COMPANIONPROJECT_CPSKILLEFFECTDAMAGEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1E749CE0)

namespace MoleMole::Arcade::CompanionProject
{
	inline static constexpr unsigned int CpSkillEffectDamageData_TypeDefinitionIndex = 94854;

	class CpSkillEffectDamageData : public ::MoleMole::Arcade::CompanionProject::CpSkillEffectData
	{
	public:
		::IAMFDNPIIKD selectTargetType; // 0x28
		::System::Byte _padding0[0x4];
		::MoleMole::Arcade::CompanionProject::CpAoeAreaParam* aoeAreaParam; // 0x30
		::JKJKJDDKFIE cpDamageInternal; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_COMPANIONPROJECT_CPSKILLEFFECTDAMAGEDATA__CTOR_OFFSET))(this);
		}
	};
}
