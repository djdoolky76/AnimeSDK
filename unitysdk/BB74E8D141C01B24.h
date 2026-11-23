#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

namespace System { class String; }

#define BB74E8D141C01B24__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int BB74E8D141C01B24_TypeDefinitionIndex = 2304;

class BB74E8D141C01B24 : public ::E379DE61A548837D
{
public:
	::System::String* BC24C5C1A8EB99B3; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BB74E8D141C01B24__CTOR_OFFSET))(this);
	}
};
