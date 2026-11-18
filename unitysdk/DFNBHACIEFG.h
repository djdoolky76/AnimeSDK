#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PLEALOJJOAP.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define DFNBHACIEFG_BALCHJECMJI_OFFSET UNITYSDK_OFFSET(0x17A97D40)
#define DFNBHACIEFG_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x17A97890)
#define DFNBHACIEFG_DBDCNFIMEKA_OFFSET UNITYSDK_OFFSET(0x17A97AC0)
#define DFNBHACIEFG_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x17A97E80)
#define DFNBHACIEFG_IIHBAMOMOBC_OFFSET UNITYSDK_OFFSET(0x17A97780)
#define DFNBHACIEFG_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x17A97E90)
#define DFNBHACIEFG_LJDLCEKMAAN_OFFSET UNITYSDK_OFFSET(0x17A97980)
#define DFNBHACIEFG_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x17A97C00)
#define DFNBHACIEFG__CTOR_OFFSET UNITYSDK_OFFSET(0x17A97770)

inline static constexpr unsigned int DFNBHACIEFG_TypeDefinitionIndex = 13671;

class DFNBHACIEFG : public ::System::Object
{
public:
	::System::String* CCJPFPMHHFN; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x18
	::PLEALOJJOAP HBDPAIKANDB; // 0x20
	::System::String* FFAHKJGOIMM; // 0x30
	::System::Int32 FAGEKLGGBOL; // 0x38
	::System::Int32 FIEFFNIOMHA; // 0x3C
	::System::Int32 IFNBCJMHDKG; // 0x40
	::System::Byte GCHCDJCFCEG; // 0x44
	::System::Byte ACIOBDEBDNK; // 0x45
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x46
	::System::Byte CNIAANMNOCF; // 0x47
	::System::Int32 PCMOJLNOPPM; // 0x48
	::System::Int32 BHEKONHJFLP; // 0x4C
	::System::Int32 KEIGMGHCPFL; // 0x50
	::System::Int32 JKDHDFPDAJH; // 0x54

	::System::Void _ctor(::PLEALOJJOAP LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::PLEALOJJOAP, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + DFNBHACIEFG__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* IIHBAMOMOBC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFNBHACIEFG_IIHBAMOMOBC_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFNBHACIEFG_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 LJDLCEKMAAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFNBHACIEFG_LJDLCEKMAAN_OFFSET))(this);
	}

	::System::Int32 DBDCNFIMEKA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFNBHACIEFG_DBDCNFIMEKA_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFNBHACIEFG_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Int32 BALCHJECMJI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFNBHACIEFG_BALCHJECMJI_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DFNBHACIEFG_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DFNBHACIEFG_LJANCIBECFG_OFFSET))(this);
	}
};
