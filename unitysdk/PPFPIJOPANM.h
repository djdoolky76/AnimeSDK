#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DPKOIBEFPAO.h"
#include "unitysdk/PPFPIJOPANM_IPHACCIEAPB.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define PPFPIJOPANM__CTOR_1_OFFSET UNITYSDK_OFFSET(0x81CFA0)
#define PPFPIJOPANM__CTOR_OFFSET UNITYSDK_OFFSET(0x81CF70)

inline static constexpr unsigned int PPFPIJOPANM_TypeDefinitionIndex = 67968;

struct alignas(4) PPFPIJOPANM
{
	::PPFPIJOPANM_IPHACCIEAPB OBNIAHNMHPF; // 0x10
	::System::Byte _padding0[0x4];
	::DPKOIBEFPAO EGEGIMGMJHN; // 0x18

	::System::Void _ctor(::DPKOIBEFPAO JCJDKCLCKKH, ::PPFPIJOPANM_IPHACCIEAPB PBMKJNLFHME)
	{
		return ((::System::Void(*)(::PVOID, ::DPKOIBEFPAO, ::PPFPIJOPANM_IPHACCIEAPB))((::PBYTE)hIl2Cpp + PPFPIJOPANM__CTOR_OFFSET))(this, JCJDKCLCKKH, PBMKJNLFHME);
	}

	::System::Void _ctor_1(::System::String* JCJDKCLCKKH)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PPFPIJOPANM__CTOR_1_OFFSET))(this, JCJDKCLCKKH);
	}
};
