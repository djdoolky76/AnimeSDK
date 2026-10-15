#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/IVec2.h"
#include "unitysdk/RPG/GameCore/RtSkillConditionMask.h"
namespace RPG::GameCore { class GameEntity; }

	struct alignas(8) CCACPANBHAA
	{
		::RPG::GameCore::RtSkillConditionMask CGPNFJDEJCF; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::GameCore::GameEntity* MCLLALGABAB; // 0x18
		::RPG::GameCore::IVec2 MKGKHBCAFLL; // 0x20
	};
