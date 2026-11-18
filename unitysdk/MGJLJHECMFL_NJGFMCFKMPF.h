#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DJCHCMEFPIF.h"
#include "unitysdk/System/Object.h"

#define MGJLJHECMFL_NJGFMCFKMPF_KGMFABEBDHJ_OFFSET UNITYSDK_OFFSET(0x14DE3B50)
#define MGJLJHECMFL_NJGFMCFKMPF__CTOR_OFFSET UNITYSDK_OFFSET(0x14DE3B40)

inline static constexpr unsigned int MGJLJHECMFL_NJGFMCFKMPF_TypeDefinitionIndex = 80056;

class MGJLJHECMFL_NJGFMCFKMPF : public ::System::Object
{
public:
	::DJCHCMEFPIF IGACGMOCONB; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGJLJHECMFL_NJGFMCFKMPF__CTOR_OFFSET))(this);
	}

	::System::Boolean KGMFABEBDHJ(::DJCHCMEFPIF IPMMCGDMODG)
	{
		return ((::System::Boolean(*)(::PVOID, ::DJCHCMEFPIF))((::PBYTE)hIl2Cpp + MGJLJHECMFL_NJGFMCFKMPF_KGMFABEBDHJ_OFFSET))(this, IPMMCGDMODG);
	}
};
