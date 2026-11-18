#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DMAKJFNANCH.h"

class AKHELNKOPEB;
class CBMMKDOEHDB;

#define GHLOGPHAMNC_FOCDKCOPFAG_OFFSET UNITYSDK_OFFSET(0x13D532B0)
#define GHLOGPHAMNC__CTOR_OFFSET UNITYSDK_OFFSET(0x13D532A0)

inline static constexpr unsigned int GHLOGPHAMNC_TypeDefinitionIndex = 53578;

class GHLOGPHAMNC : public ::DMAKJFNANCH
{
public:
	::System::Void _ctor(::CBMMKDOEHDB* FFKBEGIHIGG, ::CBMMKDOEHDB* CKADGLGJJAB)
	{
		return ((::System::Void(*)(::PVOID, ::CBMMKDOEHDB*, ::CBMMKDOEHDB*))((::PBYTE)hIl2Cpp + GHLOGPHAMNC__CTOR_OFFSET))(this, FFKBEGIHIGG, CKADGLGJJAB);
	}

	::System::Boolean FOCDKCOPFAG(::AKHELNKOPEB* IGCMCCAPHCI)
	{
		return ((::System::Boolean(*)(::PVOID, ::AKHELNKOPEB*))((::PBYTE)hIl2Cpp + GHLOGPHAMNC_FOCDKCOPFAG_OFFSET))(this, IGCMCCAPHCI);
	}
};
