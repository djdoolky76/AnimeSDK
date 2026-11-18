#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define LCAKBHHEIAP__CTOR_OFFSET UNITYSDK_OFFSET(0x129BBFE0)

inline static constexpr unsigned int LCAKBHHEIAP_TypeDefinitionIndex = 90760;

class LCAKBHHEIAP : public ::System::Attribute
{
public:
	::System::String* CAAGLMFECHM; // 0x10
	::System::String* AFKIBFHFJKJ; // 0x18
	::System::Boolean AOKCEPFJHHE; // 0x20
	::System::Boolean KBBJCLPFJGC; // 0x21
	::System::Boolean IKFEIBIGLHA; // 0x22

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCAKBHHEIAP__CTOR_OFFSET))(this);
	}
};
