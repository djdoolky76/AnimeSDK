#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CDMKAKCIMPA.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define LIANKNPKLMH_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1BA88700)
#define LIANKNPKLMH_EFDEFEGNKIJ_OFFSET UNITYSDK_OFFSET(0x1BA885F0)
#define LIANKNPKLMH_FAIBHNMDEKI_OFFSET UNITYSDK_OFFSET(0x1BA884A0)
#define LIANKNPKLMH_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1BA885E0)
#define LIANKNPKLMH_HNBFFKAOBFC_OFFSET UNITYSDK_OFFSET(0x1BA887F0)
#define LIANKNPKLMH_KBFKBFODOPM_OFFSET UNITYSDK_OFFSET(0x1BA88280)
#define LIANKNPKLMH_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1BA88930)
#define LIANKNPKLMH_NMJECNEODGH_OFFSET UNITYSDK_OFFSET(0x1BA88390)
#define LIANKNPKLMH__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA88270)

inline static constexpr unsigned int LIANKNPKLMH_TypeDefinitionIndex = 12833;

class LIANKNPKLMH : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::System::String* KPFKHGNFACO; // 0x18
	::CDMKAKCIMPA HBDPAIKANDB; // 0x20
	::System::String* HIECCCOJJFF; // 0x30
	::System::String* ONBBGALCIGG; // 0x38
	::System::Int32 DIGFGBJMDEE; // 0x40
	::System::Byte CNIAANMNOCF; // 0x44
	::System::Byte ACIOBDEBDNK; // 0x45
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x46
	::System::Byte _padding0[0x1];
	::System::Int32 BENOFMIKOPE; // 0x48

	::System::Void _ctor(::CDMKAKCIMPA LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::CDMKAKCIMPA, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + LIANKNPKLMH__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* KBFKBFODOPM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIANKNPKLMH_KBFKBFODOPM_OFFSET))(this);
	}

	::System::String* NMJECNEODGH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIANKNPKLMH_NMJECNEODGH_OFFSET))(this);
	}

	::System::Int32 FAIBHNMDEKI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LIANKNPKLMH_FAIBHNMDEKI_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LIANKNPKLMH_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* EFDEFEGNKIJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIANKNPKLMH_EFDEFEGNKIJ_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIANKNPKLMH_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 HNBFFKAOBFC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LIANKNPKLMH_HNBFFKAOBFC_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LIANKNPKLMH_LJANCIBECFG_OFFSET))(this);
	}
};
