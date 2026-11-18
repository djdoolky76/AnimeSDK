#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PBJOCICFNGK.h"
#include "unitysdk/LIBOIKJGAIH.h"

class CMKKADEEJPK;
class IOOIHHOJOPI;

#define PDCHLIHEJBI_EJMLADDEHAE_OFFSET UNITYSDK_OFFSET(0x1195D340)
#define PDCHLIHEJBI_NPKBDILPMHJ_OFFSET UNITYSDK_OFFSET(0x1195D460)
#define PDCHLIHEJBI_PILPKINFMBA_OFFSET UNITYSDK_OFFSET(0x1195D3D0)
#define PDCHLIHEJBI__CTOR_OFFSET UNITYSDK_OFFSET(0x1195D410)

inline static constexpr unsigned int PDCHLIHEJBI_TypeDefinitionIndex = 78205;

class PDCHLIHEJBI : public ::PBJOCICFNGK
{
public:
	::CMKKADEEJPK* LPOBPAEDFCH; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDCHLIHEJBI__CTOR_OFFSET))(this);
	}

	::System::Void EJMLADDEHAE(::LIBOIKJGAIH& EIEOJFEPMAB, ::IOOIHHOJOPI* IOKOLJDCKPN)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + PDCHLIHEJBI_EJMLADDEHAE_OFFSET))(this, EIEOJFEPMAB, IOKOLJDCKPN);
	}

	::System::Void PILPKINFMBA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDCHLIHEJBI_PILPKINFMBA_OFFSET))(this);
	}

	::System::Void NPKBDILPMHJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDCHLIHEJBI_NPKBDILPMHJ_OFFSET))(this);
	}
};
