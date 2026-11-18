#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define JOAIOBPKNNC_JGGHNLBNKHA_OFFSET UNITYSDK_OFFSET(0x8B8270)

inline static constexpr unsigned int JOAIOBPKNNC_TypeDefinitionIndex = 94252;

struct alignas(4) JOAIOBPKNNC
{
	::System::UInt32 AOGNNJLKHGL; // 0x10
	::System::Int32 KMLPFPOCOEO; // 0x14
	::System::Int32 ICEGFHFAEKN; // 0x18

	::System::String* JGGHNLBNKHA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOAIOBPKNNC_JGGHNLBNKHA_OFFSET))(this);
	}
};
