#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

namespace RPG::GameCore
{
	struct alignas(8) SkillCharacterComponent_HitTargetTimeSlowRecord
	{
		::RPG::GameCore::GameEntity* Target; // 0x10
		::System::String* SlowKey; // 0x18
	};
}
