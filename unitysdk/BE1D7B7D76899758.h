#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/F6D57A31343640D7.h"

#define BE1D7B7D76899758_BC8FCB218D25F8E8_OFFSET UNITYSDK_OFFSET(0x1C504A0)
#define BE1D7B7D76899758__CTOR_OFFSET UNITYSDK_OFFSET(0x16F7FA0)

inline static constexpr unsigned int BE1D7B7D76899758_TypeDefinitionIndex = 9289;

class BE1D7B7D76899758 : public ::F6D57A31343640D7
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BE1D7B7D76899758__CTOR_OFFSET))(this);
	}

	::System::Boolean BC8FCB218D25F8E8()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BE1D7B7D76899758_BC8FCB218D25F8E8_OFFSET))(this);
	}
};
