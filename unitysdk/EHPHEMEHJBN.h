#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENDAINKJAAM.h"
#include "unitysdk/System/ValueType.h"

#define EHPHEMEHJBN_FCJCBBELKLD_OFFSET UNITYSDK_OFFSET(0x3CE9E0)

inline static constexpr unsigned int EHPHEMEHJBN_TypeDefinitionIndex = 71104;

struct alignas(4) EHPHEMEHJBN
{
	::ENDAINKJAAM CMMCBIPCAGB; // 0x10
	::System::Int32 NFIEABFONBC; // 0x14

	::System::Int32 FCJCBBELKLD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EHPHEMEHJBN_FCJCBBELKLD_OFFSET))(this);
	}
};
