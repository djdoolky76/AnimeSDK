#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ICFEIEJDMIB.h"
namespace RPG::GCFreeClosure { template <typename T1, typename T2> class ActionByRef_2; }

namespace RPG::GCFreeClosure
{
	template <typename T>
	struct alignas(8) ActionClosure_1
	{
		::ICFEIEJDMIB _context; // 0x0
		::RPG::GCFreeClosure::ActionByRef_2<::ICFEIEJDMIB, T>* _wrapper; // 0x0
	};
}
