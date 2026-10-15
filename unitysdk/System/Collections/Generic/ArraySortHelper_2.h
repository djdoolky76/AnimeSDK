#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T1, typename T2> class ArraySortHelper_2; }

namespace System::Collections::Generic
{
	inline static constexpr unsigned int ArraySortHelper_2_TypeDefinitionIndex = 1533;

	template <typename T1, typename T2>
	class ArraySortHelper_2 : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::ArraySortHelper_2<T1, T2>** StaticGet_s_defaultArraySortHelper()
		{
			return (::System::Collections::Generic::ArraySortHelper_2<T1, T2>**)UnitySDK::FromName("System.Collections.Generic", "ArraySortHelper`2")->GetStaticField(0x0);
		}

	};
}
