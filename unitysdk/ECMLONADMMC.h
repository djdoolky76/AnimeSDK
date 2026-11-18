#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LOBFIBAGDMN.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define ECMLONADMMC_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19519AB0)
#define ECMLONADMMC_DFJGIBEPCIE_OFFSET UNITYSDK_OFFSET(0x1951A0B0)
#define ECMLONADMMC_EHJOPAKIHKF_OFFSET UNITYSDK_OFFSET(0x19519F70)
#define ECMLONADMMC_EHOOGLNMMCB_OFFSET UNITYSDK_OFFSET(0x19519E30)
#define ECMLONADMMC_FGALIADFGBI_OFFSET UNITYSDK_OFFSET(0x19519BA0)
#define ECMLONADMMC_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19519CE0)
#define ECMLONADMMC_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19519AA0)
#define ECMLONADMMC_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x19519CF0)
#define ECMLONADMMC__CTOR_OFFSET UNITYSDK_OFFSET(0x19519A90)

inline static constexpr unsigned int ECMLONADMMC_TypeDefinitionIndex = 12078;

class ECMLONADMMC : public ::System::Object
{
public:
	::System::String* BCIBELGOFIE; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x18
	::LOBFIBAGDMN HBDPAIKANDB; // 0x20
	::System::Int32 LPCBCNHPNIP; // 0x30
	::System::Int32 FNHPHLNLOCF; // 0x34
	::System::Byte ACIOBDEBDNK; // 0x38
	::System::Byte CNIAANMNOCF; // 0x39
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x3A
	::System::Byte _padding0[0x1];
	::System::Int32 PCMOJLNOPPM; // 0x3C
	::System::Int32 DLNLLNDKCIM; // 0x40

	::System::Void _ctor(::LOBFIBAGDMN LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::LOBFIBAGDMN, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + ECMLONADMMC__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ECMLONADMMC_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECMLONADMMC_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 FGALIADFGBI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ECMLONADMMC_FGALIADFGBI_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ECMLONADMMC_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ECMLONADMMC_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Int32 EHOOGLNMMCB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ECMLONADMMC_EHOOGLNMMCB_OFFSET))(this);
	}

	::System::Int32 EHJOPAKIHKF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ECMLONADMMC_EHJOPAKIHKF_OFFSET))(this);
	}

	::System::String* DFJGIBEPCIE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECMLONADMMC_DFJGIBEPCIE_OFFSET))(this);
	}
};
