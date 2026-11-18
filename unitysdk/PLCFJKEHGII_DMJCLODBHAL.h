#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/Object.h"

class PLCFJKEHGII_FDFHELACBAO;

#define PLCFJKEHGII_DMJCLODBHAL_LIDNPLMPHAL_OFFSET UNITYSDK_OFFSET(0x150D58E0)
#define PLCFJKEHGII_DMJCLODBHAL__CTOR_OFFSET UNITYSDK_OFFSET(0x150D58D0)

inline static constexpr unsigned int PLCFJKEHGII_DMJCLODBHAL_TypeDefinitionIndex = 56278;

class PLCFJKEHGII_DMJCLODBHAL : public ::System::Object
{
public:
	::HOCDHMEPPEG ABMKEFPKPMD; // 0x10
	::HOCDHMEPPEG GPELAKKMLBG; // 0x40
	::PLCFJKEHGII_FDFHELACBAO* FGBNBFHOKAA; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLCFJKEHGII_DMJCLODBHAL__CTOR_OFFSET))(this);
	}

	::System::Void LIDNPLMPHAL(::System::Boolean DJCNCELJPOM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PLCFJKEHGII_DMJCLODBHAL_LIDNPLMPHAL_OFFSET))(this, DJCNCELJPOM);
	}
};
