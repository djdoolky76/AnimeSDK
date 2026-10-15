#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UISkillIndex.h"
#include "unitysdk/RPG/GameCore/SkillInputType.h"
namespace RPG::GameCore { class GameEntity; }

inline static constexpr unsigned int EJJDIEKLDPN_TypeDefinitionIndex = 72006;

	struct alignas(8) EJJDIEKLDPN
	{
		::RPG::Client::UISkillIndex CKOIMOLALEH; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::GameCore::GameEntity* GDCCJFKJGPD; // 0x18
		::RPG::GameCore::SkillInputType PLEMHLIAKPF; // 0x20
		::System::Single PPIMMPOMHNJ; // 0x24
	};
