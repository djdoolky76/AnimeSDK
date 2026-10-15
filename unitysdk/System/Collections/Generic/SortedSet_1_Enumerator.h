#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class SortedSet_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

namespace System::Collections::Generic
{
	template <typename T>
	struct alignas(8) SortedSet_1_Enumerator
	{
		::System::Collections::Generic::SortedSet_1<T>* _tree; // 0x0
		::System::Int32 _version; // 0x0
		::System::Collections::Generic::Stack_1<::System::Object*>* _stack; // 0x0
		::System::Object* _current; // 0x0
		::System::Boolean _reverse; // 0x0
		static ::System::Object** StaticGet_s_dummyNode()
		{
			return (::System::Object**)UnitySDK::FromName("System.Collections.Generic", "Enumerator")->GetStaticField(0x0);
		}

	};
}
