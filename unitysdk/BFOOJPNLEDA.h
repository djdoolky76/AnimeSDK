#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PBJOCICFNGK.h"
#include "unitysdk/LIBOIKJGAIH.h"

class IOOIHHOJOPI;

#define BFOOJPNLEDA_EJMLADDEHAE_OFFSET UNITYSDK_OFFSET(0x1866CD50)
#define BFOOJPNLEDA_NPKBDILPMHJ_OFFSET UNITYSDK_OFFSET(0x1866CE30)
#define BFOOJPNLEDA_PILPKINFMBA_OFFSET UNITYSDK_OFFSET(0x1866CDA0)
#define BFOOJPNLEDA__CTOR_OFFSET UNITYSDK_OFFSET(0x1866CDE0)

inline static constexpr unsigned int BFOOJPNLEDA_TypeDefinitionIndex = 38985;

class BFOOJPNLEDA : public ::PBJOCICFNGK
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFOOJPNLEDA__CTOR_OFFSET))(this);
	}

	::System::Void EJMLADDEHAE(::LIBOIKJGAIH& EIEOJFEPMAB, ::IOOIHHOJOPI* IOKOLJDCKPN)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + BFOOJPNLEDA_EJMLADDEHAE_OFFSET))(this, EIEOJFEPMAB, IOKOLJDCKPN);
	}

	::System::Void PILPKINFMBA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFOOJPNLEDA_PILPKINFMBA_OFFSET))(this);
	}

	::System::Void NPKBDILPMHJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFOOJPNLEDA_NPKBDILPMHJ_OFFSET))(this);
	}
};
