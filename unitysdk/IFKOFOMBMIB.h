#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FENMNFKBEME.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define IFKOFOMBMIB_AHFDLHJACOF_OFFSET UNITYSDK_OFFSET(0x1B4EC700)
#define IFKOFOMBMIB_BNKPNGANFDN_OFFSET UNITYSDK_OFFSET(0x1B4EC470)
#define IFKOFOMBMIB_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B4ECAD0)
#define IFKOFOMBMIB_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B4EC980)
#define IFKOFOMBMIB_LEGAIPAMJBC_OFFSET UNITYSDK_OFFSET(0x1B4EC5C0)
#define IFKOFOMBMIB_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B4EC5B0)
#define IFKOFOMBMIB_MDFIHALAIJB_OFFSET UNITYSDK_OFFSET(0x1B4EC990)
#define IFKOFOMBMIB_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1B4EC840)
#define IFKOFOMBMIB__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4EC460)

inline static constexpr unsigned int IFKOFOMBMIB_TypeDefinitionIndex = 15041;

class IFKOFOMBMIB : public ::System::Object
{
public:
	::FENMNFKBEME HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Int32 AMGAFDAJPKL; // 0x28
	::System::Byte ACIOBDEBDNK; // 0x2C
	::System::Byte CNIAANMNOCF; // 0x2D
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x2E
	::System::Byte _padding0[0x1];
	::System::Int32 PCMOJLNOPPM; // 0x30
	::System::Int32 FIKFDBLDKAJ; // 0x34
	::System::Int32 HCKPKNEIBEG; // 0x38
	::System::Int32 AICFILHLIPF; // 0x3C

	::System::Void _ctor(::FENMNFKBEME LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::FENMNFKBEME, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + IFKOFOMBMIB__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 BNKPNGANFDN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFKOFOMBMIB_BNKPNGANFDN_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IFKOFOMBMIB_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 LEGAIPAMJBC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFKOFOMBMIB_LEGAIPAMJBC_OFFSET))(this);
	}

	::System::Int32 AHFDLHJACOF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFKOFOMBMIB_AHFDLHJACOF_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFKOFOMBMIB_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IFKOFOMBMIB_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 MDFIHALAIJB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFKOFOMBMIB_MDFIHALAIJB_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFKOFOMBMIB_COFGIJJOFLP_OFFSET))(this);
	}
};
