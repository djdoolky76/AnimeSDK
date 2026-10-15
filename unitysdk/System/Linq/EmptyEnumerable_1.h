#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Linq
{
	template <typename T>
	class EmptyEnumerable_1 : public ::System::Object
	{
	public:
		static ::Il2CppArray<T>** StaticGet_Instance()
		{
			return (::Il2CppArray<T>**)UnitySDK::FromName("System.Linq", "EmptyEnumerable`1")->GetStaticField(0x0);
		}

	};
}
