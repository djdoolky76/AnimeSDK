#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define SYSTEM_LINQ_ENUMERABLE_AVERAGE_OFFSET UNITYSDK_OFFSET(0x1ABA3670)
#define SYSTEM_LINQ_ENUMERABLE_MAX_1_OFFSET UNITYSDK_OFFSET(0x1ABA2C70)
#define SYSTEM_LINQ_ENUMERABLE_MAX_2_OFFSET UNITYSDK_OFFSET(0x1ABA3180)
#define SYSTEM_LINQ_ENUMERABLE_MAX_OFFSET UNITYSDK_OFFSET(0x1ABA2780)
#define SYSTEM_LINQ_ENUMERABLE_MIN_OFFSET UNITYSDK_OFFSET(0x1ABA2200)
#define SYSTEM_LINQ_ENUMERABLE_RANGEITERATOR_OFFSET UNITYSDK_OFFSET(0x1ABA0E00)
#define SYSTEM_LINQ_ENUMERABLE_RANGE_OFFSET UNITYSDK_OFFSET(0x1ABA0CA0)
#define SYSTEM_LINQ_ENUMERABLE_SUM_1_OFFSET UNITYSDK_OFFSET(0x1ABA13B0)
#define SYSTEM_LINQ_ENUMERABLE_SUM_2_OFFSET UNITYSDK_OFFSET(0x1ABA18A0)
#define SYSTEM_LINQ_ENUMERABLE_SUM_3_OFFSET UNITYSDK_OFFSET(0x1ABA1D50)
#define SYSTEM_LINQ_ENUMERABLE_SUM_OFFSET UNITYSDK_OFFSET(0x1ABA0E60)

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
