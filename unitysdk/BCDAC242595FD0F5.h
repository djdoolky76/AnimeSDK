#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

namespace System { class String; }

#define BCDAC242595FD0F5__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int BCDAC242595FD0F5_TypeDefinitionIndex = 1973;

class BCDAC242595FD0F5 : public ::E379DE61A548837D
{
public:
	::System::UInt32 F48717168EFBC596; // 0x38
	::System::Byte _padding0[0x4];
	::System::String* EE1F6B2D64076FFA; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCDAC242595FD0F5__CTOR_OFFSET))(this);
	}
};
