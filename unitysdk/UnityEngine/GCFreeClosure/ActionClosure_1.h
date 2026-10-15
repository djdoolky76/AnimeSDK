#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/GCFreeClosure/Closure.h"
namespace UnityEngine::GCFreeClosure { template <typename T1, typename T2> class ActionByRef_2; }

namespace UnityEngine::GCFreeClosure
{
	inline static constexpr unsigned int ActionClosure_1_TypeDefinitionIndex = 4448;

	template <typename T>
	struct alignas(8) ActionClosure_1
	{
		::UnityEngine::GCFreeClosure::Closure _context; // 0x0
		::UnityEngine::GCFreeClosure::ActionByRef_2<::UnityEngine::GCFreeClosure::Closure, T>* _wrapper; // 0x0
	};
}
