#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ICFEIEJDMIB.h"
namespace RPG::GCFreeClosure { template <typename T1, typename T2, typename T3, typename T4> class ActionByRef_4; }

namespace RPG::GCFreeClosure
{
	template <typename T1, typename T2, typename T3>
	struct alignas(8) ActionClosure_3
	{
		::ICFEIEJDMIB _context; // 0x0
		::RPG::GCFreeClosure::ActionByRef_4<::ICFEIEJDMIB, T1, T2, T3>* _wrapper; // 0x0
	};
}
