#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define HAOLMOEKIAJ_JGGHNLBNKHA_OFFSET UNITYSDK_OFFSET(0x8BDF80)

inline static constexpr unsigned int HAOLMOEKIAJ_TypeDefinitionIndex = 93547;

struct alignas(4) HAOLMOEKIAJ
{
	::System::UInt32 MNAIIBHLHMA; // 0x10

	::System::String* JGGHNLBNKHA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HAOLMOEKIAJ_JGGHNLBNKHA_OFFSET))(this);
	}
};
