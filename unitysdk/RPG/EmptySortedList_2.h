#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedList_2; }

namespace RPG
{
	template <typename T1, typename T2>
	class EmptySortedList_2 : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::SortedList_2<T1, T2>** StaticGet_Instance()
		{
			return (::System::Collections::Generic::SortedList_2<T1, T2>**)UnitySDK::FromName("RPG", "EmptySortedList`2")->GetStaticField(0x0);
		}

	};
}
