#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LMLFNIAOFKF.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define JEIMDCMGJAM__CTOR_OFFSET UNITYSDK_OFFSET(0x987830)

inline static constexpr unsigned int JEIMDCMGJAM_TypeDefinitionIndex = 28871;

struct alignas(8) JEIMDCMGJAM
{
	::System::Int32 MNAIIBHLHMA; // 0x10
	::System::Byte _padding0[0x4];
	::System::Collections::Generic::List_1<::LMLFNIAOFKF>* CMALMCEOIAF; // 0x18

	::System::Void _ctor(::System::Int32 BKLGNCBNEGM, ::System::Int32 LNHMKMHJBPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + JEIMDCMGJAM__CTOR_OFFSET))(this, BKLGNCBNEGM, LNHMKMHJBPI);
	}
};
