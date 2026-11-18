#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EJDBOPAEDEO.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define LJBIHOCDGOI_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x18DFB690)
#define LJBIHOCDGOI_DMMNHBNKBEE_OFFSET UNITYSDK_OFFSET(0x18DFB8D0)
#define LJBIHOCDGOI_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x18DFBA10)
#define LJBIHOCDGOI_KHEADICPOPD_OFFSET UNITYSDK_OFFSET(0x18DFBA20)
#define LJBIHOCDGOI_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x18DFB780)
#define LJBIHOCDGOI_POFMFNPCKPF_OFFSET UNITYSDK_OFFSET(0x18DFBB60)
#define LJBIHOCDGOI_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x18DFB790)
#define LJBIHOCDGOI__CTOR_OFFSET UNITYSDK_OFFSET(0x18DFB680)

inline static constexpr unsigned int LJBIHOCDGOI_TypeDefinitionIndex = 15575;

class LJBIHOCDGOI : public ::System::Object
{
public:
	::EJDBOPAEDEO HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Int32 JMCDNAHGIGC; // 0x28
	::System::Int32 LIAHDMBJAKK; // 0x2C
	::System::Byte ACIOBDEBDNK; // 0x30
	::System::Byte CNIAANMNOCF; // 0x31
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x32
	::System::Byte _padding0[0x1];
	::System::Int32 NLBMILEKPFN; // 0x34
	::System::Int32 PCMOJLNOPPM; // 0x38

	::System::Void _ctor(::EJDBOPAEDEO LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::EJDBOPAEDEO, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + LJBIHOCDGOI__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJBIHOCDGOI_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LJBIHOCDGOI_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJBIHOCDGOI_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Int32 DMMNHBNKBEE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJBIHOCDGOI_DMMNHBNKBEE_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LJBIHOCDGOI_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 KHEADICPOPD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJBIHOCDGOI_KHEADICPOPD_OFFSET))(this);
	}

	::System::Int32 POFMFNPCKPF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJBIHOCDGOI_POFMFNPCKPF_OFFSET))(this);
	}
};
