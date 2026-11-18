#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PBJOCICFNGK.h"
#include "unitysdk/LIBOIKJGAIH.h"

class IOOIHHOJOPI;

#define NFCDNGKDDPA_EJMLADDEHAE_OFFSET UNITYSDK_OFFSET(0x18FB4FC0)
#define NFCDNGKDDPA__CTOR_OFFSET UNITYSDK_OFFSET(0x18FB5010)

inline static constexpr unsigned int NFCDNGKDDPA_TypeDefinitionIndex = 72810;

class NFCDNGKDDPA : public ::PBJOCICFNGK
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFCDNGKDDPA__CTOR_OFFSET))(this);
	}

	::System::Void EJMLADDEHAE(::LIBOIKJGAIH& EIEOJFEPMAB, ::IOOIHHOJOPI* IOKOLJDCKPN)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + NFCDNGKDDPA_EJMLADDEHAE_OFFSET))(this, EIEOJFEPMAB, IOKOLJDCKPN);
	}
};
