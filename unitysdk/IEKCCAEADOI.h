#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LBNEFIOBGAE.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define IEKCCAEADOI_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x152E24B0)
#define IEKCCAEADOI_DCFAIIAJOPK_OFFSET UNITYSDK_OFFSET(0x152E21E0)
#define IEKCCAEADOI_FCDOFDOAIMC_OFFSET UNITYSDK_OFFSET(0x152E2350)
#define IEKCCAEADOI_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x152E2340)
#define IEKCCAEADOI_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x152E25A0)
#define IEKCCAEADOI_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x152E25B0)
#define IEKCCAEADOI__CTOR_OFFSET UNITYSDK_OFFSET(0x152E21D0)

inline static constexpr unsigned int IEKCCAEADOI_TypeDefinitionIndex = 13774;

class IEKCCAEADOI : public ::System::Object
{
public:
	::LBNEFIOBGAE HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Byte CNIAANMNOCF; // 0x28
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x29
	::System::Byte ACIOBDEBDNK; // 0x2A
	::System::Byte _padding0[0x1];
	::System::Single KGEBCCCDBIH; // 0x2C
	::System::Single JKMNADNCPHO; // 0x30
	::System::Int32 PCMOJLNOPPM; // 0x34

	::System::Void _ctor(::LBNEFIOBGAE LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::LBNEFIOBGAE, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + IEKCCAEADOI__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Single DCFAIIAJOPK()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IEKCCAEADOI_DCFAIIAJOPK_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IEKCCAEADOI_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Single FCDOFDOAIMC()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IEKCCAEADOI_FCDOFDOAIMC_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEKCCAEADOI_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IEKCCAEADOI_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IEKCCAEADOI_PPIFNHNGCGO_OFFSET))(this);
	}
};
