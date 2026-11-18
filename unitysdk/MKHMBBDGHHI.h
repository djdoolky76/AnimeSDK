#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PMAJCGPALCO.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define MKHMBBDGHHI_BEPBOCBNMHG_OFFSET UNITYSDK_OFFSET(0x1CCE0BA0)
#define MKHMBBDGHHI_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1CCE0AB0)
#define MKHMBBDGHHI_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1CCE0F60)
#define MKHMBBDGHHI_HMGLEBLBDCL_OFFSET UNITYSDK_OFFSET(0x1CCE0990)
#define MKHMBBDGHHI_JDOJEMKNAHE_OFFSET UNITYSDK_OFFSET(0x1CCE0E20)
#define MKHMBBDGHHI_KKHBDKDLIBF_OFFSET UNITYSDK_OFFSET(0x1CCE0F70)
#define MKHMBBDGHHI_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1CCE0AA0)
#define MKHMBBDGHHI_NABKEDOOCIA_OFFSET UNITYSDK_OFFSET(0x1CCE0CE0)
#define MKHMBBDGHHI__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCE0980)

inline static constexpr unsigned int MKHMBBDGHHI_TypeDefinitionIndex = 15182;

class MKHMBBDGHHI : public ::System::Object
{
public:
	::System::String* PCKJBBLHBCC; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x18
	::PMAJCGPALCO HBDPAIKANDB; // 0x20
	::System::Int32 JLMNNMLMFOI; // 0x30
	::System::Int32 ANHIPOCFABF; // 0x34
	::System::Byte ACIOBDEBDNK; // 0x38
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x39
	::System::Byte CNIAANMNOCF; // 0x3A
	::System::Byte _padding0[0x1];
	::System::Int32 PMBJCDNHDJH; // 0x3C
	::System::Int32 BPMMNELACLA; // 0x40

	::System::Void _ctor(::PMAJCGPALCO LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::PMAJCGPALCO, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + MKHMBBDGHHI__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* HMGLEBLBDCL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKHMBBDGHHI_HMGLEBLBDCL_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MKHMBBDGHHI_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKHMBBDGHHI_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 BEPBOCBNMHG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKHMBBDGHHI_BEPBOCBNMHG_OFFSET))(this);
	}

	::System::Int32 NABKEDOOCIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKHMBBDGHHI_NABKEDOOCIA_OFFSET))(this);
	}

	::System::Int32 JDOJEMKNAHE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKHMBBDGHHI_JDOJEMKNAHE_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MKHMBBDGHHI_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 KKHBDKDLIBF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKHMBBDGHHI_KKHBDKDLIBF_OFFSET))(this);
	}
};
