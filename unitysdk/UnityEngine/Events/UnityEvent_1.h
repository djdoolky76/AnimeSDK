#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Events/UnityEventBase.h"
namespace System { class Object; }

namespace UnityEngine::Events
{
	inline static constexpr unsigned int UnityEvent_1_TypeDefinitionIndex = 4494;

	template <typename T>
	class UnityEvent_1 : public ::UnityEngine::Events::UnityEventBase
	{
	public:
		::Il2CppArray<::System::Object*>* m_InvokeArray; // 0x0
	};
}
