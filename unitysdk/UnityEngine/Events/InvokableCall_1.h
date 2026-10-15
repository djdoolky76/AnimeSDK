#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Events/BaseInvokableCall.h"
namespace UnityEngine::Events { class UnityAction; }

namespace UnityEngine::Events
{
	inline static constexpr unsigned int InvokableCall_1_TypeDefinitionIndex = 4481;

	template <typename T>
	class InvokableCall_1 : public ::UnityEngine::Events::BaseInvokableCall
	{
	public:
		::UnityEngine::Events::UnityAction* Delegate; // 0x0
	};
}
