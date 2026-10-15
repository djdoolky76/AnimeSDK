#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DGEPOBDMLDJ.h"
#include "unitysdk/ICFEIEJDMIB.h"
namespace RPG::GCFreeClosure { template <typename T1, typename T2, typename T3, typename T4, typename T5> class FuncByRef_5; }

namespace RPG::GCFreeClosure
{
	template <typename T1, typename T2, typename T3>
	struct alignas(8) FuncClosure_3
	{
		::ICFEIEJDMIB _context; // 0x0
		::RPG::GCFreeClosure::FuncByRef_5<::ICFEIEJDMIB, T1, T2, T3, ::DGEPOBDMLDJ>* _wrapper; // 0x0
	};
}
