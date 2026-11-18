#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FGAGCFOLHGI;

#define CAKMCNHIDEL_EFADLDAIADK_BMJMJLIHJKI_OFFSET UNITYSDK_OFFSET(0x1685EE80)
#define CAKMCNHIDEL_EFADLDAIADK__CTOR_OFFSET UNITYSDK_OFFSET(0x1685EE70)

inline static constexpr unsigned int CAKMCNHIDEL_EFADLDAIADK_TypeDefinitionIndex = 75148;

class CAKMCNHIDEL_EFADLDAIADK : public ::System::Object
{
public:
	::System::Int32 LDOHDMIOHKA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAKMCNHIDEL_EFADLDAIADK__CTOR_OFFSET))(this);
	}

	::System::Boolean BMJMJLIHJKI(::FGAGCFOLHGI* HEAJMIGHEHG)
	{
		return ((::System::Boolean(*)(::PVOID, ::FGAGCFOLHGI*))((::PBYTE)hIl2Cpp + CAKMCNHIDEL_EFADLDAIADK_BMJMJLIHJKI_OFFSET))(this, HEAJMIGHEHG);
	}
};
