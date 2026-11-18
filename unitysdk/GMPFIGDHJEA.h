#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PBJOCICFNGK.h"
#include "unitysdk/LIBOIKJGAIH.h"

class IOOIHHOJOPI;

#define GMPFIGDHJEA_EJMLADDEHAE_OFFSET UNITYSDK_OFFSET(0x10F0A250)
#define GMPFIGDHJEA_NPKBDILPMHJ_OFFSET UNITYSDK_OFFSET(0x10F0A330)
#define GMPFIGDHJEA_PILPKINFMBA_OFFSET UNITYSDK_OFFSET(0x10F0A2A0)
#define GMPFIGDHJEA__CTOR_OFFSET UNITYSDK_OFFSET(0x10F0A2E0)

inline static constexpr unsigned int GMPFIGDHJEA_TypeDefinitionIndex = 42330;

class GMPFIGDHJEA : public ::PBJOCICFNGK
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMPFIGDHJEA__CTOR_OFFSET))(this);
	}

	::System::Void EJMLADDEHAE(::LIBOIKJGAIH& EIEOJFEPMAB, ::IOOIHHOJOPI* IOKOLJDCKPN)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + GMPFIGDHJEA_EJMLADDEHAE_OFFSET))(this, EIEOJFEPMAB, IOKOLJDCKPN);
	}

	::System::Void PILPKINFMBA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMPFIGDHJEA_PILPKINFMBA_OFFSET))(this);
	}

	::System::Void NPKBDILPMHJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMPFIGDHJEA_NPKBDILPMHJ_OFFSET))(this);
	}
};
