#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PMFMOMKLCLL.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define HEMOPKPCLKG_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19341BA0)
#define HEMOPKPCLKG_FCGPEBICFBB_OFFSET UNITYSDK_OFFSET(0x19341950)
#define HEMOPKPCLKG_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19341C90)
#define HEMOPKPCLKG_JENCFBLNJBL_OFFSET UNITYSDK_OFFSET(0x19341840)
#define HEMOPKPCLKG_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19341CA0)
#define HEMOPKPCLKG_OMBBDJDMGEC_OFFSET UNITYSDK_OFFSET(0x19341700)
#define HEMOPKPCLKG_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x19341A60)
#define HEMOPKPCLKG__CTOR_OFFSET UNITYSDK_OFFSET(0x193416F0)

inline static constexpr unsigned int HEMOPKPCLKG_TypeDefinitionIndex = 12344;

class HEMOPKPCLKG : public ::System::Object
{
public:
	::System::String* AGIOKAICIHE; // 0x10
	::System::String* LFMHNPNAPGH; // 0x18
	::PMFMOMKLCLL HBDPAIKANDB; // 0x20
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x30
	::System::Byte CNIAANMNOCF; // 0x38
	::System::Byte ACIOBDEBDNK; // 0x39
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x3A
	::System::Byte _padding0[0x1];
	::System::Int32 PCMOJLNOPPM; // 0x3C
	::System::Int32 JCBLGAEENBO; // 0x40

	::System::Void _ctor(::PMFMOMKLCLL LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::PMFMOMKLCLL, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + HEMOPKPCLKG__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 OMBBDJDMGEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HEMOPKPCLKG_OMBBDJDMGEC_OFFSET))(this);
	}

	::System::String* JENCFBLNJBL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEMOPKPCLKG_JENCFBLNJBL_OFFSET))(this);
	}

	::System::String* FCGPEBICFBB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEMOPKPCLKG_FCGPEBICFBB_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HEMOPKPCLKG_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEMOPKPCLKG_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HEMOPKPCLKG_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HEMOPKPCLKG_LJANCIBECFG_OFFSET))(this);
	}
};
