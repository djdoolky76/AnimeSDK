#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Events/BaseInvokableCall.h"
namespace UnityEngine::Events { class UnityAction; }

namespace UnityEngine::Events
{
	inline static constexpr unsigned int InvokableCall_2_TypeDefinitionIndex = 4482;

	template <typename T1, typename T2>
	class InvokableCall_2 : public ::UnityEngine::Events::BaseInvokableCall
	{
	public:
		::UnityEngine::Events::UnityAction* Delegate; // 0x0
	};
}
