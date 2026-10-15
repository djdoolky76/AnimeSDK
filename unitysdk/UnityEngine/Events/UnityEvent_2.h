#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Events/UnityEventBase.h"
namespace System { class Object; }

namespace UnityEngine::Events
{
	inline static constexpr unsigned int UnityEvent_2_TypeDefinitionIndex = 4496;

	template <typename T1, typename T2>
	class UnityEvent_2 : public ::UnityEngine::Events::UnityEventBase
	{
	public:
		::Il2CppArray<::System::Object*>* m_InvokeArray; // 0x0
	};
}
