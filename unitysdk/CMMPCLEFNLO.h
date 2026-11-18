#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PCONBALFDAP.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define CMMPCLEFNLO_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B99CB90)
#define CMMPCLEFNLO_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B99CEA0)
#define CMMPCLEFNLO_JFNBMOEDJKH_OFFSET UNITYSDK_OFFSET(0x1B99CD90)
#define CMMPCLEFNLO_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B99CEB0)
#define CMMPCLEFNLO_LNLNHEMFAEC_OFFSET UNITYSDK_OFFSET(0x1B99CA80)
#define CMMPCLEFNLO_NLDOFOPJPMF_OFFSET UNITYSDK_OFFSET(0x1B99CC80)
#define CMMPCLEFNLO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B99CA70)

inline static constexpr unsigned int CMMPCLEFNLO_TypeDefinitionIndex = 15107;

class CMMPCLEFNLO : public ::System::Object
{
public:
	::System::String* KKBBCOKNLDN; // 0x10
	::PCONBALFDAP HBDPAIKANDB; // 0x18
	::System::String* BPFHNBHGDBI; // 0x28
	::System::String* DHBLPDHJAOH; // 0x30
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x38
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x40
	::System::Byte CNIAANMNOCF; // 0x41
	::System::Byte ACIOBDEBDNK; // 0x42

	::System::Void _ctor(::PCONBALFDAP LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::PCONBALFDAP, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + CMMPCLEFNLO__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* LNLNHEMFAEC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMMPCLEFNLO_LNLNHEMFAEC_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMMPCLEFNLO_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* NLDOFOPJPMF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMMPCLEFNLO_NLDOFOPJPMF_OFFSET))(this);
	}

	::System::String* JFNBMOEDJKH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMMPCLEFNLO_JFNBMOEDJKH_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CMMPCLEFNLO_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CMMPCLEFNLO_LJANCIBECFG_OFFSET))(this);
	}
};
