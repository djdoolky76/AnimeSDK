#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CCDFJCPDCLB__CTOR_OFFSET UNITYSDK_OFFSET(0x10E311A0)

inline static constexpr unsigned int CCDFJCPDCLB_TypeDefinitionIndex = 86817;

class CCDFJCPDCLB : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCDFJCPDCLB__CTOR_OFFSET))(this);
	}
};
