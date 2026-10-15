#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace UnityEngine::Events { class UnityAction; }

namespace TMPro
{
	template <typename T>
	class TMP_ObjectPool_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Stack_1<T>* m_Stack; // 0x0
		::UnityEngine::Events::UnityAction* m_ActionOnGet; // 0x0
		::UnityEngine::Events::UnityAction* m_ActionOnRelease; // 0x0
		::System::Int32 _countAll_k__BackingField; // 0x0
	};
}
