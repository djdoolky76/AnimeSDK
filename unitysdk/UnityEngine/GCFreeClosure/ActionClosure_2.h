#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/GCFreeClosure/Closure.h"
namespace UnityEngine::GCFreeClosure { template <typename T1, typename T2, typename T3> class ActionByRef_3; }

namespace UnityEngine::GCFreeClosure
{
	inline static constexpr unsigned int ActionClosure_2_TypeDefinitionIndex = 4451;

	template <typename T1, typename T2>
	struct alignas(8) ActionClosure_2
	{
		::UnityEngine::GCFreeClosure::Closure _context; // 0x0
		::UnityEngine::GCFreeClosure::ActionByRef_3<::UnityEngine::GCFreeClosure::Closure, T1, T2>* _wrapper; // 0x0
	};
}
