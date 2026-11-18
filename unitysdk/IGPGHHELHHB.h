#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JGCFMNDBEHF.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define IGPGHHELHHB_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1953FF90)
#define IGPGHHELHHB_CPBNNNFPKEM_OFFSET UNITYSDK_OFFSET(0x19540080)
#define IGPGHHELHHB_FLIPDCJJAOL_OFFSET UNITYSDK_OFFSET(0x19540300)
#define IGPGHHELHHB_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1953FE30)
#define IGPGHHELHHB_JABNIKBHMAA_OFFSET UNITYSDK_OFFSET(0x1953FE50)
#define IGPGHHELHHB_KEDBBKFOLOM_OFFSET UNITYSDK_OFFSET(0x195401C0)
#define IGPGHHELHHB_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1953FE40)
#define IGPGHHELHHB__CTOR_OFFSET UNITYSDK_OFFSET(0x1953FE20)

inline static constexpr unsigned int IGPGHHELHHB_TypeDefinitionIndex = 13172;

class IGPGHHELHHB : public ::System::Object
{
public:
	::System::String* DIFBFENBBNO; // 0x10
	::JGCFMNDBEHF HBDPAIKANDB; // 0x18
	::System::String* IMAFCDDJOME; // 0x28
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x30
	::System::Int32 CMEOFFAGEBD; // 0x38
	::System::Byte ACIOBDEBDNK; // 0x3C
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x3D
	::System::Byte CNIAANMNOCF; // 0x3E
	::System::Byte _padding0[0x1];
	::System::Int32 NMGJHKCJGID; // 0x40
	::System::Int32 NPHLAHOILHA; // 0x44

	::System::Void _ctor(::JGCFMNDBEHF LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::JGCFMNDBEHF, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + IGPGHHELHHB__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IGPGHHELHHB_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IGPGHHELHHB_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 JABNIKBHMAA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGPGHHELHHB_JABNIKBHMAA_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGPGHHELHHB_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 CPBNNNFPKEM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGPGHHELHHB_CPBNNNFPKEM_OFFSET))(this);
	}

	::System::Int32 KEDBBKFOLOM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGPGHHELHHB_KEDBBKFOLOM_OFFSET))(this);
	}

	::System::String* FLIPDCJJAOL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGPGHHELHHB_FLIPDCJJAOL_OFFSET))(this);
	}
};
