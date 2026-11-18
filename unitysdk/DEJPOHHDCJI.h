#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FHGHJDPHHEL;

#define DEJPOHHDCJI_FAKBNFMEMLL_OFFSET UNITYSDK_OFFSET(0x19A3A790)
#define DEJPOHHDCJI__CTOR_OFFSET UNITYSDK_OFFSET(0x19A3A780)

inline static constexpr unsigned int DEJPOHHDCJI_TypeDefinitionIndex = 48555;

class DEJPOHHDCJI : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEJPOHHDCJI__CTOR_OFFSET))(this);
	}

	static ::System::Void FAKBNFMEMLL(::FHGHJDPHHEL* AAOCANGHBDG, ::System::Single PBCAAADNEPK)
	{
		return ((::System::Void(*)(::FHGHJDPHHEL*, ::System::Single))((::PBYTE)hIl2Cpp + DEJPOHHDCJI_FAKBNFMEMLL_OFFSET))(AAOCANGHBDG, PBCAAADNEPK);
	}
};
