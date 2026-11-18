#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int DamageElementType_TypeDefinitionIndex = 81313;

	enum class DamageElementType : ::System::Int32
	{
		Ice = 202,
		ElementAll = 210,
		Fire = 201,
		Elec = 203,
		Wind = 204,
		Physics = 200,
		Ether = 205,
		Lumen = 300,
		None = 0,
	};
}
