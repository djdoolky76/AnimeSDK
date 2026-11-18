#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PBJOCICFNGK.h"
#include "unitysdk/LIBOIKJGAIH.h"

class IOOIHHOJOPI;

#define ELJFBAHNPOJ_EJMLADDEHAE_OFFSET UNITYSDK_OFFSET(0x14177E00)
#define ELJFBAHNPOJ__CTOR_OFFSET UNITYSDK_OFFSET(0x14177E50)

inline static constexpr unsigned int ELJFBAHNPOJ_TypeDefinitionIndex = 66136;

class ELJFBAHNPOJ : public ::PBJOCICFNGK
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELJFBAHNPOJ__CTOR_OFFSET))(this);
	}

	::System::Void EJMLADDEHAE(::LIBOIKJGAIH& EIEOJFEPMAB, ::IOOIHHOJOPI* IOKOLJDCKPN)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + ELJFBAHNPOJ_EJMLADDEHAE_OFFSET))(this, EIEOJFEPMAB, IOKOLJDCKPN);
	}
};
