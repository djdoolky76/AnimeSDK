#pragma once
#include "unitysdk/unitysdk.h"

class EAEKKCHEGLC;
namespace System { class String; }

#define LEGNMAEEBKC_GJCFMHFMOJN_OFFSET UNITYSDK_OFFSET(0x1255BE80)
#define LEGNMAEEBKC_IADKMLACDMD_OFFSET UNITYSDK_OFFSET(0x1255BE90)
#define LEGNMAEEBKC_IEDANDJBGMF_OFFSET UNITYSDK_OFFSET(0x1255BDB0)
#define LEGNMAEEBKC_IHEFCEHGKGM_OFFSET UNITYSDK_OFFSET(0x1255BDA0)
#define LEGNMAEEBKC_JENHIJPKEKG_OFFSET UNITYSDK_OFFSET(0x1255BD90)
#define LEGNMAEEBKC_NIFCDDGDILA_OFFSET UNITYSDK_OFFSET(0x1255BE70)
#define LEGNMAEEBKC__CTOR_OFFSET UNITYSDK_OFFSET(0x1255BDF0)

inline static constexpr unsigned int LEGNMAEEBKC_TypeDefinitionIndex = 83598;

class LEGNMAEEBKC
{
public:
	::EAEKKCHEGLC* _CKKLLCDMBBM_k__BackingField; // 0x18
	::System::String* _LPOKKPODLGO_k__BackingField; // 0x20

	::System::Void _ctor(::EAEKKCHEGLC* KPNIHKEKDOC)
	{
		return ((::System::Void(*)(::PVOID, ::EAEKKCHEGLC*))((::PBYTE)hIl2Cpp + LEGNMAEEBKC__CTOR_OFFSET))(this, KPNIHKEKDOC);
	}

	::System::String* JENHIJPKEKG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGNMAEEBKC_JENHIJPKEKG_OFFSET))(this);
	}

	::System::Boolean IHEFCEHGKGM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGNMAEEBKC_IHEFCEHGKGM_OFFSET))(this);
	}

	::System::Boolean IEDANDJBGMF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGNMAEEBKC_IEDANDJBGMF_OFFSET))(this);
	}

	::EAEKKCHEGLC* NIFCDDGDILA()
	{
		return ((::EAEKKCHEGLC*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGNMAEEBKC_NIFCDDGDILA_OFFSET))(this);
	}

	::System::Void GJCFMHFMOJN(::EAEKKCHEGLC* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::EAEKKCHEGLC*))((::PBYTE)hIl2Cpp + LEGNMAEEBKC_GJCFMHFMOJN_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void IADKMLACDMD(::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LEGNMAEEBKC_IADKMLACDMD_OFFSET))(this, EGEGIMGMJHN);
	}
};
