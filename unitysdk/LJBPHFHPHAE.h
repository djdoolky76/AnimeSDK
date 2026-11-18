#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define LJBPHFHPHAE_JGGHNLBNKHA_OFFSET UNITYSDK_OFFSET(0x8CFAC0)

inline static constexpr unsigned int LJBPHFHPHAE_TypeDefinitionIndex = 93852;

struct alignas(4) LJBPHFHPHAE
{
	::System::UInt32 MNAIIBHLHMA; // 0x10

	::System::String* JGGHNLBNKHA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJBPHFHPHAE_JGGHNLBNKHA_OFFSET))(this);
	}
};
