#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MFFJPOBJPDM.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define CDLPMPEGJJB_BNKPNGANFDN_OFFSET UNITYSDK_OFFSET(0x1573B7F0)
#define CDLPMPEGJJB_CNIMPNICLOH_OFFSET UNITYSDK_OFFSET(0x1573B5C0)
#define CDLPMPEGJJB_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1573BA70)
#define CDLPMPEGJJB_FFMBGCLLCIF_OFFSET UNITYSDK_OFFSET(0x1573B930)
#define CDLPMPEGJJB_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1573BCA0)
#define CDLPMPEGJJB_GPBFENDAJMF_OFFSET UNITYSDK_OFFSET(0x1573B6E0)
#define CDLPMPEGJJB_IFDIOIOCGDP_OFFSET UNITYSDK_OFFSET(0x1573BCB0)
#define CDLPMPEGJJB_KCFBOPKOLKI_OFFSET UNITYSDK_OFFSET(0x1573BB60)
#define CDLPMPEGJJB_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1573B6D0)
#define CDLPMPEGJJB__CTOR_OFFSET UNITYSDK_OFFSET(0x1573B5B0)

inline static constexpr unsigned int CDLPMPEGJJB_TypeDefinitionIndex = 13123;

class CDLPMPEGJJB : public ::System::Object
{
public:
	::MFFJPOBJPDM HBDPAIKANDB; // 0x10
	::System::String* CKLIGBACBFB; // 0x20
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::String* GPNJCCHKLIP; // 0x30
	::System::String* EOALHEEBMKM; // 0x38
	::System::Int32 AICFILHLIPF; // 0x40
	::System::Byte ACIOBDEBDNK; // 0x44
	::System::Byte CNIAANMNOCF; // 0x45
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x46
	::System::Byte _padding0[0x1];
	::System::Int32 MFAAMEMILEM; // 0x48
	::System::Int32 KGDNNBIIPIN; // 0x4C

	::System::Void _ctor(::MFFJPOBJPDM LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::MFFJPOBJPDM, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + CDLPMPEGJJB__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* CNIMPNICLOH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDLPMPEGJJB_CNIMPNICLOH_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CDLPMPEGJJB_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* GPBFENDAJMF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDLPMPEGJJB_GPBFENDAJMF_OFFSET))(this);
	}

	::System::Int32 BNKPNGANFDN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDLPMPEGJJB_BNKPNGANFDN_OFFSET))(this);
	}

	::System::Int32 FFMBGCLLCIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDLPMPEGJJB_FFMBGCLLCIF_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDLPMPEGJJB_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 KCFBOPKOLKI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDLPMPEGJJB_KCFBOPKOLKI_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CDLPMPEGJJB_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* IFDIOIOCGDP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDLPMPEGJJB_IFDIOIOCGDP_OFFSET))(this);
	}
};
