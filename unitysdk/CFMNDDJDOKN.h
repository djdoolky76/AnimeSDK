#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define CFMNDDJDOKN__CTOR_OFFSET UNITYSDK_OFFSET(0x36F120)

inline static constexpr unsigned int CFMNDDJDOKN_TypeDefinitionIndex = 89880;

struct alignas(8) CFMNDDJDOKN
{
	// static const ::System::String* APJCDIKEAFD; // 0x0
	::System::String* KIHGNGKBADE; // 0x10
	::System::Boolean EKCBHACHNLM; // 0x18

	::System::Void _ctor(::System::String* AELLPLBJELA, ::System::Boolean KLIEAEFPIMK)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CFMNDDJDOKN__CTOR_OFFSET))(this, AELLPLBJELA, KLIEAEFPIMK);
	}
};
