#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HKHCHKPKIJE.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define PEHBOOFPNLI_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1CD0B040)
#define PEHBOOFPNLI_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1CD0B390)
#define PEHBOOFPNLI_GKAMCMIJFHJ_OFFSET UNITYSDK_OFFSET(0x1CD0B140)
#define PEHBOOFPNLI_HLPBEICLFIB_OFFSET UNITYSDK_OFFSET(0x1CD0B280)
#define PEHBOOFPNLI_INKFFFABICA_OFFSET UNITYSDK_OFFSET(0x1CD0AF00)
#define PEHBOOFPNLI_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1CD0B130)
#define PEHBOOFPNLI_LNOBBAIGKJL_OFFSET UNITYSDK_OFFSET(0x1CD0B4E0)
#define PEHBOOFPNLI_MDPBPBNMKJA_OFFSET UNITYSDK_OFFSET(0x1CD0B3A0)
#define PEHBOOFPNLI__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD0AEF0)

inline static constexpr unsigned int PEHBOOFPNLI_TypeDefinitionIndex = 14709;

class PEHBOOFPNLI : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::System::String* NDLAHDPFMCI; // 0x18
	::HKHCHKPKIJE HBDPAIKANDB; // 0x20
	::System::Int32 OKBBGPGIODD; // 0x30
	::System::Int32 LNDOJKEIPFI; // 0x34
	::System::Int32 JILOCHLIJIB; // 0x38
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x3C
	::System::Byte CNIAANMNOCF; // 0x3D
	::System::Byte ACIOBDEBDNK; // 0x3E
	::System::Byte _padding0[0x1];
	::System::Int32 DIIPGDPALDL; // 0x40
	::System::Int32 JABJBJHKDMH; // 0x44

	::System::Void _ctor(::HKHCHKPKIJE LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::HKHCHKPKIJE, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + PEHBOOFPNLI__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 INKFFFABICA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PEHBOOFPNLI_INKFFFABICA_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEHBOOFPNLI_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PEHBOOFPNLI_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 GKAMCMIJFHJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PEHBOOFPNLI_GKAMCMIJFHJ_OFFSET))(this);
	}

	::System::String* HLPBEICLFIB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEHBOOFPNLI_HLPBEICLFIB_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PEHBOOFPNLI_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 MDPBPBNMKJA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PEHBOOFPNLI_MDPBPBNMKJA_OFFSET))(this);
	}

	::System::Int32 LNOBBAIGKJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PEHBOOFPNLI_LNOBBAIGKJL_OFFSET))(this);
	}
};
