#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

#define B51AEEDE7E8DDE02__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int B51AEEDE7E8DDE02_TypeDefinitionIndex = 7079;

class B51AEEDE7E8DDE02 : public ::E379DE61A548837D
{
public:
	::System::UInt32 FE39CBAB46640FCD; // 0x38
	::System::UInt32 EC219789435FE5D1; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B51AEEDE7E8DDE02__CTOR_OFFSET))(this);
	}
};
