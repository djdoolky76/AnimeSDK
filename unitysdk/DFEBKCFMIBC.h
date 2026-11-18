#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define DFEBKCFMIBC_JGGHNLBNKHA_OFFSET UNITYSDK_OFFSET(0x8EAA90)

inline static constexpr unsigned int DFEBKCFMIBC_TypeDefinitionIndex = 93943;

struct alignas(4) DFEBKCFMIBC
{
	::System::UInt32 KPDPMNJIFHC; // 0x10
	::System::UInt32 DPGCKBEJLJD; // 0x14
	::System::Int32 IFPCGBJDKCH; // 0x18
	::System::Int32 KBIGPEAHGII; // 0x1C

	::System::String* JGGHNLBNKHA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFEBKCFMIBC_JGGHNLBNKHA_OFFSET))(this);
	}
};
