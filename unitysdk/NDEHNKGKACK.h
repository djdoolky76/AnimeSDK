#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NDEHNKGKACK__CTOR_OFFSET UNITYSDK_OFFSET(0x105AD950)

inline static constexpr unsigned int NDEHNKGKACK_TypeDefinitionIndex = 42856;

class NDEHNKGKACK : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDEHNKGKACK__CTOR_OFFSET))(this);
	}
};
