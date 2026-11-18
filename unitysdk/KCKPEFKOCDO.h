#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class String; }

#define KCKPEFKOCDO__CTOR_OFFSET UNITYSDK_OFFSET(0x15B83020)

inline static constexpr unsigned int KCKPEFKOCDO_TypeDefinitionIndex = 85897;

class KCKPEFKOCDO
{
public:
	::System::String* BLJHBEBJLFO; // 0x38
	::System::Int32 JDHOGCKIKDM; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCKPEFKOCDO__CTOR_OFFSET))(this);
	}
};
