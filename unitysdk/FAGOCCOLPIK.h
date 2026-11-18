#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define FAGOCCOLPIK_JGGHNLBNKHA_OFFSET UNITYSDK_OFFSET(0x8BDF70)

inline static constexpr unsigned int FAGOCCOLPIK_TypeDefinitionIndex = 93881;

struct alignas(4) FAGOCCOLPIK
{
	::System::UInt32 MNAIIBHLHMA; // 0x10

	::System::String* JGGHNLBNKHA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAGOCCOLPIK_JGGHNLBNKHA_OFFSET))(this);
	}
};
