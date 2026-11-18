#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BDNMHHIKMIL.h"

class JMNDEAFIAAF;

#define BMNBBBMJAIC_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x18DA9540)
#define BMNBBBMJAIC_OMCCGHBCCNI_OFFSET UNITYSDK_OFFSET(0x18DA9580)
#define BMNBBBMJAIC__CTOR_OFFSET UNITYSDK_OFFSET(0x18DA9890)

inline static constexpr unsigned int BMNBBBMJAIC_TypeDefinitionIndex = 73703;

class BMNBBBMJAIC : public ::BDNMHHIKMIL
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMNBBBMJAIC__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMNBBBMJAIC_OJENCMOGDKL_OFFSET))(this);
	}

	::System::Void OMCCGHBCCNI(::JMNDEAFIAAF* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::JMNDEAFIAAF*))((::PBYTE)hIl2Cpp + BMNBBBMJAIC_OMCCGHBCCNI_OFFSET))(this, AAOCANGHBDG);
	}
};
