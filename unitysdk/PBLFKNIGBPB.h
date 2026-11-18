#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FANBKJPNEDB;

#define PBLFKNIGBPB_NIIHMPMKICM_OFFSET UNITYSDK_OFFSET(0x11B51AC0)
#define PBLFKNIGBPB__CTOR_OFFSET UNITYSDK_OFFSET(0x11B51B40)

inline static constexpr unsigned int PBLFKNIGBPB_TypeDefinitionIndex = 60414;

class PBLFKNIGBPB : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBLFKNIGBPB__CTOR_OFFSET))(this);
	}

	::System::Int32 NIIHMPMKICM(::FANBKJPNEDB* FFKBEGIHIGG, ::FANBKJPNEDB* CKADGLGJJAB)
	{
		return ((::System::Int32(*)(::PVOID, ::FANBKJPNEDB*, ::FANBKJPNEDB*))((::PBYTE)hIl2Cpp + PBLFKNIGBPB_NIIHMPMKICM_OFFSET))(this, FFKBEGIHIGG, CKADGLGJJAB);
	}
};
