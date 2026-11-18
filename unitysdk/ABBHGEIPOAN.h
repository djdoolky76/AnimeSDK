#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JGELKBLKFHE.h"

class AEINDKLBMFN;
class DECHCEBKOEI;
class KLGCPNHALPJ;
class OCCHEBFLDEG;

#define ABBHGEIPOAN_CNIKAMOAANF_OFFSET UNITYSDK_OFFSET(0x16435B30)
#define ABBHGEIPOAN_DOPGAFCKMNF_OFFSET UNITYSDK_OFFSET(0x16435E00)
#define ABBHGEIPOAN_GPJEJCNAOPO_OFFSET UNITYSDK_OFFSET(0x16435E90)
#define ABBHGEIPOAN_KJKELGLEJMH_OFFSET UNITYSDK_OFFSET(0x16435CE0)
#define ABBHGEIPOAN_KKOIKMLBIHB_OFFSET UNITYSDK_OFFSET(0x16435A10)
#define ABBHGEIPOAN_MEGCJFNGMGM_OFFSET UNITYSDK_OFFSET(0x16435BC0)
#define ABBHGEIPOAN_ONSHUTDOWN_OFFSET UNITYSDK_OFFSET(0x16435980)
#define ABBHGEIPOAN_ONSTART_OFFSET UNITYSDK_OFFSET(0x16435920)
#define ABBHGEIPOAN__CCTOR_OFFSET UNITYSDK_OFFSET(0x164359F0)
#define ABBHGEIPOAN__CTOR_OFFSET UNITYSDK_OFFSET(0x164359E0)

inline static constexpr unsigned int ABBHGEIPOAN_TypeDefinitionIndex = 56316;

class ABBHGEIPOAN : public ::JGELKBLKFHE
{
public:
	static ::System::Single* StaticGet_LNLJKOMBLPN()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(ABBHGEIPOAN_TypeDefinitionIndex)->GetStaticField(0x111D0);
	}
	static ::System::Single* StaticGet_APAPKEBGHAH()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(ABBHGEIPOAN_TypeDefinitionIndex)->GetStaticField(0x111D4);
	}
	static ::System::Single* StaticGet_JNFLMGKFALG()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(ABBHGEIPOAN_TypeDefinitionIndex)->GetStaticField(0x111D8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABBHGEIPOAN__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ABBHGEIPOAN__CCTOR_OFFSET))();
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABBHGEIPOAN_ONSTART_OFFSET))(this);
	}

	::System::Void OnShutDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABBHGEIPOAN_ONSHUTDOWN_OFFSET))(this);
	}

	::OCCHEBFLDEG* KKOIKMLBIHB(::System::Int32 PAEEEHKILOC)
	{
		return ((::OCCHEBFLDEG*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ABBHGEIPOAN_KKOIKMLBIHB_OFFSET))(this, PAEEEHKILOC);
	}

	::System::Void CNIKAMOAANF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABBHGEIPOAN_CNIKAMOAANF_OFFSET))(this);
	}

	::KLGCPNHALPJ* MEGCJFNGMGM(::System::Int32 PAEEEHKILOC)
	{
		return ((::KLGCPNHALPJ*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ABBHGEIPOAN_MEGCJFNGMGM_OFFSET))(this, PAEEEHKILOC);
	}

	::AEINDKLBMFN* KJKELGLEJMH(::System::Int32 EFCLFBMOCDM)
	{
		return ((::AEINDKLBMFN*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ABBHGEIPOAN_KJKELGLEJMH_OFFSET))(this, EFCLFBMOCDM);
	}

	::System::Void DOPGAFCKMNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABBHGEIPOAN_DOPGAFCKMNF_OFFSET))(this);
	}

	::DECHCEBKOEI* GPJEJCNAOPO(::System::Int32 GGAANCEAGPM)
	{
		return ((::DECHCEBKOEI*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ABBHGEIPOAN_GPJEJCNAOPO_OFFSET))(this, GGAANCEAGPM);
	}
};
