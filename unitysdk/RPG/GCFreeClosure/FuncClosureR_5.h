#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GCFreeClosure/FuncClosure_4.h"

namespace RPG::GCFreeClosure
{
	inline static constexpr unsigned int FuncClosureR_5_TypeDefinitionIndex = 6478;

	template <typename T1, typename T2, typename T3, typename T4, typename T5>
	struct alignas(8) FuncClosureR_5
	{
		::RPG::GCFreeClosure::FuncClosure_4<T1, T2, T3, T4> _closure; // 0x0
	};
}
