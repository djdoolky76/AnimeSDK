#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EIHPMGNEKBI.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/HJAFHELDAPG.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LFFNKHAONHF_CKHCDHDHPJB_OFFSET UNITYSDK_OFFSET(0x1B64ADD0)
#define LFFNKHAONHF__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6400C0)

inline static constexpr unsigned int LFFNKHAONHF_TypeDefinitionIndex = 16632;

class LFFNKHAONHF : public ::EIHPMGNEKBI
{
public:
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* BMCANKJEGMJ; // 0x68

	::System::Void _ctor(::HJAFHELDAPG LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::HJAFHELDAPG, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + LFFNKHAONHF__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* CKHCDHDHPJB()
	{
		return ((::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFFNKHAONHF_CKHCDHDHPJB_OFFSET))(this);
	}
};
