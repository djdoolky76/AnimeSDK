#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKJKGJLKIIE.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define NGFPPKIHHIN_AOOCAKCCDHB_OFFSET UNITYSDK_OFFSET(0x19DC3BB0)
#define NGFPPKIHHIN_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19DC3F60)
#define NGFPPKIHHIN_DEGALIPKJGL_OFFSET UNITYSDK_OFFSET(0x19DC3E20)
#define NGFPPKIHHIN_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19DC3E10)
#define NGFPPKIHHIN_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19DC3A40)
#define NGFPPKIHHIN_MGMAAJNANAN_OFFSET UNITYSDK_OFFSET(0x19DC3D00)
#define NGFPPKIHHIN_NHOOMCHFGKM_OFFSET UNITYSDK_OFFSET(0x19DC4050)
#define NGFPPKIHHIN_OEHDLABPIAP_OFFSET UNITYSDK_OFFSET(0x19DC3A50)
#define NGFPPKIHHIN__CTOR_OFFSET UNITYSDK_OFFSET(0x19DC3A30)

inline static constexpr unsigned int NGFPPKIHHIN_TypeDefinitionIndex = 16539;

class NGFPPKIHHIN : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::System::String* DMENOHMJCDG; // 0x18
	::AKJKGJLKIIE HBDPAIKANDB; // 0x20
	::Foundation::AssetPath PFDMMHHPOMO; // 0x30
	::System::UInt64 CLLIOPCJOCC; // 0x40
	::System::Int32 ECIPGDMBFIA; // 0x48
	::System::Byte ACIOBDEBDNK; // 0x4C
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x4D
	::System::Byte CNIAANMNOCF; // 0x4E
	::System::Byte _padding0[0x1];
	::System::Int32 CJNMNLOFFNK; // 0x50

	::System::Void _ctor(::AKJKGJLKIIE LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::AKJKGJLKIIE, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + NGFPPKIHHIN__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFPPKIHHIN_LJANCIBECFG_OFFSET))(this);
	}

	::Foundation::AssetPath OEHDLABPIAP()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFPPKIHHIN_OEHDLABPIAP_OFFSET))(this);
	}

	::System::String* MGMAAJNANAN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFPPKIHHIN_MGMAAJNANAN_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NGFPPKIHHIN_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 DEGALIPKJGL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFPPKIHHIN_DEGALIPKJGL_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFPPKIHHIN_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 NHOOMCHFGKM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFPPKIHHIN_NHOOMCHFGKM_OFFSET))(this);
	}

	::System::UInt64 AOOCAKCCDHB()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFPPKIHHIN_AOOCAKCCDHB_OFFSET))(this);
	}
};
