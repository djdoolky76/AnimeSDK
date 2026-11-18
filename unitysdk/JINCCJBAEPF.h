#pragma once
#include "unitysdk/unitysdk.h"

class EAEKKCHEGLC;
namespace System { class String; }

#define JINCCJBAEPF_GJCFMHFMOJN_OFFSET UNITYSDK_OFFSET(0x130888E0)
#define JINCCJBAEPF_IEDANDJBGMF_OFFSET UNITYSDK_OFFSET(0x13088810)
#define JINCCJBAEPF_IHEFCEHGKGM_OFFSET UNITYSDK_OFFSET(0x13088800)
#define JINCCJBAEPF_JENHIJPKEKG_OFFSET UNITYSDK_OFFSET(0x130887F0)
#define JINCCJBAEPF_JNENFEELMBP_OFFSET UNITYSDK_OFFSET(0x130888F0)
#define JINCCJBAEPF_NIFCDDGDILA_OFFSET UNITYSDK_OFFSET(0x130888D0)
#define JINCCJBAEPF_PMLILGDNPPC_OFFSET UNITYSDK_OFFSET(0x13088900)
#define JINCCJBAEPF__CTOR_OFFSET UNITYSDK_OFFSET(0x13088850)

inline static constexpr unsigned int JINCCJBAEPF_TypeDefinitionIndex = 90046;

class JINCCJBAEPF
{
public:
	::System::String* _LPOKKPODLGO_k__BackingField; // 0x18
	::EAEKKCHEGLC* _CKKLLCDMBBM_k__BackingField; // 0x20
	::System::Boolean _OHOMBEILHNF_k__BackingField; // 0x28

	::System::Void _ctor(::EAEKKCHEGLC* KPNIHKEKDOC)
	{
		return ((::System::Void(*)(::PVOID, ::EAEKKCHEGLC*))((::PBYTE)hIl2Cpp + JINCCJBAEPF__CTOR_OFFSET))(this, KPNIHKEKDOC);
	}

	::System::String* JENHIJPKEKG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JINCCJBAEPF_JENHIJPKEKG_OFFSET))(this);
	}

	::System::Boolean IHEFCEHGKGM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JINCCJBAEPF_IHEFCEHGKGM_OFFSET))(this);
	}

	::System::Boolean IEDANDJBGMF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JINCCJBAEPF_IEDANDJBGMF_OFFSET))(this);
	}

	::EAEKKCHEGLC* NIFCDDGDILA()
	{
		return ((::EAEKKCHEGLC*(*)(::PVOID))((::PBYTE)hIl2Cpp + JINCCJBAEPF_NIFCDDGDILA_OFFSET))(this);
	}

	::System::Void GJCFMHFMOJN(::EAEKKCHEGLC* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::EAEKKCHEGLC*))((::PBYTE)hIl2Cpp + JINCCJBAEPF_GJCFMHFMOJN_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean JNENFEELMBP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JINCCJBAEPF_JNENFEELMBP_OFFSET))(this);
	}

	::System::Void PMLILGDNPPC(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JINCCJBAEPF_PMLILGDNPPC_OFFSET))(this, EGEGIMGMJHN);
	}
};
