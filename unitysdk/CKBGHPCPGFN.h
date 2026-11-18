#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PBJOCICFNGK.h"
#include "unitysdk/LIBOIKJGAIH.h"

class IOOIHHOJOPI;

#define CKBGHPCPGFN_EJMLADDEHAE_OFFSET UNITYSDK_OFFSET(0x16A301B0)
#define CKBGHPCPGFN__CTOR_OFFSET UNITYSDK_OFFSET(0x16A30200)

inline static constexpr unsigned int CKBGHPCPGFN_TypeDefinitionIndex = 42699;

class CKBGHPCPGFN : public ::PBJOCICFNGK
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKBGHPCPGFN__CTOR_OFFSET))(this);
	}

	::System::Void EJMLADDEHAE(::LIBOIKJGAIH& EIEOJFEPMAB, ::IOOIHHOJOPI* IOKOLJDCKPN)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + CKBGHPCPGFN_EJMLADDEHAE_OFFSET))(this, EIEOJFEPMAB, IOKOLJDCKPN);
	}
};
