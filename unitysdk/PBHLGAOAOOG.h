#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HCGDMEADJCA.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define PBHLGAOAOOG_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1D0D8380)
#define PBHLGAOAOOG_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1D0D8370)
#define PBHLGAOAOOG_GHMDGJKEBIE_OFFSET UNITYSDK_OFFSET(0x1D0D8230)
#define PBHLGAOAOOG_HJEFCNNHHEO_OFFSET UNITYSDK_OFFSET(0x1D0D86D0)
#define PBHLGAOAOOG_HKELPCLHLEC_OFFSET UNITYSDK_OFFSET(0x1D0D80F0)
#define PBHLGAOAOOG_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1D0D86C0)
#define PBHLGAOAOOG_LNOBBAIGKJL_OFFSET UNITYSDK_OFFSET(0x1D0D8580)
#define PBHLGAOAOOG_ODKLDGDHHGP_OFFSET UNITYSDK_OFFSET(0x1D0D8470)
#define PBHLGAOAOOG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0D80E0)

inline static constexpr unsigned int PBHLGAOAOOG_TypeDefinitionIndex = 15286;

class PBHLGAOAOOG : public ::System::Object
{
public:
	::System::String* INEBJPBDCHI; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x18
	::HCGDMEADJCA HBDPAIKANDB; // 0x20
	::System::Int32 NPBPEEKOKKM; // 0x30
	::System::Int32 JABJBJHKDMH; // 0x34
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x38
	::System::Byte CNIAANMNOCF; // 0x39
	::System::Byte ACIOBDEBDNK; // 0x3A
	::System::Byte _padding0[0x1];
	::System::Int32 ONPMJGJBNOA; // 0x3C
	::System::Int32 POKJNGILNLB; // 0x40

	::System::Void _ctor(::HCGDMEADJCA LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::HCGDMEADJCA, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + PBHLGAOAOOG__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 HKELPCLHLEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PBHLGAOAOOG_HKELPCLHLEC_OFFSET))(this);
	}

	::System::Int32 GHMDGJKEBIE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PBHLGAOAOOG_GHMDGJKEBIE_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PBHLGAOAOOG_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBHLGAOAOOG_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* ODKLDGDHHGP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBHLGAOAOOG_ODKLDGDHHGP_OFFSET))(this);
	}

	::System::Int32 LNOBBAIGKJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PBHLGAOAOOG_LNOBBAIGKJL_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PBHLGAOAOOG_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 HJEFCNNHHEO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PBHLGAOAOOG_HJEFCNNHHEO_OFFSET))(this);
	}
};
