#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AHDHIGCGKCK;
class HIADILJIJHH_GHFODICPPFL;

#define HIADILJIJHH_COEFNPJLNOL_EPELHADKNGC_OFFSET UNITYSDK_OFFSET(0x17A48900)
#define HIADILJIJHH_COEFNPJLNOL_HMJJHGKFFAB_OFFSET UNITYSDK_OFFSET(0x17A48890)
#define HIADILJIJHH_COEFNPJLNOL__CTOR_OFFSET UNITYSDK_OFFSET(0x17A48880)

inline static constexpr unsigned int HIADILJIJHH_COEFNPJLNOL_TypeDefinitionIndex = 61812;

class HIADILJIJHH_COEFNPJLNOL : public ::System::Object
{
public:
	::HIADILJIJHH_GHFODICPPFL* FGBNBFHOKAA; // 0x10
	::AHDHIGCGKCK* IPMMCGDMODG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIADILJIJHH_COEFNPJLNOL__CTOR_OFFSET))(this);
	}

	::System::Void HMJJHGKFFAB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIADILJIJHH_COEFNPJLNOL_HMJJHGKFFAB_OFFSET))(this);
	}

	::System::Void EPELHADKNGC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIADILJIJHH_COEFNPJLNOL_EPELHADKNGC_OFFSET))(this);
	}
};
