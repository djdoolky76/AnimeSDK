#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GCFreeClosure/FuncClosure_1.h"

namespace RPG::GCFreeClosure
{
	inline static constexpr unsigned int FuncClosureR_2_TypeDefinitionIndex = 6460;

	template <typename T1, typename T2>
	struct alignas(8) FuncClosureR_2
	{
		::RPG::GCFreeClosure::FuncClosure_1<T1> _closure; // 0x0
	};
}
