#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZLinq/Linq/FromNonGenericEnumerable_1.h"
#include "unitysdk/ZLinq/Linq/FromRange.h"
#include "unitysdk/ZLinq/ValueEnumerable_2.h"
namespace System { class Object; }
namespace System::Collections { class IEnumerable; }

#define ZLINQ_VALUEENUMERABLE_ASVALUEENUMERABLE_OFFSET UNITYSDK_OFFSET(0x1F692650)
#define ZLINQ_VALUEENUMERABLE_RANGE_OFFSET UNITYSDK_OFFSET(0x1F6926C0)

namespace ZLinq
{
	inline static constexpr unsigned int ValueEnumerable_TypeDefinitionIndex = 6091;

	class ValueEnumerable : public ::System::Object
	{
	public:
		static ::ZLinq::ValueEnumerable_2<::ZLinq::Linq::FromNonGenericEnumerable_1<::System::Object*>, ::System::Object*> AsValueEnumerable(::System::Collections::IEnumerable* a1)
		{
			return ((::ZLinq::ValueEnumerable_2<::ZLinq::Linq::FromNonGenericEnumerable_1<::System::Object*>, ::System::Object*>(*)(::System::Collections::IEnumerable*))((::PBYTE)hIl2Cpp + ZLINQ_VALUEENUMERABLE_ASVALUEENUMERABLE_OFFSET))(a1);
		}

		static ::ZLinq::ValueEnumerable_2<::ZLinq::Linq::FromRange, ::System::Int32> Range(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::ZLinq::ValueEnumerable_2<::ZLinq::Linq::FromRange, ::System::Int32>(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZLINQ_VALUEENUMERABLE_RANGE_OFFSET))(a1, a2);
		}

	};
}
