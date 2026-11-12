#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define SYSTEM_LINQ_ENUMERABLE_AVERAGE_OFFSET UNITYSDK_OFFSET(0x20049250)
#define SYSTEM_LINQ_ENUMERABLE_MAX_1_OFFSET UNITYSDK_OFFSET(0x20048850)
#define SYSTEM_LINQ_ENUMERABLE_MAX_2_OFFSET UNITYSDK_OFFSET(0x20048D60)
#define SYSTEM_LINQ_ENUMERABLE_MAX_OFFSET UNITYSDK_OFFSET(0x20048360)
#define SYSTEM_LINQ_ENUMERABLE_MIN_OFFSET UNITYSDK_OFFSET(0x20047DE0)
#define SYSTEM_LINQ_ENUMERABLE_RANGEITERATOR_OFFSET UNITYSDK_OFFSET(0x200469B0)
#define SYSTEM_LINQ_ENUMERABLE_RANGE_OFFSET UNITYSDK_OFFSET(0x20046850)
#define SYSTEM_LINQ_ENUMERABLE_SUM_1_OFFSET UNITYSDK_OFFSET(0x20046F90)
#define SYSTEM_LINQ_ENUMERABLE_SUM_2_OFFSET UNITYSDK_OFFSET(0x20047480)
#define SYSTEM_LINQ_ENUMERABLE_SUM_3_OFFSET UNITYSDK_OFFSET(0x20047930)
#define SYSTEM_LINQ_ENUMERABLE_SUM_OFFSET UNITYSDK_OFFSET(0x20046A10)

namespace System::Linq
{
	inline static constexpr unsigned int Enumerable_TypeDefinitionIndex = 3133;

	class Enumerable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::IEnumerable_1<::System::Int32>* Range(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Int32>*(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_ENUMERABLE_RANGE_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::IEnumerable_1<::System::Int32>* RangeIterator(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Int32>*(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_ENUMERABLE_RANGEITERATOR_OFFSET))(a1, a2);
		}

		static ::System::Int32 Sum(::System::Collections::Generic::IEnumerable_1<::System::Int32>* a1)
		{
			return ((::System::Int32(*)(::System::Collections::Generic::IEnumerable_1<::System::Int32>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_ENUMERABLE_SUM_OFFSET))(a1);
		}

		static ::System::Int64 Sum_1(::System::Collections::Generic::IEnumerable_1<::System::Int64>* a1)
		{
			return ((::System::Int64(*)(::System::Collections::Generic::IEnumerable_1<::System::Int64>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_ENUMERABLE_SUM_1_OFFSET))(a1);
		}

		static ::System::Single Sum_2(::System::Collections::Generic::IEnumerable_1<::System::Single>* a1)
		{
			return ((::System::Single(*)(::System::Collections::Generic::IEnumerable_1<::System::Single>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_ENUMERABLE_SUM_2_OFFSET))(a1);
		}

		static ::System::Double Sum_3(::System::Collections::Generic::IEnumerable_1<::System::Double>* a1)
		{
			return ((::System::Double(*)(::System::Collections::Generic::IEnumerable_1<::System::Double>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_ENUMERABLE_SUM_3_OFFSET))(a1);
		}

		static ::System::Single Min(::System::Collections::Generic::IEnumerable_1<::System::Single>* a1)
		{
			return ((::System::Single(*)(::System::Collections::Generic::IEnumerable_1<::System::Single>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_ENUMERABLE_MIN_OFFSET))(a1);
		}

		static ::System::Int32 Max(::System::Collections::Generic::IEnumerable_1<::System::Int32>* a1)
		{
			return ((::System::Int32(*)(::System::Collections::Generic::IEnumerable_1<::System::Int32>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_ENUMERABLE_MAX_OFFSET))(a1);
		}

		static ::System::Double Max_1(::System::Collections::Generic::IEnumerable_1<::System::Double>* a1)
		{
			return ((::System::Double(*)(::System::Collections::Generic::IEnumerable_1<::System::Double>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_ENUMERABLE_MAX_1_OFFSET))(a1);
		}

		static ::System::Single Max_2(::System::Collections::Generic::IEnumerable_1<::System::Single>* a1)
		{
			return ((::System::Single(*)(::System::Collections::Generic::IEnumerable_1<::System::Single>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_ENUMERABLE_MAX_2_OFFSET))(a1);
		}

		static ::System::Single Average(::System::Collections::Generic::IEnumerable_1<::System::Single>* a1)
		{
			return ((::System::Single(*)(::System::Collections::Generic::IEnumerable_1<::System::Single>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_ENUMERABLE_AVERAGE_OFFSET))(a1);
		}

	};
}
