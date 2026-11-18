#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NCEMOEFKHCI.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define GOAKCEEFJPF_AMNCCAHONCI_OFFSET UNITYSDK_OFFSET(0x1B11B920)
#define GOAKCEEFJPF_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B11BA30)
#define GOAKCEEFJPF_EPJMKPAAJBM_OFFSET UNITYSDK_OFFSET(0x1B11B580)
#define GOAKCEEFJPF_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B11BC30)
#define GOAKCEEFJPF_GFFGAKNOIBM_OFFSET UNITYSDK_OFFSET(0x1B11B7D0)
#define GOAKCEEFJPF_LHIOELHGKFN_OFFSET UNITYSDK_OFFSET(0x1B11B440)
#define GOAKCEEFJPF_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B11B910)
#define GOAKCEEFJPF_NHOHAFNCKNF_OFFSET UNITYSDK_OFFSET(0x1B11BB20)
#define GOAKCEEFJPF_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1B11B690)
#define GOAKCEEFJPF__CTOR_OFFSET UNITYSDK_OFFSET(0x1B11B430)

inline static constexpr unsigned int GOAKCEEFJPF_TypeDefinitionIndex = 13222;

class GOAKCEEFJPF : public ::System::Object
{
public:
	::NCEMOEFKHCI HBDPAIKANDB; // 0x10
	::System::String* NENCJGBJKFC; // 0x20
	::System::String* FEIJEKPFDNG; // 0x28
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x30
	::System::String* FMFPNCIPAKN; // 0x38
	::System::Byte ACIOBDEBDNK; // 0x40
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x41
	::System::Byte CNIAANMNOCF; // 0x42
	::System::Byte _padding0[0x1];
	::System::Int32 PCMOJLNOPPM; // 0x44
	::System::Int32 DICCALDGAMN; // 0x48
	::System::Int32 KDPFJEJDIKI; // 0x4C

	::System::Void _ctor(::NCEMOEFKHCI LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::NCEMOEFKHCI, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + GOAKCEEFJPF__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 LHIOELHGKFN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOAKCEEFJPF_LHIOELHGKFN_OFFSET))(this);
	}

	::System::String* EPJMKPAAJBM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOAKCEEFJPF_EPJMKPAAJBM_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOAKCEEFJPF_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Int32 GFFGAKNOIBM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOAKCEEFJPF_GFFGAKNOIBM_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOAKCEEFJPF_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* AMNCCAHONCI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOAKCEEFJPF_AMNCCAHONCI_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOAKCEEFJPF_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* NHOHAFNCKNF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOAKCEEFJPF_NHOHAFNCKNF_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GOAKCEEFJPF_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
