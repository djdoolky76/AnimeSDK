#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKLPCMMHKEO.h"

#define FKNKBAOGJOA__CTOR_OFFSET UNITYSDK_OFFSET(0x191FBC60)

inline static constexpr unsigned int FKNKBAOGJOA_TypeDefinitionIndex = 48031;

class FKNKBAOGJOA : public ::AKLPCMMHKEO
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKNKBAOGJOA__CTOR_OFFSET))(this);
	}
};
