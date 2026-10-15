#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FONMDGEEEGO.h"

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int LevelVariable_1_TypeDefinitionIndex = 42065;

	template <typename T>
	class LevelVariable_1 : public ::FONMDGEEEGO
	{
	public:
		T _Value_k__BackingField; // 0x0
	};
}
