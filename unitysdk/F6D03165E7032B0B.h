#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

#define F6D03165E7032B0B__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int F6D03165E7032B0B_TypeDefinitionIndex = 2194;

class F6D03165E7032B0B : public ::E379DE61A548837D
{
public:
	::System::UInt32 F8C264FCB92CC8B2; // 0x38
	::System::UInt32 F0A8D0B9981AB119; // 0x3C
	::System::Boolean F4F8B138F7EA556A; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F6D03165E7032B0B__CTOR_OFFSET))(this);
	}
};
