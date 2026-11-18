#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABLPDAPPABA.h"

#define HHGMIMKPJOA_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x15DABEC0)
#define HHGMIMKPJOA_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x15DABE20)
#define HHGMIMKPJOA__CTOR_OFFSET UNITYSDK_OFFSET(0x15DABEB0)

inline static constexpr unsigned int HHGMIMKPJOA_TypeDefinitionIndex = 63706;

class HHGMIMKPJOA : public ::ABLPDAPPABA
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHGMIMKPJOA__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHGMIMKPJOA_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHGMIMKPJOA_FIGPAOKNJLN_OFFSET))(this);
	}
};
