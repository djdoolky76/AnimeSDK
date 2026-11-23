#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

#define A36477165DF280A2__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int A36477165DF280A2_TypeDefinitionIndex = 9202;

class A36477165DF280A2 : public ::E379DE61A548837D
{
public:
	::System::UInt32 F5FD986BE1BEFE7C; // 0x38
	::System::Boolean F90FC672F2C2CFFF; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A36477165DF280A2__CTOR_OFFSET))(this);
	}
};
