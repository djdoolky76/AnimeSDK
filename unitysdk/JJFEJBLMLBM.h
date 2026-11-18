#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LPNFBNKKNJI.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define JJFEJBLMLBM_ABMCEMGJAEB_OFFSET UNITYSDK_OFFSET(0x1B899E20)
#define JJFEJBLMLBM_BOFLONEPMII_OFFSET UNITYSDK_OFFSET(0x1B899F40)
#define JJFEJBLMLBM_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B899D30)
#define JJFEJBLMLBM_DMMNHBNKBEE_OFFSET UNITYSDK_OFFSET(0x1B89A080)
#define JJFEJBLMLBM_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B899F30)
#define JJFEJBLMLBM_HDDENLNIPMA_OFFSET UNITYSDK_OFFSET(0x1B89A1C0)
#define JJFEJBLMLBM_HNOMNPJOKCH_OFFSET UNITYSDK_OFFSET(0x1B899BF0)
#define JJFEJBLMLBM_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B899BE0)
#define JJFEJBLMLBM__CTOR_OFFSET UNITYSDK_OFFSET(0x1B899BD0)

inline static constexpr unsigned int JJFEJBLMLBM_TypeDefinitionIndex = 16087;

class JJFEJBLMLBM : public ::System::Object
{
public:
	::System::String* PKCJEBIJFGO; // 0x10
	::LPNFBNKKNJI HBDPAIKANDB; // 0x18
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::Int32 JMCDNAHGIGC; // 0x30
	::System::Int32 AOECGEGHHAG; // 0x34
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x38
	::System::Byte CNIAANMNOCF; // 0x39
	::System::Byte ACIOBDEBDNK; // 0x3A
	::System::Byte _padding0[0x1];
	::System::Int32 AEPNMCGBJKJ; // 0x3C
	::System::Int32 LGKAPNIFJIM; // 0x40

	::System::Void _ctor(::LPNFBNKKNJI LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::LPNFBNKKNJI, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + JJFEJBLMLBM__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JJFEJBLMLBM_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 HNOMNPJOKCH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJFEJBLMLBM_HNOMNPJOKCH_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJFEJBLMLBM_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* ABMCEMGJAEB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJFEJBLMLBM_ABMCEMGJAEB_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JJFEJBLMLBM_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 BOFLONEPMII()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJFEJBLMLBM_BOFLONEPMII_OFFSET))(this);
	}

	::System::Int32 DMMNHBNKBEE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJFEJBLMLBM_DMMNHBNKBEE_OFFSET))(this);
	}

	::System::Int32 HDDENLNIPMA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJFEJBLMLBM_HDDENLNIPMA_OFFSET))(this);
	}
};
