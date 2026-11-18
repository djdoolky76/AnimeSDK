#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define BDNPCHLPJPL_JGGHNLBNKHA_OFFSET UNITYSDK_OFFSET(0x8D3F50)

inline static constexpr unsigned int BDNPCHLPJPL_TypeDefinitionIndex = 94132;

struct alignas(4) BDNPCHLPJPL
{
	::System::UInt32 LMPKCHBGHAH; // 0x10
	::System::UInt32 DPGCKBEJLJD; // 0x14

	::System::String* JGGHNLBNKHA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDNPCHLPJPL_JGGHNLBNKHA_OFFSET))(this);
	}
};
