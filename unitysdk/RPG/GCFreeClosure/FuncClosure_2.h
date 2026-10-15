#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DGEPOBDMLDJ.h"
#include "unitysdk/ICFEIEJDMIB.h"
namespace RPG::GCFreeClosure { template <typename T1, typename T2, typename T3, typename T4> class FuncByRef_4; }

namespace RPG::GCFreeClosure
{
	template <typename T1, typename T2>
	struct alignas(8) FuncClosure_2
	{
		::ICFEIEJDMIB _context; // 0x0
		::RPG::GCFreeClosure::FuncByRef_4<::ICFEIEJDMIB, T1, T2, ::DGEPOBDMLDJ>* _wrapper; // 0x0
	};
}
