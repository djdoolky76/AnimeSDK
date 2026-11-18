#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GJLMEDJDLJM.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define CLGJMNALGGK_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1878CE90)
#define CLGJMNALGGK_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1878CC00)
#define CLGJMNALGGK_JOFBFJNNMFG_OFFSET UNITYSDK_OFFSET(0x1878CF80)
#define CLGJMNALGGK_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1878D0C0)
#define CLGJMNALGGK_PIPBPLEIPFK_OFFSET UNITYSDK_OFFSET(0x1878CC10)
#define CLGJMNALGGK_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1878CD50)
#define CLGJMNALGGK__CTOR_OFFSET UNITYSDK_OFFSET(0x1878CBF0)

inline static constexpr unsigned int CLGJMNALGGK_TypeDefinitionIndex = 10991;

class CLGJMNALGGK : public ::System::Object
{
public:
	::GJLMEDJDLJM HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Int32 PCMOJLNOPPM; // 0x28
	::System::Byte CNIAANMNOCF; // 0x2C
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x2D
	::System::Byte ACIOBDEBDNK; // 0x2E
	::System::Byte _padding0[0x1];
	::System::Int32 NCIBGCDIAFC; // 0x30
	::System::Int32 OIKCPMJLMGI; // 0x34
	::System::Int32 LEOEBNELFOM; // 0x38

	::System::Void _ctor(::GJLMEDJDLJM LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::GJLMEDJDLJM, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + CLGJMNALGGK__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLGJMNALGGK_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 PIPBPLEIPFK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLGJMNALGGK_PIPBPLEIPFK_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLGJMNALGGK_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLGJMNALGGK_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 JOFBFJNNMFG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLGJMNALGGK_JOFBFJNNMFG_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLGJMNALGGK_LJANCIBECFG_OFFSET))(this);
	}
};
