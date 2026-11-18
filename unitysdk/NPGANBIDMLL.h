#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DBIIBIKKLGC.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define NPGANBIDMLL_APCKPKCNFJE_OFFSET UNITYSDK_OFFSET(0x173588A0)
#define NPGANBIDMLL_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x173582D0)
#define NPGANBIDMLL_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x173584E0)
#define NPGANBIDMLL_INGHNFJLNPL_OFFSET UNITYSDK_OFFSET(0x17358630)
#define NPGANBIDMLL_JMOPNJCIOEC_OFFSET UNITYSDK_OFFSET(0x17358740)
#define NPGANBIDMLL_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x173583C0)
#define NPGANBIDMLL_MDCABPEFAGO_OFFSET UNITYSDK_OFFSET(0x173583D0)
#define NPGANBIDMLL_NDBGFKGOCOL_OFFSET UNITYSDK_OFFSET(0x173584F0)
#define NPGANBIDMLL__CTOR_OFFSET UNITYSDK_OFFSET(0x173582C0)

inline static constexpr unsigned int NPGANBIDMLL_TypeDefinitionIndex = 15080;

class NPGANBIDMLL : public ::System::Object
{
public:
	::System::String* HPFDMAAEHBD; // 0x10
	::System::String* ICFGGCEMBDN; // 0x18
	::DBIIBIKKLGC HBDPAIKANDB; // 0x20
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x30
	::System::Int32 FNODAFLHPMB; // 0x38
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x3C
	::System::Byte CNIAANMNOCF; // 0x3D
	::System::Boolean HDIOKALLPNO; // 0x3E
	::System::Byte ACIOBDEBDNK; // 0x3F
	::System::Int32 BPMHKHIBGEJ; // 0x40

	::System::Void _ctor(::DBIIBIKKLGC LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::DBIIBIKKLGC, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + NPGANBIDMLL__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPGANBIDMLL_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPGANBIDMLL_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* MDCABPEFAGO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPGANBIDMLL_MDCABPEFAGO_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPGANBIDMLL_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 NDBGFKGOCOL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPGANBIDMLL_NDBGFKGOCOL_OFFSET))(this);
	}

	::System::String* INGHNFJLNPL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPGANBIDMLL_INGHNFJLNPL_OFFSET))(this);
	}

	::System::Boolean JMOPNJCIOEC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPGANBIDMLL_JMOPNJCIOEC_OFFSET))(this);
	}

	::System::Int32 APCKPKCNFJE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPGANBIDMLL_APCKPKCNFJE_OFFSET))(this);
	}
};
