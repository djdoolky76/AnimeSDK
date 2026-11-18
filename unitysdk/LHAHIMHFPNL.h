#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OFOPCFGLFPN.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define LHAHIMHFPNL_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1AAFB1D0)
#define LHAHIMHFPNL_DMMNHBNKBEE_OFFSET UNITYSDK_OFFSET(0x1AAFB2D0)
#define LHAHIMHFPNL_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1AAFB550)
#define LHAHIMHFPNL_LGMMAGPFDMC_OFFSET UNITYSDK_OFFSET(0x1AAFB410)
#define LHAHIMHFPNL_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1AAFB2C0)
#define LHAHIMHFPNL__CTOR_OFFSET UNITYSDK_OFFSET(0x1AAFB1C0)

inline static constexpr unsigned int LHAHIMHFPNL_TypeDefinitionIndex = 14046;

class LHAHIMHFPNL : public ::System::Object
{
public:
	::OFOPCFGLFPN HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x28
	::System::Byte CNIAANMNOCF; // 0x29
	::System::Byte ACIOBDEBDNK; // 0x2A
	::System::Byte _padding0[0x1];
	::System::Int32 JMCDNAHGIGC; // 0x2C
	::System::Int32 KNECPLDGBNP; // 0x30

	::System::Void _ctor(::OFOPCFGLFPN LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::OFOPCFGLFPN, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + LHAHIMHFPNL__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHAHIMHFPNL_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LHAHIMHFPNL_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 DMMNHBNKBEE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LHAHIMHFPNL_DMMNHBNKBEE_OFFSET))(this);
	}

	::System::Int32 LGMMAGPFDMC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LHAHIMHFPNL_LGMMAGPFDMC_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LHAHIMHFPNL_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
