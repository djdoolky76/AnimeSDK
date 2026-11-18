#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class ACJHBPEODBJ;

#define CAMLGDMCCMB_BPJNBMABAJK_OFFSET UNITYSDK_OFFSET(0x7D6310)
#define CAMLGDMCCMB__CTOR_OFFSET UNITYSDK_OFFSET(0x7D62F0)

inline static constexpr unsigned int CAMLGDMCCMB_TypeDefinitionIndex = 81894;

struct alignas(8) CAMLGDMCCMB
{
	::ACJHBPEODBJ* DKANPKBIMFM; // 0x10
	::System::Int32 PMMGOAJJPJB; // 0x18

	::System::Void _ctor(::ACJHBPEODBJ* KHGFAKJKDGG)
	{
		return ((::System::Void(*)(::PVOID, ::ACJHBPEODBJ*))((::PBYTE)hIl2Cpp + CAMLGDMCCMB__CTOR_OFFSET))(this, KHGFAKJKDGG);
	}

	::System::Boolean BPJNBMABAJK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMLGDMCCMB_BPJNBMABAJK_OFFSET))(this);
	}
};
