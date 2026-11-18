#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PBJOCICFNGK.h"
#include "unitysdk/LIBOIKJGAIH.h"

class IOOIHHOJOPI;

#define NHFBHCALILM_EJMLADDEHAE_OFFSET UNITYSDK_OFFSET(0x11F76DE0)
#define NHFBHCALILM__CTOR_OFFSET UNITYSDK_OFFSET(0x11F76EC0)

inline static constexpr unsigned int NHFBHCALILM_TypeDefinitionIndex = 57863;

class NHFBHCALILM : public ::PBJOCICFNGK
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHFBHCALILM__CTOR_OFFSET))(this);
	}

	::System::Void EJMLADDEHAE(::LIBOIKJGAIH& EIEOJFEPMAB, ::IOOIHHOJOPI* IOKOLJDCKPN)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + NHFBHCALILM_EJMLADDEHAE_OFFSET))(this, EIEOJFEPMAB, IOKOLJDCKPN);
	}
};
