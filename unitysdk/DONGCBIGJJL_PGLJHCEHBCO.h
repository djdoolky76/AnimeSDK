#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DONGCBIGJJL_BJFOBONFEDI;
class FMHDMLBDIJC;

#define DONGCBIGJJL_PGLJHCEHBCO_KOLJCFMIMND_OFFSET UNITYSDK_OFFSET(0x132A9A20)
#define DONGCBIGJJL_PGLJHCEHBCO__CTOR_OFFSET UNITYSDK_OFFSET(0x132A9A10)

inline static constexpr unsigned int DONGCBIGJJL_PGLJHCEHBCO_TypeDefinitionIndex = 70481;

class DONGCBIGJJL_PGLJHCEHBCO : public ::System::Object
{
public:
	::DONGCBIGJJL_BJFOBONFEDI* FGBNBFHOKAA; // 0x10
	::System::Int32 KNJOHKJLEGO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DONGCBIGJJL_PGLJHCEHBCO__CTOR_OFFSET))(this);
	}

	::System::Boolean KOLJCFMIMND(::FMHDMLBDIJC* KDEHMPGOCEP)
	{
		return ((::System::Boolean(*)(::PVOID, ::FMHDMLBDIJC*))((::PBYTE)hIl2Cpp + DONGCBIGJJL_PGLJHCEHBCO_KOLJCFMIMND_OFFSET))(this, KDEHMPGOCEP);
	}
};
