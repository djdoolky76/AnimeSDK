#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

#define E0EED5F611181D7A__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int E0EED5F611181D7A_TypeDefinitionIndex = 7055;

class E0EED5F611181D7A : public ::E379DE61A548837D
{
public:
	::System::UInt32 F39F3C8D88A82BAF; // 0x38
	::System::UInt32 E5027A791EE0E79B; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E0EED5F611181D7A__CTOR_OFFSET))(this);
	}
};
