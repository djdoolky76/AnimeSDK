#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LDEGCFKBNNK.h"

class AKHELNKOPEB;

#define FNPPHOGMGKC_FOCDKCOPFAG_OFFSET UNITYSDK_OFFSET(0xBB70820)
#define FNPPHOGMGKC__CTOR_OFFSET UNITYSDK_OFFSET(0xBB70870)

inline static constexpr unsigned int FNPPHOGMGKC_TypeDefinitionIndex = 40584;

class FNPPHOGMGKC : public ::LDEGCFKBNNK
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNPPHOGMGKC__CTOR_OFFSET))(this);
	}

	::System::Boolean FOCDKCOPFAG(::AKHELNKOPEB* IGCMCCAPHCI)
	{
		return ((::System::Boolean(*)(::PVOID, ::AKHELNKOPEB*))((::PBYTE)hIl2Cpp + FNPPHOGMGKC_FOCDKCOPFAG_OFFSET))(this, IGCMCCAPHCI);
	}
};
