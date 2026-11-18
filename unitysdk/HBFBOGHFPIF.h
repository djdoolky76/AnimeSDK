#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PBJOCICFNGK.h"
#include "unitysdk/LIBOIKJGAIH.h"

class IOOIHHOJOPI;

#define HBFBOGHFPIF_EJMLADDEHAE_OFFSET UNITYSDK_OFFSET(0x146DD0C0)
#define HBFBOGHFPIF__CTOR_OFFSET UNITYSDK_OFFSET(0x146DD110)

inline static constexpr unsigned int HBFBOGHFPIF_TypeDefinitionIndex = 68867;

class HBFBOGHFPIF : public ::PBJOCICFNGK
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFBOGHFPIF__CTOR_OFFSET))(this);
	}

	::System::Void EJMLADDEHAE(::LIBOIKJGAIH& EIEOJFEPMAB, ::IOOIHHOJOPI* IOKOLJDCKPN)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + HBFBOGHFPIF_EJMLADDEHAE_OFFSET))(this, EIEOJFEPMAB, IOKOLJDCKPN);
	}
};
