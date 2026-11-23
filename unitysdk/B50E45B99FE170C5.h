#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

class FAD1B40942B992F6;

#define B50E45B99FE170C5__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int B50E45B99FE170C5_TypeDefinitionIndex = 3067;

class B50E45B99FE170C5 : public ::E379DE61A548837D
{
public:
	::FAD1B40942B992F6* A1EB0B38C3615C9A; // 0x38
	::System::Boolean FC5D5731FE386552; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B50E45B99FE170C5__CTOR_OFFSET))(this);
	}
};
