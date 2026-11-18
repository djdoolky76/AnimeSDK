#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PBJOCICFNGK.h"
#include "unitysdk/LIBOIKJGAIH.h"

class IOOIHHOJOPI;

#define IDNHFPIDDAC_EJMLADDEHAE_OFFSET UNITYSDK_OFFSET(0x15EA83D0)
#define IDNHFPIDDAC_NPKBDILPMHJ_OFFSET UNITYSDK_OFFSET(0x15EA8610)
#define IDNHFPIDDAC_PILPKINFMBA_OFFSET UNITYSDK_OFFSET(0x15EA8420)
#define IDNHFPIDDAC__CTOR_OFFSET UNITYSDK_OFFSET(0x15EA85C0)

inline static constexpr unsigned int IDNHFPIDDAC_TypeDefinitionIndex = 55339;

class IDNHFPIDDAC : public ::PBJOCICFNGK
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDNHFPIDDAC__CTOR_OFFSET))(this);
	}

	::System::Void EJMLADDEHAE(::LIBOIKJGAIH& EIEOJFEPMAB, ::IOOIHHOJOPI* IOKOLJDCKPN)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + IDNHFPIDDAC_EJMLADDEHAE_OFFSET))(this, EIEOJFEPMAB, IOKOLJDCKPN);
	}

	::System::Void PILPKINFMBA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDNHFPIDDAC_PILPKINFMBA_OFFSET))(this);
	}

	::System::Void NPKBDILPMHJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDNHFPIDDAC_NPKBDILPMHJ_OFFSET))(this);
	}
};
