#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AOHADDBNNLL.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define ELIJMFGOKGJ_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B857100)
#define ELIJMFGOKGJ_DKNEFMDCANB_OFFSET UNITYSDK_OFFSET(0x1B856C00)
#define ELIJMFGOKGJ_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B8571F0)
#define ELIJMFGOKGJ_IABGBPBLFBK_OFFSET UNITYSDK_OFFSET(0x1B856D40)
#define ELIJMFGOKGJ_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B857340)
#define ELIJMFGOKGJ_LOMMMCAOIFC_OFFSET UNITYSDK_OFFSET(0x1B856FC0)
#define ELIJMFGOKGJ_MBBJANLKBLC_OFFSET UNITYSDK_OFFSET(0x1B857200)
#define ELIJMFGOKGJ_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1B856E80)
#define ELIJMFGOKGJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1B856BF0)

inline static constexpr unsigned int ELIJMFGOKGJ_TypeDefinitionIndex = 15790;

class ELIJMFGOKGJ : public ::System::Object
{
public:
	::AOHADDBNNLL HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Int32 LBKNEPHKPAA; // 0x28
	::System::Int32 GAAEEJAGKMG; // 0x2C
	::System::Int32 MIPIEJNMKOD; // 0x30
	::System::Int32 MCMOOJFAGEP; // 0x34
	::System::Int32 PCMOJLNOPPM; // 0x38
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x3C
	::System::Byte ACIOBDEBDNK; // 0x3D
	::System::Byte CNIAANMNOCF; // 0x3E

	::System::Void _ctor(::AOHADDBNNLL LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::AOHADDBNNLL, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + ELIJMFGOKGJ__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 DKNEFMDCANB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIJMFGOKGJ_DKNEFMDCANB_OFFSET))(this);
	}

	::System::Int32 IABGBPBLFBK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIJMFGOKGJ_IABGBPBLFBK_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIJMFGOKGJ_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Int32 LOMMMCAOIFC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIJMFGOKGJ_LOMMMCAOIFC_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIJMFGOKGJ_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ELIJMFGOKGJ_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 MBBJANLKBLC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIJMFGOKGJ_MBBJANLKBLC_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIJMFGOKGJ_LJANCIBECFG_OFFSET))(this);
	}
};
