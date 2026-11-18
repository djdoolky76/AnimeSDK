#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define GHLGOPIEGFE_JGGHNLBNKHA_OFFSET UNITYSDK_OFFSET(0x97E040)

inline static constexpr unsigned int GHLGOPIEGFE_TypeDefinitionIndex = 95034;

struct alignas(4) GHLGOPIEGFE
{
	::System::UInt32 CNENMOBJBBK; // 0x10
	::System::UInt32 BKLGNCBNEGM; // 0x14
	::System::Int32 NJCMPIIGHCJ; // 0x18

	::System::String* JGGHNLBNKHA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHLGOPIEGFE_JGGHNLBNKHA_OFFSET))(this);
	}
};
