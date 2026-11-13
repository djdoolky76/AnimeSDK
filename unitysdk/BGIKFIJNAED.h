#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
#include "unitysdk/RPG/GameCore/SkillButtonAdditionalStatusType.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define BGIKFIJNAED_CTOR_OFFSET UNITYSDK_OFFSET(0x151C6CA0)

inline static constexpr unsigned int BGIKFIJNAED_TypeDefinitionIndex = 73899;

	class BGIKFIJNAED : public ::System::Object
	{
	public:
		::System::String* BDACPPLKLGL; // 0x10
		::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x18
		::System::String* PODFJDMHFMK; // 0x20
		::System::Single CCAOGMEFNLB; // 0x28
		::RPG::GameCore::SkillButtonAdditionalStatusType PGOHOFMMIAJ; // 0x2C
		::System::Boolean CAGCHKJHMPD; // 0x30
		::System::Byte _padding0[0x3];
		::RPG::GameCore::ControlSkillType GFNJJEFJKPD; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGIKFIJNAED_CTOR_OFFSET))(this);
		}

	};
