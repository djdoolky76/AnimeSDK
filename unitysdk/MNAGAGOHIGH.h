#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define MNAGAGOHIGH_CPELHPALFLP_OFFSET UNITYSDK_OFFSET(0x282350)
#define MNAGAGOHIGH__CTOR_OFFSET UNITYSDK_OFFSET(0x358B00)

inline static constexpr unsigned int MNAGAGOHIGH_TypeDefinitionIndex = 34840;

struct alignas(8) MNAGAGOHIGH
{
	::System::String* KEKLFCCONCL; // 0x10

	::System::Void _ctor(::System::String* KEKLFCCONCL)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MNAGAGOHIGH__CTOR_OFFSET))(this, KEKLFCCONCL);
	}

	::System::String* CPELHPALFLP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNAGAGOHIGH_CPELHPALFLP_OFFSET))(this);
	}
};
