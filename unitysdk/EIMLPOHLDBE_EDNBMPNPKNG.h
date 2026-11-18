#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AGLNNPIHIEG;
class EIMLPOHLDBE_OPEFFMHHGKB;

#define EIMLPOHLDBE_EDNBMPNPKNG_DGLAFODMLEH_OFFSET UNITYSDK_OFFSET(0x1D9AF850)
#define EIMLPOHLDBE_EDNBMPNPKNG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9AF840)

inline static constexpr unsigned int EIMLPOHLDBE_EDNBMPNPKNG_TypeDefinitionIndex = 93287;

class EIMLPOHLDBE_EDNBMPNPKNG : public ::System::Object
{
public:
	::EIMLPOHLDBE_OPEFFMHHGKB* FGBNBFHOKAA; // 0x10
	::AGLNNPIHIEG* FOHKELJBAFA; // 0x18
	::System::Int32 MOPMNPEHFHF; // 0x20
	::System::Single OLEMGFHEKLO; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIMLPOHLDBE_EDNBMPNPKNG__CTOR_OFFSET))(this);
	}

	::System::Void DGLAFODMLEH(::AGLNNPIHIEG* JCHFKGGDDFB)
	{
		return ((::System::Void(*)(::PVOID, ::AGLNNPIHIEG*))((::PBYTE)hIl2Cpp + EIMLPOHLDBE_EDNBMPNPKNG_DGLAFODMLEH_OFFSET))(this, JCHFKGGDDFB);
	}
};
