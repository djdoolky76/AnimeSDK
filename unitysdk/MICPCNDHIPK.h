#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IFFIGHKEBOB.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define MICPCNDHIPK_CBOJINLAEHG_OFFSET UNITYSDK_OFFSET(0x18E0F1B0)
#define MICPCNDHIPK_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x18E0F550)
#define MICPCNDHIPK_DBKECJLCKBP_OFFSET UNITYSDK_OFFSET(0x18E0F430)
#define MICPCNDHIPK_DNKLBHKEDEM_OFFSET UNITYSDK_OFFSET(0x18E0F640)
#define MICPCNDHIPK_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x18E0F780)
#define MICPCNDHIPK_HKELPCLHLEC_OFFSET UNITYSDK_OFFSET(0x18E0F2F0)
#define MICPCNDHIPK_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x18E0F540)
#define MICPCNDHIPK__CTOR_OFFSET UNITYSDK_OFFSET(0x18E0F1A0)

inline static constexpr unsigned int MICPCNDHIPK_TypeDefinitionIndex = 13255;

class MICPCNDHIPK : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::System::String* NNOHLLDBKNH; // 0x18
	::IFFIGHKEBOB HBDPAIKANDB; // 0x20
	::System::Byte CNIAANMNOCF; // 0x30
	::System::Byte GCHCDJCFCEG; // 0x31
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x32
	::System::Byte ACIOBDEBDNK; // 0x33
	::System::Int32 BPOJHCFJCAH; // 0x34
	::System::Int32 HCBBEDCMHEH; // 0x38
	::System::Int32 POKJNGILNLB; // 0x3C

	::System::Void _ctor(::IFFIGHKEBOB LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::IFFIGHKEBOB, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + MICPCNDHIPK__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 CBOJINLAEHG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MICPCNDHIPK_CBOJINLAEHG_OFFSET))(this);
	}

	::System::Int32 HKELPCLHLEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MICPCNDHIPK_HKELPCLHLEC_OFFSET))(this);
	}

	::System::String* DBKECJLCKBP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICPCNDHIPK_DBKECJLCKBP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICPCNDHIPK_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICPCNDHIPK_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 DNKLBHKEDEM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MICPCNDHIPK_DNKLBHKEDEM_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MICPCNDHIPK_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
