#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ICFEIEJDMIB.h"
namespace RPG::GCFreeClosure { template <typename T1, typename T2, typename T3, typename T4, typename T5> class ActionByRef_5; }

namespace RPG::GCFreeClosure
{
	template <typename T1, typename T2, typename T3, typename T4>
	struct alignas(8) ActionClosure_4
	{
		::ICFEIEJDMIB _context; // 0x0
		::RPG::GCFreeClosure::ActionByRef_5<::ICFEIEJDMIB, T1, T2, T3, T4>* _wrapper; // 0x0
	};
}
