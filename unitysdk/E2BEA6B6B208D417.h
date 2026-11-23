#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

#define E2BEA6B6B208D417__CTOR_OFFSET UNITYSDK_OFFSET(0x17B7790)

inline static constexpr unsigned int E2BEA6B6B208D417_TypeDefinitionIndex = 942;

class E2BEA6B6B208D417 : public ::E379DE61A548837D
{
public:
	::System::UInt32 E08C8950EE4A2B6F; // 0x38
	::System::Single B1DA062BF9FC8A7E; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E2BEA6B6B208D417__CTOR_OFFSET))(this);
	}
};
