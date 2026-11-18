#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CAONGKLFNGN_BMGEEIJFLIJ_OFFSET UNITYSDK_OFFSET(0x14F125F0)
#define CAONGKLFNGN_KIJAJIHPBDL_OFFSET UNITYSDK_OFFSET(0x14F125B0)
#define CAONGKLFNGN__CTOR_OFFSET UNITYSDK_OFFSET(0x14F12630)

inline static constexpr unsigned int CAONGKLFNGN_TypeDefinitionIndex = 43128;

class CAONGKLFNGN : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAONGKLFNGN__CTOR_OFFSET))(this);
	}

	::System::Void KIJAJIHPBDL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAONGKLFNGN_KIJAJIHPBDL_OFFSET))(this);
	}

	::System::Void BMGEEIJFLIJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAONGKLFNGN_BMGEEIJFLIJ_OFFSET))(this);
	}
};
