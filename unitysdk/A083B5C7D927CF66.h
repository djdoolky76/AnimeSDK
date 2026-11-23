#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

class F09D914E7FD65959;

#define A083B5C7D927CF66__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int A083B5C7D927CF66_TypeDefinitionIndex = 9980;

class A083B5C7D927CF66 : public ::E379DE61A548837D
{
public:
	::F09D914E7FD65959* E503CF3EAE138E9D; // 0x38
	::System::Boolean BCA611733BAC07E9; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A083B5C7D927CF66__CTOR_OFFSET))(this);
	}
};
