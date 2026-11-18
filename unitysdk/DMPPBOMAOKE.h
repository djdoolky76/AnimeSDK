#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define DMPPBOMAOKE_JGGHNLBNKHA_OFFSET UNITYSDK_OFFSET(0x910FB0)

inline static constexpr unsigned int DMPPBOMAOKE_TypeDefinitionIndex = 94492;

struct alignas(4) DMPPBOMAOKE
{
	::System::UInt32 NGODDCIOJDP; // 0x10
	::System::UInt32 HODAIDNDKHD; // 0x14
	::System::Int32 EGEGIMGMJHN; // 0x18
	::System::Boolean MEKPFKLPBAA; // 0x1C

	::System::String* JGGHNLBNKHA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMPPBOMAOKE_JGGHNLBNKHA_OFFSET))(this);
	}
};
