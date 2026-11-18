#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LALLHKLJPKE.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOMNNADEDLA_BBMDKGLKCAP_OFFSET UNITYSDK_OFFSET(0x1734C9E0)
#define MOMNNADEDLA_CNPFMDOLIBM_OFFSET UNITYSDK_OFFSET(0x1734C8D0)
#define MOMNNADEDLA_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1734CB40)
#define MOMNNADEDLA_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1734CB20)
#define MOMNNADEDLA_LHGFJAINIGI_OFFSET UNITYSDK_OFFSET(0x1734C650)
#define MOMNNADEDLA_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1734CB30)
#define MOMNNADEDLA_PHJDOOBAKKO_OFFSET UNITYSDK_OFFSET(0x1734C790)
#define MOMNNADEDLA_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1734C510)
#define MOMNNADEDLA__CTOR_OFFSET UNITYSDK_OFFSET(0x1734C500)

inline static constexpr unsigned int MOMNNADEDLA_TypeDefinitionIndex = 11879;

class MOMNNADEDLA : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* DEGGNKGMNBI; // 0x18
	::System::String* FJFPEBOGNNE; // 0x20
	::LALLHKLJPKE HBDPAIKANDB; // 0x28
	::System::Int32 DOEHAFDMHFI; // 0x38
	::System::Byte ACIOBDEBDNK; // 0x3C
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x3D
	::System::Byte CNIAANMNOCF; // 0x3E
	::System::Byte _padding0[0x1];
	::System::Int32 DGKEFNKNNIO; // 0x40
	::System::Int32 PCMOJLNOPPM; // 0x44
	::System::Int32 DGPADCIHIMM; // 0x48
	::System::Int32 EMKJBFNNHLP; // 0x4C

	::System::Void _ctor(::LALLHKLJPKE LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::LALLHKLJPKE, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + MOMNNADEDLA__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOMNNADEDLA_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Int32 LHGFJAINIGI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOMNNADEDLA_LHGFJAINIGI_OFFSET))(this);
	}

	::System::Int32 PHJDOOBAKKO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOMNNADEDLA_PHJDOOBAKKO_OFFSET))(this);
	}

	::System::String* CNPFMDOLIBM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOMNNADEDLA_CNPFMDOLIBM_OFFSET))(this);
	}

	::System::Int32 BBMDKGLKCAP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOMNNADEDLA_BBMDKGLKCAP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOMNNADEDLA_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOMNNADEDLA_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOMNNADEDLA_COFGIJJOFLP_OFFSET))(this);
	}
};
