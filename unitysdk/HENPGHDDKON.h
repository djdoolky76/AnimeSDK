#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JHLACNDBEEL.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define HENPGHDDKON_ALMJBHFEOFA_OFFSET UNITYSDK_OFFSET(0x1B121300)
#define HENPGHDDKON_CGIDFONADHI_OFFSET UNITYSDK_OFFSET(0x1B1211F0)
#define HENPGHDDKON_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B121100)
#define HENPGHDDKON_DKOCPDPOIEA_OFFSET UNITYSDK_OFFSET(0x1B120FC0)
#define HENPGHDDKON_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B121440)
#define HENPGHDDKON_KAABCLGOGDF_OFFSET UNITYSDK_OFFSET(0x1B121450)
#define HENPGHDDKON_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B120FB0)
#define HENPGHDDKON_OFHOBPCIHAE_OFFSET UNITYSDK_OFFSET(0x1B120EA0)
#define HENPGHDDKON__CTOR_OFFSET UNITYSDK_OFFSET(0x1B120E90)

inline static constexpr unsigned int HENPGHDDKON_TypeDefinitionIndex = 15414;

class HENPGHDDKON : public ::System::Object
{
public:
	::System::String* PGLGBONAAPD; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x18
	::System::String* EDEMNJEDFLD; // 0x20
	::System::String* JCBALPCBIJP; // 0x28
	::JHLACNDBEEL HBDPAIKANDB; // 0x30
	::System::Int32 OOONGDPBPFJ; // 0x40
	::System::Int32 FBMLCHDEDLB; // 0x44
	::System::Byte CNIAANMNOCF; // 0x48
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x49
	::System::Byte ACIOBDEBDNK; // 0x4A

	::System::Void _ctor(::JHLACNDBEEL LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::JHLACNDBEEL, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + HENPGHDDKON__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* OFHOBPCIHAE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HENPGHDDKON_OFHOBPCIHAE_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HENPGHDDKON_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 DKOCPDPOIEA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HENPGHDDKON_DKOCPDPOIEA_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HENPGHDDKON_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* CGIDFONADHI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HENPGHDDKON_CGIDFONADHI_OFFSET))(this);
	}

	::System::Int32 ALMJBHFEOFA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HENPGHDDKON_ALMJBHFEOFA_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HENPGHDDKON_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* KAABCLGOGDF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HENPGHDDKON_KAABCLGOGDF_OFFSET))(this);
	}
};
