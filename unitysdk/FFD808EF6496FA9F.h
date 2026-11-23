#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E2BEC5FD40067593.h"

class E6DAAFFF86CC4E75;

#define FFD808EF6496FA9F_A00773F95A03D4B7_OFFSET UNITYSDK_OFFSET(0x1BF3240)
#define FFD808EF6496FA9F__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int FFD808EF6496FA9F_TypeDefinitionIndex = 311;

class FFD808EF6496FA9F : public ::E2BEC5FD40067593
{
public:
	::E6DAAFFF86CC4E75* E14BAC98F5FBFA0D; // 0x40

	::System::Void A00773F95A03D4B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFD808EF6496FA9F_A00773F95A03D4B7_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFD808EF6496FA9F__CTOR_OFFSET))(this);
	}
};
