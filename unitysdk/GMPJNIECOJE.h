#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BDGMAFPHJKH.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define GMPJNIECOJE_JGGHNLBNKHA_OFFSET UNITYSDK_OFFSET(0x6DF7F0)

inline static constexpr unsigned int GMPJNIECOJE_TypeDefinitionIndex = 93558;

struct alignas(4) GMPJNIECOJE
{
	::System::Int32 AOGNNJLKHGL; // 0x10
	::BDGMAFPHJKH JAICKFPPOEO; // 0x14

	::System::String* JGGHNLBNKHA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMPJNIECOJE_JGGHNLBNKHA_OFFSET))(this);
	}
};
