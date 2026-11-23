#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AA216E6CAA230DD8;

#define AA216E6CAA230DD8_B32DB04C8E547EC1_E09225484F952483_OFFSET UNITYSDK_OFFSET(0x1CBC0F0)
#define AA216E6CAA230DD8_B32DB04C8E547EC1__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int AA216E6CAA230DD8_B32DB04C8E547EC1_TypeDefinitionIndex = 9677;

class AA216E6CAA230DD8_B32DB04C8E547EC1 : public ::System::Object
{
public:
	::System::Boolean EC10D2FDA696141D; // 0x10
	::System::Byte _padding0[0x3];
	::System::UInt32 EAE5C1E2483CA606; // 0x14
	::AA216E6CAA230DD8* A544919C800E2923; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AA216E6CAA230DD8_B32DB04C8E547EC1__CTOR_OFFSET))(this);
	}

	::System::Void E09225484F952483()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AA216E6CAA230DD8_B32DB04C8E547EC1_E09225484F952483_OFFSET))(this);
	}
};
