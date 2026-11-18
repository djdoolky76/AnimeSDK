#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ANCEJAPLCGG.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define BIMFAHNBPEB_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1775BF60)
#define BIMFAHNBPEB_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1775BF50)
#define BIMFAHNBPEB_GKBDBJMJHBB_OFFSET UNITYSDK_OFFSET(0x1775C050)
#define BIMFAHNBPEB_IGKFAFBGBAP_OFFSET UNITYSDK_OFFSET(0x1775BCC0)
#define BIMFAHNBPEB_KCFBOPKOLKI_OFFSET UNITYSDK_OFFSET(0x1775C190)
#define BIMFAHNBPEB_LAFDAPPOBGL_OFFSET UNITYSDK_OFFSET(0x1775BE00)
#define BIMFAHNBPEB_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1775BF40)
#define BIMFAHNBPEB_PHALDLDFONO_OFFSET UNITYSDK_OFFSET(0x1775C2D0)
#define BIMFAHNBPEB__CTOR_OFFSET UNITYSDK_OFFSET(0x1775BCB0)

inline static constexpr unsigned int BIMFAHNBPEB_TypeDefinitionIndex = 13136;

class BIMFAHNBPEB : public ::System::Object
{
public:
	::System::String* KAJMHMJKJPD; // 0x10
	::System::String* GPNJCCHKLIP; // 0x18
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::ANCEJAPLCGG HBDPAIKANDB; // 0x28
	::System::Byte ACIOBDEBDNK; // 0x38
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x39
	::System::Byte CNIAANMNOCF; // 0x3A
	::System::Byte _padding0[0x1];
	::System::Int32 OFGMKLFNPPJ; // 0x3C
	::System::Int32 MFAAMEMILEM; // 0x40
	::System::Int32 EJHGHBDFDAC; // 0x44
	::System::Int32 MJBBLOAPCGB; // 0x48
	::System::Int32 HEEAGAPGCLI; // 0x4C

	::System::Void _ctor(::ANCEJAPLCGG LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::ANCEJAPLCGG, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + BIMFAHNBPEB__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 IGKFAFBGBAP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BIMFAHNBPEB_IGKFAFBGBAP_OFFSET))(this);
	}

	::System::Int32 LAFDAPPOBGL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BIMFAHNBPEB_LAFDAPPOBGL_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BIMFAHNBPEB_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BIMFAHNBPEB_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIMFAHNBPEB_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 GKBDBJMJHBB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BIMFAHNBPEB_GKBDBJMJHBB_OFFSET))(this);
	}

	::System::Int32 KCFBOPKOLKI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BIMFAHNBPEB_KCFBOPKOLKI_OFFSET))(this);
	}

	::System::String* PHALDLDFONO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIMFAHNBPEB_PHALDLDFONO_OFFSET))(this);
	}
};
