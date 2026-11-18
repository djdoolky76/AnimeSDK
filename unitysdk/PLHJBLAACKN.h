#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EPHDADKPMGM.h"
#include "unitysdk/JAMHBBGHFAF.h"
#include "unitysdk/NDDGJMFPAKF.h"
#include "unitysdk/System/Object.h"

#define PLHJBLAACKN_NGBBIOFCEKN_1_OFFSET UNITYSDK_OFFSET(0x1BF24EE0)
#define PLHJBLAACKN_NGBBIOFCEKN_OFFSET UNITYSDK_OFFSET(0x1BF24E80)

inline static constexpr unsigned int PLHJBLAACKN_TypeDefinitionIndex = 44541;

class PLHJBLAACKN : public ::System::Object
{
public:
	static ::EPHDADKPMGM NGBBIOFCEKN(::NDDGJMFPAKF IIJEIFKCBJG)
	{
		return ((::EPHDADKPMGM(*)(::NDDGJMFPAKF))((::PBYTE)hIl2Cpp + PLHJBLAACKN_NGBBIOFCEKN_OFFSET))(IIJEIFKCBJG);
	}

	static ::EPHDADKPMGM NGBBIOFCEKN_1(::JAMHBBGHFAF IOCPODNAHAH)
	{
		return ((::EPHDADKPMGM(*)(::JAMHBBGHFAF))((::PBYTE)hIl2Cpp + PLHJBLAACKN_NGBBIOFCEKN_1_OFFSET))(IOCPODNAHAH);
	}
};
