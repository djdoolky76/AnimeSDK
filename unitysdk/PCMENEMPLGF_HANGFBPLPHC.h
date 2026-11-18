#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define PCMENEMPLGF_HANGFBPLPHC_HBHAHJDILNP_OFFSET UNITYSDK_OFFSET(0x18460EF0)
#define PCMENEMPLGF_HANGFBPLPHC__CTOR_OFFSET UNITYSDK_OFFSET(0x18460EE0)

inline static constexpr unsigned int PCMENEMPLGF_HANGFBPLPHC_TypeDefinitionIndex = 62837;

class PCMENEMPLGF_HANGFBPLPHC : public ::System::Object
{
public:
	::System::String* BCEAMKDKMGN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMENEMPLGF_HANGFBPLPHC__CTOR_OFFSET))(this);
	}

	::System::String* HBHAHJDILNP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMENEMPLGF_HANGFBPLPHC_HBHAHJDILNP_OFFSET))(this);
	}
};
