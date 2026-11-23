#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AB893667BB6F371B.h"
#include "unitysdk/E379DE61A548837D.h"
#include "unitysdk/E68AA4EB51923C98/F76D857DEDB76FD5.h"

#define F3C6F69B49BB34F8__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int F3C6F69B49BB34F8_TypeDefinitionIndex = 44;

class F3C6F69B49BB34F8 : public ::E379DE61A548837D
{
public:
	::E68AA4EB51923C98::F76D857DEDB76FD5 E8A596AC44E741A9; // 0x38
	::System::Boolean E632D2441EC894B1; // 0x3C
	::System::Byte _padding0[0x3];
	::AB893667BB6F371B A19F6DDD0D29254E; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F3C6F69B49BB34F8__CTOR_OFFSET))(this);
	}
};
