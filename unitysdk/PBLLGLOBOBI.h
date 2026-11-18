#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KIGOBPGIKIC.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define PBLLGLOBOBI__CTOR_OFFSET UNITYSDK_OFFSET(0x3F28E0)

inline static constexpr unsigned int PBLLGLOBOBI_TypeDefinitionIndex = 53363;

struct alignas(8) PBLLGLOBOBI
{
	::KIGOBPGIKIC KCACFHFNJAL; // 0x10
	::System::Byte _padding0[0x4];
	::System::String* GEGHDAHPIAP; // 0x18

	::System::Void _ctor(::KIGOBPGIKIC ABFGIHEAAAB, ::System::String* JBNFBGMMKJI)
	{
		return ((::System::Void(*)(::PVOID, ::KIGOBPGIKIC, ::System::String*))((::PBYTE)hIl2Cpp + PBLLGLOBOBI__CTOR_OFFSET))(this, ABFGIHEAAAB, JBNFBGMMKJI);
	}
};
