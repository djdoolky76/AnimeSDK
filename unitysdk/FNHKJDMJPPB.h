#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AHKDJNJBOPM.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define FNHKJDMJPPB_CBKGHIMEBCM_OFFSET UNITYSDK_OFFSET(0x1B864210)
#define FNHKJDMJPPB_CGDGPOAEALH_OFFSET UNITYSDK_OFFSET(0x1B864B20)
#define FNHKJDMJPPB_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B864350)
#define FNHKJDMJPPB_DDKICCEGMDD_OFFSET UNITYSDK_OFFSET(0x1B864660)
#define FNHKJDMJPPB_DMMNHBNKBEE_OFFSET UNITYSDK_OFFSET(0x1B8648A0)
#define FNHKJDMJPPB_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B864770)
#define FNHKJDMJPPB_HAIEPNFCOMN_OFFSET UNITYSDK_OFFSET(0x1B864440)
#define FNHKJDMJPPB_HKDJAOMHLLH_OFFSET UNITYSDK_OFFSET(0x1B864790)
#define FNHKJDMJPPB_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B864780)
#define FNHKJDMJPPB_LNOBBAIGKJL_OFFSET UNITYSDK_OFFSET(0x1B8649E0)
#define FNHKJDMJPPB_MIAHINJIPDA_OFFSET UNITYSDK_OFFSET(0x1B864550)
#define FNHKJDMJPPB__CTOR_OFFSET UNITYSDK_OFFSET(0x1B864200)

inline static constexpr unsigned int FNHKJDMJPPB_TypeDefinitionIndex = 11889;

class FNHKJDMJPPB : public ::System::Object
{
public:
	::System::String* DPDJJHKMDDF; // 0x10
	::AHKDJNJBOPM HBDPAIKANDB; // 0x18
	::System::String* KJHADDNECPG; // 0x28
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x30
	::System::String* BPEHENAEHOP; // 0x38
	::System::String* NNINOLGOHFG; // 0x40
	::System::String* BBDBEEOPEMC; // 0x48
	::System::Int32 GBDGOMGIOKK; // 0x50
	::System::Byte ACIOBDEBDNK; // 0x54
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x55
	::System::Byte CNIAANMNOCF; // 0x56
	::System::Byte _padding0[0x1];
	::System::Int32 JABJBJHKDMH; // 0x58
	::System::Int32 JMCDNAHGIGC; // 0x5C

	::System::Void _ctor(::AHKDJNJBOPM LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::AHKDJNJBOPM, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + FNHKJDMJPPB__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 CBKGHIMEBCM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FNHKJDMJPPB_CBKGHIMEBCM_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNHKJDMJPPB_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* HAIEPNFCOMN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNHKJDMJPPB_HAIEPNFCOMN_OFFSET))(this);
	}

	::System::String* MIAHINJIPDA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNHKJDMJPPB_MIAHINJIPDA_OFFSET))(this);
	}

	::System::String* DDKICCEGMDD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNHKJDMJPPB_DDKICCEGMDD_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FNHKJDMJPPB_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FNHKJDMJPPB_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* HKDJAOMHLLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNHKJDMJPPB_HKDJAOMHLLH_OFFSET))(this);
	}

	::System::Int32 DMMNHBNKBEE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FNHKJDMJPPB_DMMNHBNKBEE_OFFSET))(this);
	}

	::System::Int32 LNOBBAIGKJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FNHKJDMJPPB_LNOBBAIGKJL_OFFSET))(this);
	}

	::System::String* CGDGPOAEALH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNHKJDMJPPB_CGDGPOAEALH_OFFSET))(this);
	}
};
