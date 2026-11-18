#pragma once
#include "unitysdk/unitysdk.h"

#define EJIMGOPAMOO__CTOR_OFFSET UNITYSDK_OFFSET(0xFE17F60)

inline static constexpr unsigned int EJIMGOPAMOO_TypeDefinitionIndex = 79922;

class EJIMGOPAMOO
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJIMGOPAMOO__CTOR_OFFSET))(this);
	}
};
