#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/F6D57A31343640D7.h"

#define F46EA9D3ED35CCB2_BC8FCB218D25F8E8_OFFSET UNITYSDK_OFFSET(0x1D44140)
#define F46EA9D3ED35CCB2__CTOR_OFFSET UNITYSDK_OFFSET(0x16F7FA0)

inline static constexpr unsigned int F46EA9D3ED35CCB2_TypeDefinitionIndex = 10002;

class F46EA9D3ED35CCB2 : public ::F6D57A31343640D7
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F46EA9D3ED35CCB2__CTOR_OFFSET))(this);
	}

	::System::Boolean BC8FCB218D25F8E8()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + F46EA9D3ED35CCB2_BC8FCB218D25F8E8_OFFSET))(this);
	}
};
