#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/AvatarSystem/SeriesSkillConfig.h"

#define KGGBPMDINLI___C__DISPLAYCLASS13_0_CTOR_OFFSET UNITYSDK_OFFSET(0x19765620)
#define KGGBPMDINLI___C__DISPLAYCLASS13_0___BUILDCONFIGS_B__1_OFFSET UNITYSDK_OFFSET(0x19766370)

inline static constexpr unsigned int KGGBPMDINLI___c__DisplayClass13_0_TypeDefinitionIndex = 64186;

	class KGGBPMDINLI___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::System::UInt32 seriesSkillID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGGBPMDINLI___C__DISPLAYCLASS13_0_CTOR_OFFSET))(this);
		}

		::RPG::AvatarSystem::SeriesSkillConfig __BuildConfigs_b__1(::System::UInt32 a1)
		{
			return ((::RPG::AvatarSystem::SeriesSkillConfig(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KGGBPMDINLI___C__DISPLAYCLASS13_0___BUILDCONFIGS_B__1_OFFSET))(this, a1);
		}

	};
