#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CDIGPMFILMK.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define MCAKKEACIJM_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1BA90130)
#define MCAKKEACIJM_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1BA90120)
#define MCAKKEACIJM_HKELPCLHLEC_OFFSET UNITYSDK_OFFSET(0x1BA90360)
#define MCAKKEACIJM_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1BA90110)
#define MCAKKEACIJM_PNJKKGHLKAC_OFFSET UNITYSDK_OFFSET(0x1BA90000)
#define MCAKKEACIJM_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1BA90220)
#define MCAKKEACIJM__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA8FFF0)

inline static constexpr unsigned int MCAKKEACIJM_TypeDefinitionIndex = 13747;

class MCAKKEACIJM : public ::System::Object
{
public:
	::CDIGPMFILMK HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::String* BOICIFDBFAI; // 0x28
	::System::Int32 POKJNGILNLB; // 0x30
	::System::Byte CNIAANMNOCF; // 0x34
	::System::Byte ACIOBDEBDNK; // 0x35
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x36
	::System::Byte _padding0[0x1];
	::System::Int32 PCMOJLNOPPM; // 0x38

	::System::Void _ctor(::CDIGPMFILMK LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::CDIGPMFILMK, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + MCAKKEACIJM__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* PNJKKGHLKAC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCAKKEACIJM_PNJKKGHLKAC_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MCAKKEACIJM_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MCAKKEACIJM_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCAKKEACIJM_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MCAKKEACIJM_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Int32 HKELPCLHLEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MCAKKEACIJM_HKELPCLHLEC_OFFSET))(this);
	}
};
