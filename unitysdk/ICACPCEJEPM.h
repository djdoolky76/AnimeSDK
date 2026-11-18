#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JGONMKGECKB.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define ICACPCEJEPM_BHMMKDGCLGB_OFFSET UNITYSDK_OFFSET(0x18BB5C10)
#define ICACPCEJEPM_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x18BB5B10)
#define ICACPCEJEPM_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x18BB5C00)
#define ICACPCEJEPM_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x18BB5D50)
#define ICACPCEJEPM_MCNDAAJPINP_OFFSET UNITYSDK_OFFSET(0x18BB58C0)
#define ICACPCEJEPM_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x18BB59D0)
#define ICACPCEJEPM__CTOR_OFFSET UNITYSDK_OFFSET(0x18BB58B0)

inline static constexpr unsigned int ICACPCEJEPM_TypeDefinitionIndex = 9854;

class ICACPCEJEPM : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::System::String* HELOGCEIPBM; // 0x18
	::JGONMKGECKB HBDPAIKANDB; // 0x20
	::System::Int32 CDPMOEENODL; // 0x30
	::System::Byte ACIOBDEBDNK; // 0x34
	::System::Byte CNIAANMNOCF; // 0x35
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x36
	::System::Byte _padding0[0x1];
	::System::Int32 PCMOJLNOPPM; // 0x38

	::System::Void _ctor(::JGONMKGECKB LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::JGONMKGECKB, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + ICACPCEJEPM__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* MCNDAAJPINP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICACPCEJEPM_MCNDAAJPINP_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICACPCEJEPM_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICACPCEJEPM_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ICACPCEJEPM_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 BHMMKDGCLGB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICACPCEJEPM_BHMMKDGCLGB_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICACPCEJEPM_LJANCIBECFG_OFFSET))(this);
	}
};
