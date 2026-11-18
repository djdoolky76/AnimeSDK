#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define NLKAINFCKAN_JGGHNLBNKHA_OFFSET UNITYSDK_OFFSET(0x944690)

inline static constexpr unsigned int NLKAINFCKAN_TypeDefinitionIndex = 94983;

struct alignas(4) NLKAINFCKAN
{
	::System::Boolean GFHPDPHHHGL; // 0x10
	::System::Byte _padding0[0x3];
	::System::UInt32 MNAIIBHLHMA; // 0x14
	::System::Int32 NGMIGPFDJFN; // 0x18

	::System::String* JGGHNLBNKHA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLKAINFCKAN_JGGHNLBNKHA_OFFSET))(this);
	}
};
