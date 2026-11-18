#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPJBFHLMEAE.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define FGBMMPKNFKH_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19F57F00)
#define FGBMMPKNFKH_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19F57B20)
#define FGBMMPKNFKH_JOAFIPOHNEL_OFFSET UNITYSDK_OFFSET(0x19F57C80)
#define FGBMMPKNFKH_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19F57C70)
#define FGBMMPKNFKH_OFCIJDGPFIG_OFFSET UNITYSDK_OFFSET(0x19F57DC0)
#define FGBMMPKNFKH_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x19F57B30)
#define FGBMMPKNFKH__CTOR_OFFSET UNITYSDK_OFFSET(0x19F57B10)

inline static constexpr unsigned int FGBMMPKNFKH_TypeDefinitionIndex = 14799;

class FGBMMPKNFKH : public ::System::Object
{
public:
	::CPJBFHLMEAE HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Byte ACIOBDEBDNK; // 0x28
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x29
	::System::Byte CNIAANMNOCF; // 0x2A
	::System::Byte _padding0[0x1];
	::System::Int32 FPFIGPEFDHO; // 0x2C
	::System::Int32 FNPNGDBDIFI; // 0x30
	::System::Int32 PCMOJLNOPPM; // 0x34

	::System::Void _ctor(::CPJBFHLMEAE LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::CPJBFHLMEAE, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + FGBMMPKNFKH__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FGBMMPKNFKH_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FGBMMPKNFKH_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FGBMMPKNFKH_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 JOAFIPOHNEL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FGBMMPKNFKH_JOAFIPOHNEL_OFFSET))(this);
	}

	::System::Int32 OFCIJDGPFIG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FGBMMPKNFKH_OFCIJDGPFIG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGBMMPKNFKH_COFGIJJOFLP_OFFSET))(this);
	}
};
