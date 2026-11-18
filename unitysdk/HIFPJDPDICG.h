#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PMFJFEFDFAL.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define HIFPJDPDICG_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x8BDFE0)
#define HIFPJDPDICG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x8BDFD0)

inline static constexpr unsigned int HIFPJDPDICG_TypeDefinitionIndex = 93713;

struct alignas(4) HIFPJDPDICG
{
	::System::UInt32 PMCNDKMMFDG; // 0x10
	::PMFJFEFDFAL NJMGLGKDELD; // 0x14
	::System::Single CJLKFOGFONE; // 0x18
	::System::Single LFLEMPDGPMK; // 0x1C
	::System::Int32 ONOJGLJBAAJ; // 0x20
	::System::Int32 PKBBCOOACHH; // 0x24

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIFPJDPDICG_TOSTRING_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIFPJDPDICG_DPIHOJBBGLA_OFFSET))(this);
	}
};
