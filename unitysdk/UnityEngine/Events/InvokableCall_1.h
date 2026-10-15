#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Events/BaseInvokableCall.h"
namespace UnityEngine::Events { template <typename T> class UnityAction_1; }

namespace UnityEngine::Events
{
	inline static constexpr unsigned int InvokableCall_1_TypeDefinitionIndex = 4481;

	template <typename T>
	class InvokableCall_1 : public ::UnityEngine::Events::BaseInvokableCall
	{
	public:
		::UnityEngine::Events::UnityAction_1<T>* Delegate; // 0x0
	};
}
