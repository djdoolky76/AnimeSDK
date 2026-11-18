#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PBJOCICFNGK.h"
#include "unitysdk/LIBOIKJGAIH.h"

class IOOIHHOJOPI;

#define DEKHKMHMGDJ_EJMLADDEHAE_OFFSET UNITYSDK_OFFSET(0x147C7DD0)
#define DEKHKMHMGDJ_NPKBDILPMHJ_OFFSET UNITYSDK_OFFSET(0x147C7EB0)
#define DEKHKMHMGDJ_PILPKINFMBA_OFFSET UNITYSDK_OFFSET(0x147C7E20)
#define DEKHKMHMGDJ__CTOR_OFFSET UNITYSDK_OFFSET(0x147C7E60)

inline static constexpr unsigned int DEKHKMHMGDJ_TypeDefinitionIndex = 64749;

class DEKHKMHMGDJ : public ::PBJOCICFNGK
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEKHKMHMGDJ__CTOR_OFFSET))(this);
	}

	::System::Void EJMLADDEHAE(::LIBOIKJGAIH& EIEOJFEPMAB, ::IOOIHHOJOPI* IOKOLJDCKPN)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + DEKHKMHMGDJ_EJMLADDEHAE_OFFSET))(this, EIEOJFEPMAB, IOKOLJDCKPN);
	}

	::System::Void PILPKINFMBA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEKHKMHMGDJ_PILPKINFMBA_OFFSET))(this);
	}

	::System::Void NPKBDILPMHJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEKHKMHMGDJ_NPKBDILPMHJ_OFFSET))(this);
	}
};
