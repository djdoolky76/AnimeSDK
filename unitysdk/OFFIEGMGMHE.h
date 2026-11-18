#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JCLEIOBKLOA.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define OFFIEGMGMHE_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1AD88800)
#define OFFIEGMGMHE_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1AD88560)
#define OFFIEGMGMHE_FPCIJMBEGGD_OFFSET UNITYSDK_OFFSET(0x1AD888F0)
#define OFFIEGMGMHE_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1AD88570)
#define OFFIEGMGMHE_NMKANJPEPBH_OFFSET UNITYSDK_OFFSET(0x1AD886C0)
#define OFFIEGMGMHE_OFCIJDGPFIG_OFFSET UNITYSDK_OFFSET(0x1AD88580)
#define OFFIEGMGMHE_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1AD88A30)
#define OFFIEGMGMHE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD88550)

inline static constexpr unsigned int OFFIEGMGMHE_TypeDefinitionIndex = 12581;

class OFFIEGMGMHE : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::JCLEIOBKLOA HBDPAIKANDB; // 0x18
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x28
	::System::Byte CNIAANMNOCF; // 0x29
	::System::Byte ACIOBDEBDNK; // 0x2A
	::System::Byte _padding0[0x1];
	::System::Int32 CBJPNLODMDM; // 0x2C
	::System::Int32 MHBMKBEEHEM; // 0x30
	::System::Int32 PCMOJLNOPPM; // 0x34
	::System::Int32 FNPNGDBDIFI; // 0x38

	::System::Void _ctor(::JCLEIOBKLOA LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::JCLEIOBKLOA, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + OFFIEGMGMHE__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OFFIEGMGMHE_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OFFIEGMGMHE_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 OFCIJDGPFIG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFFIEGMGMHE_OFCIJDGPFIG_OFFSET))(this);
	}

	::System::Int32 NMKANJPEPBH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFFIEGMGMHE_NMKANJPEPBH_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFFIEGMGMHE_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 FPCIJMBEGGD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFFIEGMGMHE_FPCIJMBEGGD_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFFIEGMGMHE_PPIFNHNGCGO_OFFSET))(this);
	}
};
