#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BCCMPEIHJMN.h"

#define AMNGJCJABBK_CKHKGAKDCAJ_OFFSET UNITYSDK_OFFSET(0x14379150)
#define AMNGJCJABBK__CTOR_OFFSET UNITYSDK_OFFSET(0x14379010)

inline static constexpr unsigned int AMNGJCJABBK_TypeDefinitionIndex = 92307;

class AMNGJCJABBK : public ::BCCMPEIHJMN
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMNGJCJABBK__CTOR_OFFSET))(this);
	}

	::System::Void CKHKGAKDCAJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMNGJCJABBK_CKHKGAKDCAJ_OFFSET))(this);
	}
};
