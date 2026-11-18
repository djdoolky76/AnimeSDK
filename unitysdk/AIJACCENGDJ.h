#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HCIAOLNLOBJ.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define AIJACCENGDJ_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1C509050)
#define AIJACCENGDJ_FDAKHKPPILP_OFFSET UNITYSDK_OFFSET(0x1C508F10)
#define AIJACCENGDJ_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1C508CB0)
#define AIJACCENGDJ_JFLNBJIALHD_OFFSET UNITYSDK_OFFSET(0x1C509150)
#define AIJACCENGDJ_LFGIDEIHCID_OFFSET UNITYSDK_OFFSET(0x1C508DD0)
#define AIJACCENGDJ_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1C509140)
#define AIJACCENGDJ_ODKLDGDHHGP_OFFSET UNITYSDK_OFFSET(0x1C508CC0)
#define AIJACCENGDJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1C508CA0)

inline static constexpr unsigned int AIJACCENGDJ_TypeDefinitionIndex = 15846;

class AIJACCENGDJ : public ::System::Object
{
public:
	::HCIAOLNLOBJ HBDPAIKANDB; // 0x10
	::System::String* INEBJPBDCHI; // 0x20
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::Int32 KENMOOHJIHP; // 0x30
	::System::Int32 HLDIFDONBGF; // 0x34
	::System::Int32 CKALBMAMAKP; // 0x38
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x3C
	::System::Byte ACIOBDEBDNK; // 0x3D
	::System::Byte CNIAANMNOCF; // 0x3E

	::System::Void _ctor(::HCIAOLNLOBJ LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::HCIAOLNLOBJ, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + AIJACCENGDJ__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AIJACCENGDJ_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* ODKLDGDHHGP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIJACCENGDJ_ODKLDGDHHGP_OFFSET))(this);
	}

	::System::Int32 LFGIDEIHCID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AIJACCENGDJ_LFGIDEIHCID_OFFSET))(this);
	}

	::System::Int32 FDAKHKPPILP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AIJACCENGDJ_FDAKHKPPILP_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIJACCENGDJ_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AIJACCENGDJ_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 JFLNBJIALHD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AIJACCENGDJ_JFLNBJIALHD_OFFSET))(this);
	}
};
