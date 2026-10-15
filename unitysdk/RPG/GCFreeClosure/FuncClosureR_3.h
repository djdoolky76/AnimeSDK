#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GCFreeClosure/FuncClosure_2.h"

namespace RPG::GCFreeClosure
{
	inline static constexpr unsigned int FuncClosureR_3_TypeDefinitionIndex = 6468;

	template <typename T1, typename T2, typename T3>
	struct alignas(8) FuncClosureR_3
	{
		::RPG::GCFreeClosure::FuncClosure_2<T1, T2> _closure; // 0x0
	};
}
