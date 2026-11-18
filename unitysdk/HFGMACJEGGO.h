#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define HFGMACJEGGO_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x79F260)
#define HFGMACJEGGO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x79F250)

inline static constexpr unsigned int HFGMACJEGGO_TypeDefinitionIndex = 92377;

struct alignas(8) HFGMACJEGGO
{
	::System::String* FKPFLHNGDBF; // 0x10
	::System::String* KGLMJIIFMKH; // 0x18
	::System::String* CLALGMCKKIL; // 0x20
	::System::String* KACJKAHEFGH; // 0x28

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFGMACJEGGO_TOSTRING_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFGMACJEGGO_DPIHOJBBGLA_OFFSET))(this);
	}
};
