#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CJDABOCHMHK.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define FPFDNFMEBAO_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B4CDD60)
#define FPFDNFMEBAO_DLJLJELEOHO_OFFSET UNITYSDK_OFFSET(0x1B4CDA20)
#define FPFDNFMEBAO_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B4CDC40)
#define FPFDNFMEBAO_KPFOGHCFEIG_OFFSET UNITYSDK_OFFSET(0x1B4CDC50)
#define FPFDNFMEBAO_LFEKKNKDLCI_OFFSET UNITYSDK_OFFSET(0x1B4CDB30)
#define FPFDNFMEBAO_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B4CDA10)
#define FPFDNFMEBAO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4CDA00)

inline static constexpr unsigned int FPFDNFMEBAO_TypeDefinitionIndex = 10215;

class FPFDNFMEBAO : public ::System::Object
{
public:
	::CJDABOCHMHK HBDPAIKANDB; // 0x10
	::System::String* ICBPIFOLGJI; // 0x20
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::String* IIOGIAGODPM; // 0x30
	::System::String* DEDILDHHPLE; // 0x38
	::System::Int32 PCMOJLNOPPM; // 0x40
	::System::Byte ACIOBDEBDNK; // 0x44
	::System::Byte CNIAANMNOCF; // 0x45
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x46

	::System::Void _ctor(::CJDABOCHMHK LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::CJDABOCHMHK, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + FPFDNFMEBAO__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FPFDNFMEBAO_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* DLJLJELEOHO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPFDNFMEBAO_DLJLJELEOHO_OFFSET))(this);
	}

	::System::String* LFEKKNKDLCI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPFDNFMEBAO_LFEKKNKDLCI_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FPFDNFMEBAO_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* KPFOGHCFEIG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPFDNFMEBAO_KPFOGHCFEIG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPFDNFMEBAO_COFGIJJOFLP_OFFSET))(this);
	}
};
