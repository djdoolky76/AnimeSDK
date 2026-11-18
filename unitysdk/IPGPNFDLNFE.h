#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define IPGPNFDLNFE_ADDOFMELGKK_OFFSET UNITYSDK_OFFSET(0x160C3320)
#define IPGPNFDLNFE_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x160C33C0)
#define IPGPNFDLNFE_GEACNPDEJNO_OFFSET UNITYSDK_OFFSET(0x160C35B0)
#define IPGPNFDLNFE_GIPADMHEKBC_OFFSET UNITYSDK_OFFSET(0x160C3360)
#define IPGPNFDLNFE_ICBJLMMEKDO_OFFSET UNITYSDK_OFFSET(0x160C3410)
#define IPGPNFDLNFE_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x160C3500)
#define IPGPNFDLNFE__CTOR_OFFSET UNITYSDK_OFFSET(0x160C36F0)

inline static constexpr unsigned int IPGPNFDLNFE_TypeDefinitionIndex = 70640;

class IPGPNFDLNFE : public ::System::Object
{
public:
	// static const ::System::Int32 PONAJCMAEOL = 0x4; // 0x0
	::System::Int32 PIPLLGGHHGP; // 0x10
	::System::Boolean EOJEABJDOMC; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPGPNFDLNFE__CTOR_OFFSET))(this);
	}

	::System::String* ADDOFMELGKK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPGPNFDLNFE_ADDOFMELGKK_OFFSET))(this);
	}

	::System::Boolean GIPADMHEKBC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IPGPNFDLNFE_GIPADMHEKBC_OFFSET))(this);
	}

	::System::Boolean BBOMJDBNHIC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IPGPNFDLNFE_BBOMJDBNHIC_OFFSET))(this);
	}

	::System::Void ICBJLMMEKDO(::System::Byte DLJPLHKELCO, ::System::Byte LMLPPLMKLFL, ::System::Byte EBFCACIEKBC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Byte, ::System::Byte, ::System::Byte))((::PBYTE)hIl2Cpp + IPGPNFDLNFE_ICBJLMMEKDO_OFFSET))(this, DLJPLHKELCO, LMLPPLMKLFL, EBFCACIEKBC);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPGPNFDLNFE_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Void GEACNPDEJNO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPGPNFDLNFE_GEACNPDEJNO_OFFSET))(this);
	}
};
