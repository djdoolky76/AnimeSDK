#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E2BEC5FD40067593.h"
#include "unitysdk/E12F55A5FCCCF1EC.h"

#define FF4B562C2C7E6295_B0FFD4C9FDB32663_OFFSET UNITYSDK_OFFSET(0x1FE1040)
#define FF4B562C2C7E6295__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int FF4B562C2C7E6295_TypeDefinitionIndex = 8143;

class FF4B562C2C7E6295 : public ::E2BEC5FD40067593
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FF4B562C2C7E6295__CTOR_OFFSET))(this);
	}

	::System::Void B0FFD4C9FDB32663(::E12F55A5FCCCF1EC EB5670302F34D4B7)
	{
		return ((::System::Void(*)(::PVOID, ::E12F55A5FCCCF1EC))((::PBYTE)hIl2Cpp + FF4B562C2C7E6295_B0FFD4C9FDB32663_OFFSET))(this, EB5670302F34D4B7);
	}
};
