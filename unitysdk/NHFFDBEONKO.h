#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KNBLIANFOFA.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define NHFFDBEONKO_AEDFLJEHIJK_OFFSET UNITYSDK_OFFSET(0x1D0C6A10)
#define NHFFDBEONKO_APPONMIEDNI_OFFSET UNITYSDK_OFFSET(0x1D0C6B60)
#define NHFFDBEONKO_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1D0C6920)
#define NHFFDBEONKO_FELDILHMMIK_OFFSET UNITYSDK_OFFSET(0x1D0C6C80)
#define NHFFDBEONKO_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1D0C6B50)
#define NHFFDBEONKO_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1D0C6C70)
#define NHFFDBEONKO__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0C6910)

inline static constexpr unsigned int NHFFDBEONKO_TypeDefinitionIndex = 16592;

class NHFFDBEONKO : public ::System::Object
{
public:
	::System::String* PGLGBONAAPD; // 0x10
	::System::String* FHFALICLNCM; // 0x18
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::String* CDPMOEENODL; // 0x28
	::System::String* OIBEAJNLJAB; // 0x30
	::System::String* JPNOHBLNEMO; // 0x38
	::KNBLIANFOFA HBDPAIKANDB; // 0x40
	::System::Int32 IAEOIHAOJNC; // 0x50
	::System::Int32 LEOEBNELFOM; // 0x54
	::System::Int32 BHIEEAGJJGN; // 0x58
	::System::Int32 EKDLGHFGPLA; // 0x5C
	::System::Byte GCHCDJCFCEG; // 0x60
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x61
	::System::Byte ACIOBDEBDNK; // 0x62
	::System::Byte CNIAANMNOCF; // 0x63

	::System::Void _ctor(::KNBLIANFOFA LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::KNBLIANFOFA, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + NHFFDBEONKO__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHFFDBEONKO_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 AEDFLJEHIJK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NHFFDBEONKO_AEDFLJEHIJK_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NHFFDBEONKO_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* APPONMIEDNI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHFFDBEONKO_APPONMIEDNI_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NHFFDBEONKO_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* FELDILHMMIK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHFFDBEONKO_FELDILHMMIK_OFFSET))(this);
	}
};
