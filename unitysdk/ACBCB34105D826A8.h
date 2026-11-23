#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

#define ACBCB34105D826A8__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int ACBCB34105D826A8_TypeDefinitionIndex = 364;

class ACBCB34105D826A8 : public ::E379DE61A548837D
{
public:
	::System::Boolean EA002D4CF421FB09; // 0x38
	::System::Byte _padding0[0x3];
	::System::UInt32 B289D9A1F114D305; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACBCB34105D826A8__CTOR_OFFSET))(this);
	}
};
