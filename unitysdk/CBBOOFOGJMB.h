#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PBJOCICFNGK.h"
#include "unitysdk/LIBOIKJGAIH.h"

class IOOIHHOJOPI;

#define CBBOOFOGJMB_EJMLADDEHAE_OFFSET UNITYSDK_OFFSET(0x1685FB70)
#define CBBOOFOGJMB_JEDGMEJDMLK_OFFSET UNITYSDK_OFFSET(0x1685FDA0)
#define CBBOOFOGJMB_OKOPHPFOKPC_OFFSET UNITYSDK_OFFSET(0x1685FDE0)
#define CBBOOFOGJMB__CTOR_OFFSET UNITYSDK_OFFSET(0x1685FD40)

inline static constexpr unsigned int CBBOOFOGJMB_TypeDefinitionIndex = 41864;

class CBBOOFOGJMB : public ::PBJOCICFNGK
{
public:
	::System::Int32 HEKDCBLJHNN; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBBOOFOGJMB__CTOR_OFFSET))(this);
	}

	::System::Void EJMLADDEHAE(::LIBOIKJGAIH& EIEOJFEPMAB, ::IOOIHHOJOPI* IOKOLJDCKPN)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + CBBOOFOGJMB_EJMLADDEHAE_OFFSET))(this, EIEOJFEPMAB, IOKOLJDCKPN);
	}

	static ::System::Int64 JEDGMEJDMLK()
	{
		return ((::System::Int64(*)())((::PBYTE)hIl2Cpp + CBBOOFOGJMB_JEDGMEJDMLK_OFFSET))();
	}

	::System::Void OKOPHPFOKPC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBBOOFOGJMB_OKOPHPFOKPC_OFFSET))(this);
	}
};
