#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ShoesType_TypeDefinitionIndex = 88330;

	enum class ShoesType : ::System::Int32
	{
		Mech = 2,
		Sports = 3,
		Heels = 1,
		Bear = 4,
		Boots = 0,
	};
}
