#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define DCFCOFIAPIC_JGGHNLBNKHA_OFFSET UNITYSDK_OFFSET(0x97DFF0)

inline static constexpr unsigned int DCFCOFIAPIC_TypeDefinitionIndex = 95023;

struct alignas(4) DCFCOFIAPIC
{
	::System::UInt32 BKLGNCBNEGM; // 0x10
	::System::Int32 DKGIDBNBECK; // 0x14

	::System::String* JGGHNLBNKHA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCFCOFIAPIC_JGGHNLBNKHA_OFFSET))(this);
	}
};
