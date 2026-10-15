#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

namespace RPG::GameCore
{
	struct alignas(8) SkillCharacterComponent_SkillMappingByKeyEntry
	{
		::System::String* MappingKey; // 0x10
		::System::String* OriginTriggerKey; // 0x18
		::System::String* TargetTriggerKey; // 0x20
	};
}
