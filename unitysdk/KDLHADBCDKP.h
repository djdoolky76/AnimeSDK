#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJNFLFFJNMD.h"

class OMDAPGKMILG;

#define KDLHADBCDKP_FOCDKCOPFAG_OFFSET UNITYSDK_OFFSET(0x13C53BF0)
#define KDLHADBCDKP__CTOR_OFFSET UNITYSDK_OFFSET(0x13C53C80)

inline static constexpr unsigned int KDLHADBCDKP_TypeDefinitionIndex = 49139;

class KDLHADBCDKP : public ::JJNFLFFJNMD
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDLHADBCDKP__CTOR_OFFSET))(this);
	}

	::System::Boolean FOCDKCOPFAG(::OMDAPGKMILG* LJBPECKCCEA)
	{
		return ((::System::Boolean(*)(::PVOID, ::OMDAPGKMILG*))((::PBYTE)hIl2Cpp + KDLHADBCDKP_FOCDKCOPFAG_OFFSET))(this, LJBPECKCCEA);
	}
};
