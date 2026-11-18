#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define NCPEBNCNGDO_JGGHNLBNKHA_OFFSET UNITYSDK_OFFSET(0x8CC660)

inline static constexpr unsigned int NCPEBNCNGDO_TypeDefinitionIndex = 93465;

struct alignas(4) NCPEBNCNGDO
{
	::System::UInt32 MNAIIBHLHMA; // 0x10
	::System::UInt32 IFPCGBJDKCH; // 0x14

	::System::String* JGGHNLBNKHA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCPEBNCNGDO_JGGHNLBNKHA_OFFSET))(this);
	}
};
