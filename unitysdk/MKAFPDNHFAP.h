#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BPHGHOFKJBN.h"
#include "unitysdk/KMDPLHBLFJH.h"

class BCOFOFCAODO;

#define MKAFPDNHFAP_ADHHAPIIBIE_OFFSET UNITYSDK_OFFSET(0x12D8FA80)
#define MKAFPDNHFAP_KAEBEMDFEIC_OFFSET UNITYSDK_OFFSET(0x12D8FA60)
#define MKAFPDNHFAP__CTOR_OFFSET UNITYSDK_OFFSET(0x12D8FA70)

inline static constexpr unsigned int MKAFPDNHFAP_TypeDefinitionIndex = 55448;

class MKAFPDNHFAP : public ::KMDPLHBLFJH
{
public:
	::System::Void _ctor(::BCOFOFCAODO* FAIPFCNDLDE)
	{
		return ((::System::Void(*)(::PVOID, ::BCOFOFCAODO*))((::PBYTE)hIl2Cpp + MKAFPDNHFAP__CTOR_OFFSET))(this, FAIPFCNDLDE);
	}

	::BPHGHOFKJBN KAEBEMDFEIC()
	{
		return ((::BPHGHOFKJBN(*)(::PVOID))((::PBYTE)hIl2Cpp + MKAFPDNHFAP_KAEBEMDFEIC_OFFSET))(this);
	}

	::System::Void ADHHAPIIBIE(::System::Int32 NAEHCOOHFHB, ::System::Int32 GHIBJCNHPAF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MKAFPDNHFAP_ADHHAPIIBIE_OFFSET))(this, NAEHCOOHFHB, GHIBJCNHPAF);
	}
};
