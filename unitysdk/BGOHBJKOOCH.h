#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DOIPMNDEPFK.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define BGOHBJKOOCH_CCHFLBDHLKM_OFFSET UNITYSDK_OFFSET(0x157290E0)
#define BGOHBJKOOCH_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x15729370)
#define BGOHBJKOOCH_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x15729220)
#define BGOHBJKOOCH_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x15729460)
#define BGOHBJKOOCH_MADFDDELJEH_OFFSET UNITYSDK_OFFSET(0x15729230)
#define BGOHBJKOOCH_MKOIIMKIPKH_OFFSET UNITYSDK_OFFSET(0x15729470)
#define BGOHBJKOOCH__CTOR_OFFSET UNITYSDK_OFFSET(0x157290D0)

inline static constexpr unsigned int BGOHBJKOOCH_TypeDefinitionIndex = 12401;

class BGOHBJKOOCH : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::System::String* JCHKIOGHNFE; // 0x18
	::DOIPMNDEPFK HBDPAIKANDB; // 0x20
	::System::Int32 GJDIFCEPELI; // 0x30
	::System::Int32 ELBOIMKJJJG; // 0x34
	::System::Byte CNIAANMNOCF; // 0x38
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x39
	::System::Byte ACIOBDEBDNK; // 0x3A

	::System::Void _ctor(::DOIPMNDEPFK LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::DOIPMNDEPFK, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + BGOHBJKOOCH__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 CCHFLBDHLKM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGOHBJKOOCH_CCHFLBDHLKM_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BGOHBJKOOCH_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 MADFDDELJEH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGOHBJKOOCH_MADFDDELJEH_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGOHBJKOOCH_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BGOHBJKOOCH_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* MKOIIMKIPKH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGOHBJKOOCH_MKOIIMKIPKH_OFFSET))(this);
	}
};
