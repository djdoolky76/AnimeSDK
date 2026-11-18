#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define OCLOOAAGDIH__CTOR_OFFSET UNITYSDK_OFFSET(0x5FA9B0)

inline static constexpr unsigned int OCLOOAAGDIH_TypeDefinitionIndex = 91934;

struct alignas(4) OCLOOAAGDIH
{
	::System::Int32 ILLPMMKGLEL; // 0x10
	::System::Boolean JKBGFBBJMCK; // 0x14
	::System::Boolean AOJKBMGGHFG; // 0x15

	::System::Void _ctor(::System::Int32 EMJGKILNAKD, ::System::Boolean DHNEKOLCCJA, ::System::Boolean MCGELGCPNBE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + OCLOOAAGDIH__CTOR_OFFSET))(this, EMJGKILNAKD, DHNEKOLCCJA, MCGELGCPNBE);
	}
};
