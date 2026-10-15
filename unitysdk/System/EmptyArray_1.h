#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System
{
	template <typename T>
	class EmptyArray_1 : public ::System::Object
	{
	public:
		static ::Il2CppArray<T>** StaticGet_Value()
		{
			return (::Il2CppArray<T>**)UnitySDK::FromName("System", "EmptyArray`1")->GetStaticField(0x0);
		}

	};
}
