#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JNNMFODGJBO.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define HDDCDPILHLJ_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x17BF8590)
#define HDDCDPILHLJ_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x17BF8300)
#define HDDCDPILHLJ_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x17BF8790)
#define HDDCDPILHLJ_OJEOOEJLLLA_OFFSET UNITYSDK_OFFSET(0x17BF8680)
#define HDDCDPILHLJ_PHBKIDJMCIE_OFFSET UNITYSDK_OFFSET(0x17BF8310)
#define HDDCDPILHLJ_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x17BF8450)
#define HDDCDPILHLJ__CTOR_OFFSET UNITYSDK_OFFSET(0x17BF82F0)

inline static constexpr unsigned int HDDCDPILHLJ_TypeDefinitionIndex = 12779;

class HDDCDPILHLJ : public ::System::Object
{
public:
	::System::String* MEIIAMMJAEF; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x18
	::JNNMFODGJBO HBDPAIKANDB; // 0x20
	::System::Int32 IDAMNOBMIPH; // 0x30
	::System::Byte ACIOBDEBDNK; // 0x34
	::System::Byte CNIAANMNOCF; // 0x35
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x36
	::System::Byte _padding0[0x1];
	::System::Int32 PCMOJLNOPPM; // 0x38

	::System::Void _ctor(::JNNMFODGJBO LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::JNNMFODGJBO, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + HDDCDPILHLJ__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HDDCDPILHLJ_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 PHBKIDJMCIE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HDDCDPILHLJ_PHBKIDJMCIE_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HDDCDPILHLJ_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDDCDPILHLJ_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* OJEOOEJLLLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDDCDPILHLJ_OJEOOEJLLLA_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HDDCDPILHLJ_LJANCIBECFG_OFFSET))(this);
	}
};
