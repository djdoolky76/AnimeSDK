#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BFFGAGGMDCB.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define EEPAABKENBM_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19AE3570)
#define EEPAABKENBM_DCAMONJGNHG_OFFSET UNITYSDK_OFFSET(0x19AE3660)
#define EEPAABKENBM_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19AE37A0)
#define EEPAABKENBM_LBAGPMHCOCN_OFFSET UNITYSDK_OFFSET(0x19AE37B0)
#define EEPAABKENBM_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19AE3560)
#define EEPAABKENBM__CTOR_OFFSET UNITYSDK_OFFSET(0x19AE3550)

inline static constexpr unsigned int EEPAABKENBM_TypeDefinitionIndex = 17014;

class EEPAABKENBM : public ::System::Object
{
public:
	::System::String* FGECIGPJPCF; // 0x10
	::BFFGAGGMDCB HBDPAIKANDB; // 0x18
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::Int32 BDLMCMBNHHK; // 0x30
	::System::Byte CNIAANMNOCF; // 0x34
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x35
	::System::Byte ACIOBDEBDNK; // 0x36
	::System::Byte _padding0[0x1];
	::System::Int32 DPJDADJFEPI; // 0x38
	::System::Int32 FLJKHHBKDKB; // 0x3C
	::System::Int32 MNBNMLDLKCL; // 0x40

	::System::Void _ctor(::BFFGAGGMDCB LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::BFFGAGGMDCB, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + EEPAABKENBM__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EEPAABKENBM_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEPAABKENBM_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 DCAMONJGNHG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EEPAABKENBM_DCAMONJGNHG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EEPAABKENBM_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 LBAGPMHCOCN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EEPAABKENBM_LBAGPMHCOCN_OFFSET))(this);
	}
};
