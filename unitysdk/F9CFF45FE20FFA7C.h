#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A8F601FB69ED2B23.h"

class AB642D1382756991;

#define F9CFF45FE20FFA7C_A8A53711F9A793AD_OFFSET UNITYSDK_OFFSET(0x2743280)
#define F9CFF45FE20FFA7C__CTOR_OFFSET UNITYSDK_OFFSET(0x27432D0)

inline static constexpr unsigned int F9CFF45FE20FFA7C_TypeDefinitionIndex = 3100;

class F9CFF45FE20FFA7C : public ::A8F601FB69ED2B23
{
public:
	::AB642D1382756991* A8A53711F9A793AD()
	{
		return ((::AB642D1382756991*(*)(::PVOID))((::PBYTE)hIl2Cpp + F9CFF45FE20FFA7C_A8A53711F9A793AD_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F9CFF45FE20FFA7C__CTOR_OFFSET))(this);
	}
};
