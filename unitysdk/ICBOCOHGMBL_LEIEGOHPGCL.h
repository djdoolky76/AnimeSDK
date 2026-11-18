#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/Object.h"

#define ICBOCOHGMBL_LEIEGOHPGCL_AAHMACBDCPN_OFFSET UNITYSDK_OFFSET(0x10130590)
#define ICBOCOHGMBL_LEIEGOHPGCL__CTOR_OFFSET UNITYSDK_OFFSET(0x10130580)

inline static constexpr unsigned int ICBOCOHGMBL_LEIEGOHPGCL_TypeDefinitionIndex = 61149;

class ICBOCOHGMBL_LEIEGOHPGCL : public ::System::Object
{
public:
	::HOCDHMEPPEG DOHGKLMAIJA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICBOCOHGMBL_LEIEGOHPGCL__CTOR_OFFSET))(this);
	}

	::System::Void AAHMACBDCPN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICBOCOHGMBL_LEIEGOHPGCL_AAHMACBDCPN_OFFSET))(this);
	}
};
