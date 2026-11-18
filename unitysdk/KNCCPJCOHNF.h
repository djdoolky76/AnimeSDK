#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FCMOFNMDNGG.h"
#include "unitysdk/IICPLAADMNN.h"
#include "unitysdk/System/ValueType.h"

#define KNCCPJCOHNF__CTOR_OFFSET UNITYSDK_OFFSET(0x2E4140)

inline static constexpr unsigned int KNCCPJCOHNF_TypeDefinitionIndex = 59468;

struct alignas(4) KNCCPJCOHNF
{
	::IICPLAADMNN CCCFFMJBEGM; // 0x10
	::FCMOFNMDNGG IONFFCJNMBD; // 0x14

	::System::Void _ctor(::IICPLAADMNN FFNKDGGHBPP, ::FCMOFNMDNGG MMJGCBNFMIE)
	{
		return ((::System::Void(*)(::PVOID, ::IICPLAADMNN, ::FCMOFNMDNGG))((::PBYTE)hIl2Cpp + KNCCPJCOHNF__CTOR_OFFSET))(this, FFNKDGGHBPP, MMJGCBNFMIE);
	}
};
