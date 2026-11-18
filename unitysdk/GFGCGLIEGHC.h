#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BDNMHHIKMIL.h"

class JMNDEAFIAAF;

#define GFGCGLIEGHC_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x179E5AC0)
#define GFGCGLIEGHC_OMCCGHBCCNI_OFFSET UNITYSDK_OFFSET(0x179E5B00)
#define GFGCGLIEGHC__CTOR_OFFSET UNITYSDK_OFFSET(0x179E6370)

inline static constexpr unsigned int GFGCGLIEGHC_TypeDefinitionIndex = 38612;

class GFGCGLIEGHC : public ::BDNMHHIKMIL
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFGCGLIEGHC__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFGCGLIEGHC_OJENCMOGDKL_OFFSET))(this);
	}

	::System::Void OMCCGHBCCNI(::JMNDEAFIAAF* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::JMNDEAFIAAF*))((::PBYTE)hIl2Cpp + GFGCGLIEGHC_OMCCGHBCCNI_OFFSET))(this, AAOCANGHBDG);
	}
};
