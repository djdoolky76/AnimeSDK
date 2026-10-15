#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Events/BaseInvokableCall.h"
namespace UnityEngine::Events { class UnityAction; }

namespace UnityEngine::Events
{
	inline static constexpr unsigned int InvokableCall_4_TypeDefinitionIndex = 4484;

	template <typename T1, typename T2, typename T3, typename T4>
	class InvokableCall_4 : public ::UnityEngine::Events::BaseInvokableCall
	{
	public:
		::UnityEngine::Events::UnityAction* Delegate; // 0x0
	};
}
