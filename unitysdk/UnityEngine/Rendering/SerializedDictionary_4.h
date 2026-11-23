#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int SerializedDictionary_4_TypeDefinitionIndex = 20395;

	template <typename T1, typename T2, typename T3, typename T4>
	class SerializedDictionary_4
	{
	public:
		::System::Collections::Generic::List_1<T1>* m_Keys; // 0x0
		::System::Collections::Generic::List_1<T2>* m_Values; // 0x0
	};
}
