#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define JFCNOEPOJMJ_FAANKJHPJDI_OFFSET UNITYSDK_OFFSET(0x14A5F560)

inline static constexpr unsigned int JFCNOEPOJMJ_TypeDefinitionIndex = 90701;

struct alignas(8) JFCNOEPOJMJ
{
	::System::String* PHKHAOILGJI; // 0x10
	::System::Single JELILAEGHOO; // 0x18

	static ::System::Single FAANKJHPJDI()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + JFCNOEPOJMJ_FAANKJHPJDI_OFFSET))();
	}
};
