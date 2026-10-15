#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic
{
	template <typename T>
	class List_1 : public ::System::Object
	{
	public:
		::Il2CppArray<T>* _items; // 0x0
		::System::Int32 _size; // 0x0
		::System::Int32 _version; // 0x0
		static ::Il2CppArray<T>** StaticGet__emptyArray()
		{
			return (::Il2CppArray<T>**)UnitySDK::FromName("System.Collections.Generic", "List`1")->GetStaticField(0x0);
		}

	};
}
