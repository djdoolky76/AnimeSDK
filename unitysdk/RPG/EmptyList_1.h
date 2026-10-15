#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace RPG
{
	template <typename T>
	class EmptyList_1 : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<T>** StaticGet_Instance()
		{
			return (::System::Collections::Generic::List_1<T>**)UnitySDK::FromName("RPG", "EmptyList`1")->GetStaticField(0x0);
		}

		static ::Il2CppArray<T>** StaticGet_Array()
		{
			return (::Il2CppArray<T>**)UnitySDK::FromName("RPG", "EmptyList`1")->GetStaticField(0x0);
		}

	};
}
