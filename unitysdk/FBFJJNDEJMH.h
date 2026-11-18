#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OLDJPBIOPCO.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define FBFJJNDEJMH_ANNHHHEGPOA_OFFSET UNITYSDK_OFFSET(0x1B1021B0)
#define FBFJJNDEJMH_BGKKEMMIBDD_OFFSET UNITYSDK_OFFSET(0x1B102520)
#define FBFJJNDEJMH_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B1022F0)
#define FBFJJNDEJMH_FJOLPGBLBBH_OFFSET UNITYSDK_OFFSET(0x1B1023E0)
#define FBFJJNDEJMH_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B101F20)
#define FBFJJNDEJMH_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B101F10)
#define FBFJJNDEJMH_LJNBIAFBMIL_OFFSET UNITYSDK_OFFSET(0x1B102070)
#define FBFJJNDEJMH_OBPDIKGGIMN_OFFSET UNITYSDK_OFFSET(0x1B101DD0)
#define FBFJJNDEJMH_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1B101F30)
#define FBFJJNDEJMH__CTOR_OFFSET UNITYSDK_OFFSET(0x1B101DC0)

inline static constexpr unsigned int FBFJJNDEJMH_TypeDefinitionIndex = 12659;

class FBFJJNDEJMH : public ::System::Object
{
public:
	::OLDJPBIOPCO HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Int32 COLCGPGFHMN; // 0x28
	::System::Int32 NGCEGHDAPFJ; // 0x2C
	::System::Int32 PEHLJEEIACG; // 0x30
	::System::Int32 HCAJIDPDDGH; // 0x34
	::System::Int32 EDDOJCCGCFN; // 0x38
	::System::Int32 PCMOJLNOPPM; // 0x3C
	::System::Byte CNIAANMNOCF; // 0x40
	::System::Byte ACIOBDEBDNK; // 0x41
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x42

	::System::Void _ctor(::OLDJPBIOPCO LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::OLDJPBIOPCO, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + FBFJJNDEJMH__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 OBPDIKGGIMN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBFJJNDEJMH_OBPDIKGGIMN_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FBFJJNDEJMH_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FBFJJNDEJMH_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBFJJNDEJMH_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Int32 LJNBIAFBMIL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBFJJNDEJMH_LJNBIAFBMIL_OFFSET))(this);
	}

	::System::Int32 ANNHHHEGPOA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBFJJNDEJMH_ANNHHHEGPOA_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBFJJNDEJMH_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 FJOLPGBLBBH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBFJJNDEJMH_FJOLPGBLBBH_OFFSET))(this);
	}

	::System::Int32 BGKKEMMIBDD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBFJJNDEJMH_BGKKEMMIBDD_OFFSET))(this);
	}
};
