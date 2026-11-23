#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFC4AEA2121EC272.h"

#define F32C05369A114F02_FFE59D93BEA6E2CA_OFFSET UNITYSDK_OFFSET(0x21AD470)
#define F32C05369A114F02__CTOR_OFFSET UNITYSDK_OFFSET(0x16665F0)

inline static constexpr unsigned int F32C05369A114F02_TypeDefinitionIndex = 8861;

class F32C05369A114F02 : public ::EFC4AEA2121EC272
{
public:
	::System::Void FFE59D93BEA6E2CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F32C05369A114F02_FFE59D93BEA6E2CA_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F32C05369A114F02__CTOR_OFFSET))(this);
	}
};
