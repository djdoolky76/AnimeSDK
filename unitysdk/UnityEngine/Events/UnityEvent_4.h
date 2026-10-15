#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Events/UnityEventBase.h"
namespace System { class Object; }

namespace UnityEngine::Events
{
	template <typename T1, typename T2, typename T3, typename T4>
	class UnityEvent_4 : public ::UnityEngine::Events::UnityEventBase
	{
	public:
		::Il2CppArray<::System::Object*>* m_InvokeArray; // 0x0
	};
}
