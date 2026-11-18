#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NFIGBOOLJEJ.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/MOKEMPJGCBE.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LLFGHEHHPEA_LHGFFKNMCKB_OFFSET UNITYSDK_OFFSET(0x19100A00)
#define LLFGHEHHPEA_OHFELBJMBLC_OFFSET UNITYSDK_OFFSET(0x19100520)
#define LLFGHEHHPEA__CTOR_OFFSET UNITYSDK_OFFSET(0x19100510)

inline static constexpr unsigned int LLFGHEHHPEA_TypeDefinitionIndex = 16451;

class LLFGHEHHPEA : public ::NFIGBOOLJEJ
{
public:
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* NHGMLDHFKEN; // 0x50
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*, ::System::Int32>>* BCCHPPCMPMJ; // 0x58

	::System::Void _ctor(::MOKEMPJGCBE LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::MOKEMPJGCBE, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + LLFGHEHHPEA__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*, ::System::Int32>>* OHFELBJMBLC()
	{
		return ((::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLFGHEHHPEA_OHFELBJMBLC_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* LHGFFKNMCKB()
	{
		return ((::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLFGHEHHPEA_LHGFFKNMCKB_OFFSET))(this);
	}
};
