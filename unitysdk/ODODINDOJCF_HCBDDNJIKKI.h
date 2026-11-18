#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define ODODINDOJCF_HCBDDNJIKKI__CTOR_OFFSET UNITYSDK_OFFSET(0x3B58E0)

inline static constexpr unsigned int ODODINDOJCF_HCBDDNJIKKI_TypeDefinitionIndex = 66807;

struct alignas(8) ODODINDOJCF_HCBDDNJIKKI
{
	::System::String* MCOHLHMKLIP; // 0x10
	::System::Int32 OHLCMHALFBD; // 0x18

	::System::Void _ctor(::System::String* JMAKOAFNCEI, ::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + ODODINDOJCF_HCBDDNJIKKI__CTOR_OFFSET))(this, JMAKOAFNCEI, ABHBKFJKINO);
	}
};
