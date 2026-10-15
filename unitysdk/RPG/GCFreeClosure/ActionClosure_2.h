#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ICFEIEJDMIB.h"
namespace RPG::GCFreeClosure { template <typename T1, typename T2, typename T3> class ActionByRef_3; }

namespace RPG::GCFreeClosure
{
	inline static constexpr unsigned int ActionClosure_2_TypeDefinitionIndex = 6422;

	template <typename T1, typename T2>
	struct alignas(8) ActionClosure_2
	{
		::ICFEIEJDMIB _context; // 0x0
		::RPG::GCFreeClosure::ActionByRef_3<::ICFEIEJDMIB, T1, T2>* _wrapper; // 0x0
	};
}
