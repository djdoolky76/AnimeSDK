#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DGEPOBDMLDJ.h"
#include "unitysdk/ICFEIEJDMIB.h"
namespace RPG::GCFreeClosure { template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6> class FuncByRef_6; }

namespace RPG::GCFreeClosure
{
	inline static constexpr unsigned int FuncClosure_4_TypeDefinitionIndex = 6475;

	template <typename T1, typename T2, typename T3, typename T4>
	struct alignas(8) FuncClosure_4
	{
		::ICFEIEJDMIB _context; // 0x0
		::RPG::GCFreeClosure::FuncByRef_6<::ICFEIEJDMIB, T1, T2, T3, T4, ::DGEPOBDMLDJ>* _wrapper; // 0x0
	};
}
