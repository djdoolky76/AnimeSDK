#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OMGAIHDFKIN_ILPIJBDFLAF;

#define OMGAIHDFKIN_DDGAELFEJJA_HHKMPGMBIDM_OFFSET UNITYSDK_OFFSET(0x13A72470)
#define OMGAIHDFKIN_DDGAELFEJJA__CTOR_OFFSET UNITYSDK_OFFSET(0x13A72460)

inline static constexpr unsigned int OMGAIHDFKIN_DDGAELFEJJA_TypeDefinitionIndex = 89329;

class OMGAIHDFKIN_DDGAELFEJJA : public ::System::Object
{
public:
	::OMGAIHDFKIN_ILPIJBDFLAF* FGBNBFHOKAA; // 0x10
	::System::Int32 ABHBKFJKINO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMGAIHDFKIN_DDGAELFEJJA__CTOR_OFFSET))(this);
	}

	::System::Void HHKMPGMBIDM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMGAIHDFKIN_DDGAELFEJJA_HHKMPGMBIDM_OFFSET))(this);
	}
};
