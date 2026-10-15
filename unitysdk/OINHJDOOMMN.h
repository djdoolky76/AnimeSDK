#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/SkillPropertyModifyType.h"
#include "unitysdk/RPG/GameCore/SkillPropertyType.h"
namespace RPG::GameCore { class GameEntity; }

	struct alignas(8) OINHJDOOMMN
	{
		::RPG::GameCore::GameEntity* MCLLALGABAB; // 0x10
		::RPG::GameCore::ControlSkillType MJMANGILLPH; // 0x18
		::RPG::GameCore::SkillPropertyType ACHILGIPGKL; // 0x1C
		::RPG::GameCore::SkillPropertyModifyType KFAPHPGFEMK; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::GameCore::FixPoint MNDFOPKBHKP; // 0x28
	};
