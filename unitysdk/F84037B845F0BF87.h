#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E18ED99A30D9921D.h"

#define F84037B845F0BF87_B8445B315D0681B5_OFFSET UNITYSDK_OFFSET(0x19CD3A0)
#define F84037B845F0BF87__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int F84037B845F0BF87_TypeDefinitionIndex = 18928;

class F84037B845F0BF87 : public ::E18ED99A30D9921D
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F84037B845F0BF87__CTOR_OFFSET))(this);
	}

	::System::Int32 B8445B315D0681B5()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + F84037B845F0BF87_B8445B315D0681B5_OFFSET))(this);
	}
};
