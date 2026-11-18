#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KBKLCGKKIPI.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define AJMCLJLNPKL_JGGHNLBNKHA_OFFSET UNITYSDK_OFFSET(0x98F6F0)

inline static constexpr unsigned int AJMCLJLNPKL_TypeDefinitionIndex = 95127;

struct alignas(4) AJMCLJLNPKL
{
	::KBKLCGKKIPI NNHJPHDGJJP; // 0x10

	::System::String* JGGHNLBNKHA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJMCLJLNPKL_JGGHNLBNKHA_OFFSET))(this);
	}
};
