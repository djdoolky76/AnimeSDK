#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace UnityEngine::Rendering
{
	template <typename T1, typename T2>
	class SerializedDictionary_2
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* m_Keys; // 0x0
		::System::Collections::Generic::List_1<::System::Object*>* m_Values; // 0x0
	};
}
