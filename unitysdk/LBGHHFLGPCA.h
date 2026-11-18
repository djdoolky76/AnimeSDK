#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LGAMIAMAAMD.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define LBGHHFLGPCA_BEFEHMPJGIF_OFFSET UNITYSDK_OFFSET(0x1B7EC080)
#define LBGHHFLGPCA_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B7EBF90)
#define LBGHHFLGPCA_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B7EC300)
#define LBGHHFLGPCA_HJIINILNJMI_OFFSET UNITYSDK_OFFSET(0x1B7EBE80)
#define LBGHHFLGPCA_JLIFDOJOFIJ_OFFSET UNITYSDK_OFFSET(0x1B7EC1C0)
#define LBGHHFLGPCA_LBBDJMAHFKE_OFFSET UNITYSDK_OFFSET(0x1B7EBD40)
#define LBGHHFLGPCA_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B7EC310)
#define LBGHHFLGPCA_POGDKJNPPOM_OFFSET UNITYSDK_OFFSET(0x1B7EBC30)
#define LBGHHFLGPCA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7EBC20)

inline static constexpr unsigned int LBGHHFLGPCA_TypeDefinitionIndex = 9328;

class LBGHHFLGPCA : public ::System::Object
{
public:
	::System::String* PPKMGEEMKNM; // 0x10
	::System::String* PELGMBAAEBD; // 0x18
	::LGAMIAMAAMD HBDPAIKANDB; // 0x20
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x30
	::System::Int32 AFAEFLGOKEA; // 0x38
	::System::Int32 KNBBKNNPHHC; // 0x3C
	::System::Int32 AMIHOJABIOD; // 0x40
	::System::Byte CNIAANMNOCF; // 0x44
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x45
	::System::Byte ACIOBDEBDNK; // 0x46

	::System::Void _ctor(::LGAMIAMAAMD LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::LGAMIAMAAMD, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + LBGHHFLGPCA__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* POGDKJNPPOM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBGHHFLGPCA_POGDKJNPPOM_OFFSET))(this);
	}

	::System::Int32 LBBDJMAHFKE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LBGHHFLGPCA_LBBDJMAHFKE_OFFSET))(this);
	}

	::System::String* HJIINILNJMI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBGHHFLGPCA_HJIINILNJMI_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBGHHFLGPCA_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 BEFEHMPJGIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LBGHHFLGPCA_BEFEHMPJGIF_OFFSET))(this);
	}

	::System::Int32 JLIFDOJOFIJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LBGHHFLGPCA_JLIFDOJOFIJ_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LBGHHFLGPCA_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LBGHHFLGPCA_LJANCIBECFG_OFFSET))(this);
	}
};
