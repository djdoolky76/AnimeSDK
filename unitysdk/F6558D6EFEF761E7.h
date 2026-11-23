#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

#define F6558D6EFEF761E7__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int F6558D6EFEF761E7_TypeDefinitionIndex = 1644;

class F6558D6EFEF761E7 : public ::E379DE61A548837D
{
public:
	::System::UInt32 A81B229D7CEC19B7; // 0x38
	::System::Boolean A1A029EA00A72218; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F6558D6EFEF761E7__CTOR_OFFSET))(this);
	}
};
