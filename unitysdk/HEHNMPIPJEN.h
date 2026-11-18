#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AEGNCPHCMOO.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define HEHNMPIPJEN_ANNHHHEGPOA_OFFSET UNITYSDK_OFFSET(0x16657F80)
#define HEHNMPIPJEN_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x166580D0)
#define HEHNMPIPJEN_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x16657F70)
#define HEHNMPIPJEN_GEMBCHCEJDF_OFFSET UNITYSDK_OFFSET(0x166581C0)
#define HEHNMPIPJEN_KGBHJICIINB_OFFSET UNITYSDK_OFFSET(0x16658300)
#define HEHNMPIPJEN_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x166580C0)
#define HEHNMPIPJEN_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x16657E30)
#define HEHNMPIPJEN__CTOR_OFFSET UNITYSDK_OFFSET(0x16657E20)

inline static constexpr unsigned int HEHNMPIPJEN_TypeDefinitionIndex = 16110;

class HEHNMPIPJEN : public ::System::Object
{
public:
	::AEGNCPHCMOO HBDPAIKANDB; // 0x10
	::System::String* NMFEPJCMNIE; // 0x20
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::Int32 GNPCIHNHIIF; // 0x30
	::System::Int32 PCMOJLNOPPM; // 0x34
	::System::Byte ACIOBDEBDNK; // 0x38
	::System::Byte CNIAANMNOCF; // 0x39
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x3A
	::System::Byte _padding0[0x1];
	::System::Int32 HCAJIDPDDGH; // 0x3C

	::System::Void _ctor(::AEGNCPHCMOO LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::AEGNCPHCMOO, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + HEHNMPIPJEN__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HEHNMPIPJEN_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HEHNMPIPJEN_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 ANNHHHEGPOA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HEHNMPIPJEN_ANNHHHEGPOA_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HEHNMPIPJEN_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEHNMPIPJEN_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 GEMBCHCEJDF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HEHNMPIPJEN_GEMBCHCEJDF_OFFSET))(this);
	}

	::System::String* KGBHJICIINB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEHNMPIPJEN_KGBHJICIINB_OFFSET))(this);
	}
};
