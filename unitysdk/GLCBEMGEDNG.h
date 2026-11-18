#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PBJOCICFNGK.h"
#include "unitysdk/LIBOIKJGAIH.h"

class IOOIHHOJOPI;

#define GLCBEMGEDNG_EJMLADDEHAE_OFFSET UNITYSDK_OFFSET(0x15B28890)
#define GLCBEMGEDNG_NPKBDILPMHJ_OFFSET UNITYSDK_OFFSET(0x15B28970)
#define GLCBEMGEDNG_PILPKINFMBA_OFFSET UNITYSDK_OFFSET(0x15B288E0)
#define GLCBEMGEDNG__CTOR_OFFSET UNITYSDK_OFFSET(0x15B28920)

inline static constexpr unsigned int GLCBEMGEDNG_TypeDefinitionIndex = 42946;

class GLCBEMGEDNG : public ::PBJOCICFNGK
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLCBEMGEDNG__CTOR_OFFSET))(this);
	}

	::System::Void EJMLADDEHAE(::LIBOIKJGAIH& EIEOJFEPMAB, ::IOOIHHOJOPI* IOKOLJDCKPN)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + GLCBEMGEDNG_EJMLADDEHAE_OFFSET))(this, EIEOJFEPMAB, IOKOLJDCKPN);
	}

	::System::Void PILPKINFMBA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLCBEMGEDNG_PILPKINFMBA_OFFSET))(this);
	}

	::System::Void NPKBDILPMHJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLCBEMGEDNG_NPKBDILPMHJ_OFFSET))(this);
	}
};
