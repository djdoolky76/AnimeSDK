#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IFBMCLAKMAM;

#define ENEOLAONNAH_BBFGEGBHKDP_OFFSET UNITYSDK_OFFSET(0x14278C80)
#define ENEOLAONNAH__CTOR_OFFSET UNITYSDK_OFFSET(0x14278C70)

inline static constexpr unsigned int ENEOLAONNAH_TypeDefinitionIndex = 77669;

class ENEOLAONNAH : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENEOLAONNAH__CTOR_OFFSET))(this);
	}

	::System::Void BBFGEGBHKDP(::IFBMCLAKMAM* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::IFBMCLAKMAM*))((::PBYTE)hIl2Cpp + ENEOLAONNAH_BBFGEGBHKDP_OFFSET))(this, LJBPECKCCEA);
	}
};
