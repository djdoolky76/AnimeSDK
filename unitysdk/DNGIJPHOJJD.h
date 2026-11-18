#pragma once
#include "unitysdk/unitysdk.h"

class AOKNFPPGDEJ;

#define DNGIJPHOJJD_ABDCJKILDFF_OFFSET UNITYSDK_OFFSET(0x1FB85240)
#define DNGIJPHOJJD_DOPGAFCKMNF_OFFSET UNITYSDK_OFFSET(0x1FB85650)
#define DNGIJPHOJJD_GNLJIHOBBKD_OFFSET UNITYSDK_OFFSET(0x1FB85730)
#define DNGIJPHOJJD_KBMFKANENAJ_OFFSET UNITYSDK_OFFSET(0x1FB85470)
#define DNGIJPHOJJD__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB85630)

inline static constexpr unsigned int DNGIJPHOJJD_TypeDefinitionIndex = 95147;

class DNGIJPHOJJD
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGIJPHOJJD__CTOR_OFFSET))(this);
	}

	::System::Void ABDCJKILDFF(::AOKNFPPGDEJ* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::AOKNFPPGDEJ*))((::PBYTE)hIl2Cpp + DNGIJPHOJJD_ABDCJKILDFF_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Void KBMFKANENAJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGIJPHOJJD_KBMFKANENAJ_OFFSET))(this);
	}

	::System::Void DOPGAFCKMNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGIJPHOJJD_DOPGAFCKMNF_OFFSET))(this);
	}

	::System::Void GNLJIHOBBKD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DNGIJPHOJJD_GNLJIHOBBKD_OFFSET))(this, MGMDLMBEDJF);
	}
};
