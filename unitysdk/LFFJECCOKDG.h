#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PBJOCICFNGK.h"
#include "unitysdk/LIBOIKJGAIH.h"

class IOOIHHOJOPI;

#define LFFJECCOKDG_EJMLADDEHAE_OFFSET UNITYSDK_OFFSET(0x12560600)
#define LFFJECCOKDG__CTOR_OFFSET UNITYSDK_OFFSET(0x12560650)

inline static constexpr unsigned int LFFJECCOKDG_TypeDefinitionIndex = 80268;

class LFFJECCOKDG : public ::PBJOCICFNGK
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFFJECCOKDG__CTOR_OFFSET))(this);
	}

	::System::Void EJMLADDEHAE(::LIBOIKJGAIH& EIEOJFEPMAB, ::IOOIHHOJOPI* IOKOLJDCKPN)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + LFFJECCOKDG_EJMLADDEHAE_OFFSET))(this, EIEOJFEPMAB, IOKOLJDCKPN);
	}
};
