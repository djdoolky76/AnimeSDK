#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PBJOCICFNGK.h"
#include "unitysdk/LIBOIKJGAIH.h"

class IOOIHHOJOPI;

#define FALONKPHGPB_EJMLADDEHAE_OFFSET UNITYSDK_OFFSET(0xBB311F0)
#define FALONKPHGPB_NPKBDILPMHJ_OFFSET UNITYSDK_OFFSET(0xBB312D0)
#define FALONKPHGPB_PILPKINFMBA_OFFSET UNITYSDK_OFFSET(0xBB31240)
#define FALONKPHGPB__CTOR_OFFSET UNITYSDK_OFFSET(0xBB31280)

inline static constexpr unsigned int FALONKPHGPB_TypeDefinitionIndex = 62198;

class FALONKPHGPB : public ::PBJOCICFNGK
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FALONKPHGPB__CTOR_OFFSET))(this);
	}

	::System::Void EJMLADDEHAE(::LIBOIKJGAIH& EIEOJFEPMAB, ::IOOIHHOJOPI* IOKOLJDCKPN)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + FALONKPHGPB_EJMLADDEHAE_OFFSET))(this, EIEOJFEPMAB, IOKOLJDCKPN);
	}

	::System::Void PILPKINFMBA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FALONKPHGPB_PILPKINFMBA_OFFSET))(this);
	}

	::System::Void NPKBDILPMHJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FALONKPHGPB_NPKBDILPMHJ_OFFSET))(this);
	}
};
