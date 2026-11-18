#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OKGLILBPOFO.h"

class HIDPAPFBACC;
class HPGBIDMABJP;
class NDHLHBHJBHF;

#define PFNHADLKNJB_GLEJMKLOMBP_OFFSET UNITYSDK_OFFSET(0x184686D0)
#define PFNHADLKNJB__CTOR_OFFSET UNITYSDK_OFFSET(0x18468560)

inline static constexpr unsigned int PFNHADLKNJB_TypeDefinitionIndex = 86096;

class PFNHADLKNJB : public ::OKGLILBPOFO
{
public:
	::NDHLHBHJBHF* AJLHHAOHPMM; // 0x20
	::HPGBIDMABJP* KDMABPELCGN; // 0x28

	::System::Void _ctor(::HIDPAPFBACC* DEKJDEPKKLH)
	{
		return ((::System::Void(*)(::PVOID, ::HIDPAPFBACC*))((::PBYTE)hIl2Cpp + PFNHADLKNJB__CTOR_OFFSET))(this, DEKJDEPKKLH);
	}

	::System::Void GLEJMKLOMBP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFNHADLKNJB_GLEJMKLOMBP_OFFSET))(this);
	}
};
