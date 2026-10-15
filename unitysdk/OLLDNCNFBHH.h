#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UISkillIndex.h"
#include "unitysdk/RPG/GameCore/SkillInputType.h"
namespace RPG::GameCore { class GameEntity; }

inline static constexpr unsigned int OLLDNCNFBHH_TypeDefinitionIndex = 72005;

	struct alignas(8) OLLDNCNFBHH
	{
		::RPG::Client::UISkillIndex GMDBHJKEAEI; // 0x10
		::RPG::GameCore::SkillInputType KHCNPIAHPOD; // 0x14
		::RPG::GameCore::GameEntity* GDCCJFKJGPD; // 0x18
		::System::Single GCMOKMIEHDB; // 0x20
	};
