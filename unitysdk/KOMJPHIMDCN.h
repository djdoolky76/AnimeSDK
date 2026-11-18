#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GCFLBGMBHBG.h"
#include "unitysdk/CIDEBHOGLDE.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KOMJPHIMDCN_BKFFBENEAIH_OFFSET UNITYSDK_OFFSET(0x17FAC830)
#define KOMJPHIMDCN__CTOR_OFFSET UNITYSDK_OFFSET(0x17FAC750)

inline static constexpr unsigned int KOMJPHIMDCN_TypeDefinitionIndex = 9992;

class KOMJPHIMDCN : public ::GCFLBGMBHBG
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* _DKLINBCJEIH_k__BackingField; // 0x38

	::System::Void _ctor(::CIDEBHOGLDE LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::CIDEBHOGLDE, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + KOMJPHIMDCN__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* BKFFBENEAIH()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOMJPHIMDCN_BKFFBENEAIH_OFFSET))(this);
	}
};
