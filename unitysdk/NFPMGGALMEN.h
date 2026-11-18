#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IILCKNIGDCJ.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define NFPMGGALMEN_AABLIBBAMHP_OFFSET UNITYSDK_OFFSET(0x19DC37A0)
#define NFPMGGALMEN_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19DC3560)
#define NFPMGGALMEN_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19DC3790)
#define NFPMGGALMEN_GAIBNDBHEOA_OFFSET UNITYSDK_OFFSET(0x19DC38E0)
#define NFPMGGALMEN_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19DC3A20)
#define NFPMGGALMEN_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x19DC3650)
#define NFPMGGALMEN__CTOR_OFFSET UNITYSDK_OFFSET(0x19DC3550)

inline static constexpr unsigned int NFPMGGALMEN_TypeDefinitionIndex = 11828;

class NFPMGGALMEN : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::IILCKNIGDCJ HBDPAIKANDB; // 0x18
	::System::Byte CNIAANMNOCF; // 0x28
	::System::Byte ACIOBDEBDNK; // 0x29
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x2A
	::System::Byte _padding0[0x1];
	::System::Int32 KDKJEENBEME; // 0x2C
	::System::Int32 LIOAMLAIMKC; // 0x30
	::System::Int32 PCMOJLNOPPM; // 0x34

	::System::Void _ctor(::IILCKNIGDCJ LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::IILCKNIGDCJ, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + NFPMGGALMEN__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFPMGGALMEN_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NFPMGGALMEN_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NFPMGGALMEN_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 AABLIBBAMHP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NFPMGGALMEN_AABLIBBAMHP_OFFSET))(this);
	}

	::System::Int32 GAIBNDBHEOA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NFPMGGALMEN_GAIBNDBHEOA_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NFPMGGALMEN_LJANCIBECFG_OFFSET))(this);
	}
};
