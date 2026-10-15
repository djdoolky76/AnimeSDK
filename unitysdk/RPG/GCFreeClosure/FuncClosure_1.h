#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DGEPOBDMLDJ.h"
#include "unitysdk/ICFEIEJDMIB.h"
namespace RPG::GCFreeClosure { template <typename T1, typename T2, typename T3> class FuncByRef_3; }

namespace RPG::GCFreeClosure
{
	inline static constexpr unsigned int FuncClosure_1_TypeDefinitionIndex = 6451;

	template <typename T>
	struct alignas(8) FuncClosure_1
	{
		::ICFEIEJDMIB _context; // 0x0
		::RPG::GCFreeClosure::FuncByRef_3<::ICFEIEJDMIB, T, ::DGEPOBDMLDJ>* _wrapper; // 0x0
	};
}
