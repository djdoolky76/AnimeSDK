#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LKMPKLMOFCI.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define KAODMGMNMJM_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19365470)
#define KAODMGMNMJM_DKOCPDPOIEA_OFFSET UNITYSDK_OFFSET(0x193656C0)
#define KAODMGMNMJM_EHGGNPMIJAL_OFFSET UNITYSDK_OFFSET(0x19365580)
#define KAODMGMNMJM_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19365570)
#define KAODMGMNMJM_JLEGHNGEBOG_OFFSET UNITYSDK_OFFSET(0x19365330)
#define KAODMGMNMJM_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19365560)
#define KAODMGMNMJM__CTOR_OFFSET UNITYSDK_OFFSET(0x19365320)

inline static constexpr unsigned int KAODMGMNMJM_TypeDefinitionIndex = 10245;

class KAODMGMNMJM : public ::System::Object
{
public:
	::LKMPKLMOFCI HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Int32 FKOPBLKIDMG; // 0x28
	::System::Int32 NCLEEKFKOKM; // 0x2C
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x30
	::System::Byte CNIAANMNOCF; // 0x31
	::System::Byte ACIOBDEBDNK; // 0x32
	::System::Byte _padding0[0x1];
	::System::Int32 FBMLCHDEDLB; // 0x34

	::System::Void _ctor(::LKMPKLMOFCI LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::LKMPKLMOFCI, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + KAODMGMNMJM__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 JLEGHNGEBOG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KAODMGMNMJM_JLEGHNGEBOG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAODMGMNMJM_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KAODMGMNMJM_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KAODMGMNMJM_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 EHGGNPMIJAL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KAODMGMNMJM_EHGGNPMIJAL_OFFSET))(this);
	}

	::System::Int32 DKOCPDPOIEA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KAODMGMNMJM_DKOCPDPOIEA_OFFSET))(this);
	}
};
