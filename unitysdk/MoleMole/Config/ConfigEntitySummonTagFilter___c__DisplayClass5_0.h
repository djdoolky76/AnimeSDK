#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class OHEPPDANJKP;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigEntitySummonTagFilter; }

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntitySummonTagFilter___c__DisplayClass5_0_TypeDefinitionIndex = 54460;

	struct alignas(8) ConfigEntitySummonTagFilter___c__DisplayClass5_0
	{
		::MoleMole::Config::ConfigEntitySummonTagFilter* __4__this; // 0x10
		::MoleMole::Battle::Entity* owner; // 0x18
		::OHEPPDANJKP* summonedComponent; // 0x20
	};
}
