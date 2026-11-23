#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

#define B25A86327C5AB1AE__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int B25A86327C5AB1AE_TypeDefinitionIndex = 2257;

class B25A86327C5AB1AE : public ::E379DE61A548837D
{
public:
	::System::UInt32 EE38E4CF1A141F00; // 0x38
	::System::UInt32 EF76C23A02DB63B0; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B25A86327C5AB1AE__CTOR_OFFSET))(this);
	}
};
