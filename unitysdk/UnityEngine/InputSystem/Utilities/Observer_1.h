#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

namespace UnityEngine::InputSystem::Utilities
{
	inline static constexpr unsigned int Observer_1_TypeDefinitionIndex = 32137;

	template <typename T>
	class Observer_1 : public ::System::Object
	{
	public:
		::System::Action_1<T>* m_OnNext; // 0x0
		::System::Action* m_OnCompleted; // 0x0
	};
}
