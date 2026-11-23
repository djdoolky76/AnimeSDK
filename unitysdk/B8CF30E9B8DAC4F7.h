#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

#define B8CF30E9B8DAC4F7__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int B8CF30E9B8DAC4F7_TypeDefinitionIndex = 1273;

class B8CF30E9B8DAC4F7 : public ::E379DE61A548837D
{
public:
	::System::Boolean E580C97C13617576; // 0x38
	::System::Byte _padding0[0x3];
	::System::Single F9F4BDBEF6CF4C4D; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B8CF30E9B8DAC4F7__CTOR_OFFSET))(this);
	}
};
