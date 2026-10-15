#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GCFreeClosure/FuncClosure_3.h"

namespace RPG::GCFreeClosure
{
	inline static constexpr unsigned int FuncClosureR_4_TypeDefinitionIndex = 6474;

	template <typename T1, typename T2, typename T3, typename T4>
	struct alignas(8) FuncClosureR_4
	{
		::RPG::GCFreeClosure::FuncClosure_3<T1, T2, T3> _closure; // 0x0
	};
}
