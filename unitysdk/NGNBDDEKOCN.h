#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PBJOCICFNGK.h"
#include "unitysdk/LIBOIKJGAIH.h"

class IOOIHHOJOPI;

#define NGNBDDEKOCN_EJMLADDEHAE_OFFSET UNITYSDK_OFFSET(0x12FE5EE0)
#define NGNBDDEKOCN__CTOR_OFFSET UNITYSDK_OFFSET(0x12FE5F30)

inline static constexpr unsigned int NGNBDDEKOCN_TypeDefinitionIndex = 78031;

class NGNBDDEKOCN : public ::PBJOCICFNGK
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGNBDDEKOCN__CTOR_OFFSET))(this);
	}

	::System::Void EJMLADDEHAE(::LIBOIKJGAIH& EIEOJFEPMAB, ::IOOIHHOJOPI* IOKOLJDCKPN)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + NGNBDDEKOCN_EJMLADDEHAE_OFFSET))(this, EIEOJFEPMAB, IOKOLJDCKPN);
	}
};
