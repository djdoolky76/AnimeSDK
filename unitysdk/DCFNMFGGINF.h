#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CBMOFIIEGJN.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define DCFNMFGGINF_AKBPPJACJEC_OFFSET UNITYSDK_OFFSET(0x1A188600)
#define DCFNMFGGINF_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1A188500)
#define DCFNMFGGINF_FNCJDNNLOCK_OFFSET UNITYSDK_OFFSET(0x1A1883B0)
#define DCFNMFGGINF_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1A1885F0)
#define DCFNMFGGINF_HFNPJGFLJCB_OFFSET UNITYSDK_OFFSET(0x1A188740)
#define DCFNMFGGINF_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1A1884F0)
#define DCFNMFGGINF_PNGJLGPJBJL_OFFSET UNITYSDK_OFFSET(0x1A188270)
#define DCFNMFGGINF__CTOR_OFFSET UNITYSDK_OFFSET(0x1A188260)

inline static constexpr unsigned int DCFNMFGGINF_TypeDefinitionIndex = 15090;

class DCFNMFGGINF : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::CBMOFIIEGJN HBDPAIKANDB; // 0x18
	::System::Int32 PDAIEFJJCBA; // 0x28
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x2C
	::System::Byte CNIAANMNOCF; // 0x2D
	::System::Byte ACIOBDEBDNK; // 0x2E
	::System::Byte _padding0[0x1];
	::System::Int32 PCMOJLNOPPM; // 0x30
	::System::Int32 JDPHIDNMEEJ; // 0x34
	::System::Int32 CJHHHDMJAGD; // 0x38
	::System::Int32 GLLDDIHDCDC; // 0x3C

	::System::Void _ctor(::CBMOFIIEGJN LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::CBMOFIIEGJN, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + DCFNMFGGINF__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 PNGJLGPJBJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DCFNMFGGINF_PNGJLGPJBJL_OFFSET))(this);
	}

	::System::Int32 FNCJDNNLOCK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DCFNMFGGINF_FNCJDNNLOCK_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DCFNMFGGINF_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCFNMFGGINF_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DCFNMFGGINF_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 AKBPPJACJEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DCFNMFGGINF_AKBPPJACJEC_OFFSET))(this);
	}

	::System::Int32 HFNPJGFLJCB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DCFNMFGGINF_HFNPJGFLJCB_OFFSET))(this);
	}
};
