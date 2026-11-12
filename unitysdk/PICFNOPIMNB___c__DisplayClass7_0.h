#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/AvatarSystem/SeriesSkillConfig.h"

#define PICFNOPIMNB___C__DISPLAYCLASS7_0_CTOR_OFFSET UNITYSDK_OFFSET(0xCB84340)
#define PICFNOPIMNB___C__DISPLAYCLASS7_0___PICK_B__0_OFFSET UNITYSDK_OFFSET(0xCB84DF0)

inline static constexpr unsigned int PICFNOPIMNB___c__DisplayClass7_0_TypeDefinitionIndex = 53031;

	class PICFNOPIMNB___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::System::UInt32 displayLevel; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PICFNOPIMNB___C__DISPLAYCLASS7_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __Pick_b__0(::RPG::AvatarSystem::SeriesSkillConfig a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::SeriesSkillConfig))((::PBYTE)hIl2Cpp + PICFNOPIMNB___C__DISPLAYCLASS7_0___PICK_B__0_OFFSET))(this, a1);
		}

	};
