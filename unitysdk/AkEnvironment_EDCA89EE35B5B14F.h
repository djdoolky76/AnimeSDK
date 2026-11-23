#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AkEnvironment;

#define AKENVIRONMENT_EDCA89EE35B5B14F_BCB0A4DD6EA3B4C9_OFFSET UNITYSDK_OFFSET(0x2916BA0)
#define AKENVIRONMENT_EDCA89EE35B5B14F__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int AkEnvironment_EDCA89EE35B5B14F_TypeDefinitionIndex = 20486;

class AkEnvironment_EDCA89EE35B5B14F : public ::System::Object
{
public:
	::System::Int32 BCB0A4DD6EA3B4C9(::AkEnvironment* B35BBBE7E39341A2, ::AkEnvironment* AE40CAA6BBFEAD2C)
	{
		return ((::System::Int32(*)(::PVOID, ::AkEnvironment*, ::AkEnvironment*))((::PBYTE)hIl2Cpp + AKENVIRONMENT_EDCA89EE35B5B14F_BCB0A4DD6EA3B4C9_OFFSET))(this, B35BBBE7E39341A2, AE40CAA6BBFEAD2C);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKENVIRONMENT_EDCA89EE35B5B14F__CTOR_OFFSET))(this);
	}
};
