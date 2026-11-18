#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DMAKJFNANCH.h"

class AKHELNKOPEB;
class CBMMKDOEHDB;

#define FEOBAFNDFON_FOCDKCOPFAG_OFFSET UNITYSDK_OFFSET(0x116AC2E0)
#define FEOBAFNDFON__CTOR_OFFSET UNITYSDK_OFFSET(0x116AC2D0)

inline static constexpr unsigned int FEOBAFNDFON_TypeDefinitionIndex = 90220;

class FEOBAFNDFON : public ::DMAKJFNANCH
{
public:
	::System::Void _ctor(::CBMMKDOEHDB* FFKBEGIHIGG, ::CBMMKDOEHDB* CKADGLGJJAB)
	{
		return ((::System::Void(*)(::PVOID, ::CBMMKDOEHDB*, ::CBMMKDOEHDB*))((::PBYTE)hIl2Cpp + FEOBAFNDFON__CTOR_OFFSET))(this, FFKBEGIHIGG, CKADGLGJJAB);
	}

	::System::Boolean FOCDKCOPFAG(::AKHELNKOPEB* IGCMCCAPHCI)
	{
		return ((::System::Boolean(*)(::PVOID, ::AKHELNKOPEB*))((::PBYTE)hIl2Cpp + FEOBAFNDFON_FOCDKCOPFAG_OFFSET))(this, IGCMCCAPHCI);
	}
};
