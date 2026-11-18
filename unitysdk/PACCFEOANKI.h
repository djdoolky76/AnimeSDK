#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/APIPJAKCFAC.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define PACCFEOANKI_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1C0AA540)
#define PACCFEOANKI_EJEDPHHENNN_OFFSET UNITYSDK_OFFSET(0x1C0AA290)
#define PACCFEOANKI_FGCALJJABPF_OFFSET UNITYSDK_OFFSET(0x1C0AA150)
#define PACCFEOANKI_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1C0AA140)
#define PACCFEOANKI_IFMINFOMDKG_OFFSET UNITYSDK_OFFSET(0x1C0AA3F0)
#define PACCFEOANKI_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1C0AA530)
#define PACCFEOANKI__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0AA130)

inline static constexpr unsigned int PACCFEOANKI_TypeDefinitionIndex = 10866;

class PACCFEOANKI : public ::System::Object
{
public:
	::APIPJAKCFAC HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x28
	::System::Byte ACIOBDEBDNK; // 0x29
	::System::Byte CNIAANMNOCF; // 0x2A
	::System::Boolean MFPFPNGIGNK; // 0x2B
	::System::Int32 GIOJKMMDKKO; // 0x2C
	::System::Int32 OLCHJDLICKB; // 0x30

	::System::Void _ctor(::APIPJAKCFAC LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::APIPJAKCFAC, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + PACCFEOANKI__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PACCFEOANKI_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 FGCALJJABPF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PACCFEOANKI_FGCALJJABPF_OFFSET))(this);
	}

	::System::Boolean EJEDPHHENNN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PACCFEOANKI_EJEDPHHENNN_OFFSET))(this);
	}

	::System::Int32 IFMINFOMDKG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PACCFEOANKI_IFMINFOMDKG_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PACCFEOANKI_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PACCFEOANKI_COFGIJJOFLP_OFFSET))(this);
	}
};
