#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BPHGHOFKJBN.h"
#include "unitysdk/KMDPLHBLFJH.h"

class BCOFOFCAODO;

#define CKNEDDAGPJD_ADHHAPIIBIE_OFFSET UNITYSDK_OFFSET(0x193E6090)
#define CKNEDDAGPJD_KAEBEMDFEIC_OFFSET UNITYSDK_OFFSET(0x193E6070)
#define CKNEDDAGPJD__CTOR_OFFSET UNITYSDK_OFFSET(0x193E6080)

inline static constexpr unsigned int CKNEDDAGPJD_TypeDefinitionIndex = 57899;

class CKNEDDAGPJD : public ::KMDPLHBLFJH
{
public:
	::System::Void _ctor(::BCOFOFCAODO* FAIPFCNDLDE)
	{
		return ((::System::Void(*)(::PVOID, ::BCOFOFCAODO*))((::PBYTE)hIl2Cpp + CKNEDDAGPJD__CTOR_OFFSET))(this, FAIPFCNDLDE);
	}

	::BPHGHOFKJBN KAEBEMDFEIC()
	{
		return ((::BPHGHOFKJBN(*)(::PVOID))((::PBYTE)hIl2Cpp + CKNEDDAGPJD_KAEBEMDFEIC_OFFSET))(this);
	}

	::System::Void ADHHAPIIBIE(::System::Int32 NAEHCOOHFHB, ::System::Int32 GHIBJCNHPAF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CKNEDDAGPJD_ADHHAPIIBIE_OFFSET))(this, NAEHCOOHFHB, GHIBJCNHPAF);
	}
};
