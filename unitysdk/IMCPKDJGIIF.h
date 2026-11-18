#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LFDIELJJGOO.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define IMCPKDJGIIF_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19352150)
#define IMCPKDJGIIF_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19351D70)
#define IMCPKDJGIIF_GGFNHKLGDPD_OFFSET UNITYSDK_OFFSET(0x19351ED0)
#define IMCPKDJGIIF_JEDPEBJIKJA_OFFSET UNITYSDK_OFFSET(0x19351D80)
#define IMCPKDJGIIF_JNNCOPHAECJ_OFFSET UNITYSDK_OFFSET(0x19352010)
#define IMCPKDJGIIF_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19351EC0)
#define IMCPKDJGIIF__CTOR_OFFSET UNITYSDK_OFFSET(0x19351D60)

inline static constexpr unsigned int IMCPKDJGIIF_TypeDefinitionIndex = 14409;

class IMCPKDJGIIF : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::System::String* IMAFCDDJOME; // 0x18
	::LFDIELJJGOO HBDPAIKANDB; // 0x20
	::System::Byte CNIAANMNOCF; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x31
	::System::Byte ACIOBDEBDNK; // 0x32
	::System::Byte _padding0[0x1];
	::System::Int32 IMFEABKGACJ; // 0x34
	::System::Int32 CEFPJEPLCCN; // 0x38
	::System::Int32 LFLBAEALFGK; // 0x3C
	::System::Int32 LBNMHIJPECG; // 0x40

	::System::Void _ctor(::LFDIELJJGOO LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::LFDIELJJGOO, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + IMCPKDJGIIF__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IMCPKDJGIIF_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 JEDPEBJIKJA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IMCPKDJGIIF_JEDPEBJIKJA_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IMCPKDJGIIF_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 GGFNHKLGDPD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IMCPKDJGIIF_GGFNHKLGDPD_OFFSET))(this);
	}

	::System::Int32 JNNCOPHAECJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IMCPKDJGIIF_JNNCOPHAECJ_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMCPKDJGIIF_COFGIJJOFLP_OFFSET))(this);
	}
};
