#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Threading { class AutoResetEvent; }

#define KCIHKKOICHL_NJALHEDJOGB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7AB2E0)
#define KCIHKKOICHL_NJALHEDJOGB_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x7AB3B0)

inline static constexpr unsigned int KCIHKKOICHL_NJALHEDJOGB_TypeDefinitionIndex = 61181;

struct alignas(8) KCIHKKOICHL_NJALHEDJOGB
{
	::System::String* CJBJONJDOLI; // 0x10
	::System::Threading::AutoResetEvent* GNKPIJJJNOB; // 0x18

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCIHKKOICHL_NJALHEDJOGB_GETHASHCODE_OFFSET))(this);
	}

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCIHKKOICHL_NJALHEDJOGB_HLPHPBAODIF_OFFSET))(this);
	}
};
