#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LDEGCFKBNNK.h"

class AKHELNKOPEB;

#define OOBCNMLIKEM_FOCDKCOPFAG_OFFSET UNITYSDK_OFFSET(0x136C2D10)
#define OOBCNMLIKEM__CTOR_OFFSET UNITYSDK_OFFSET(0x136C2D60)

inline static constexpr unsigned int OOBCNMLIKEM_TypeDefinitionIndex = 56997;

class OOBCNMLIKEM : public ::LDEGCFKBNNK
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOBCNMLIKEM__CTOR_OFFSET))(this);
	}

	::System::Boolean FOCDKCOPFAG(::AKHELNKOPEB* IGCMCCAPHCI)
	{
		return ((::System::Boolean(*)(::PVOID, ::AKHELNKOPEB*))((::PBYTE)hIl2Cpp + OOBCNMLIKEM_FOCDKCOPFAG_OFFSET))(this, IGCMCCAPHCI);
	}
};
