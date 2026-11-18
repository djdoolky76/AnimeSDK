#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MLONBLJHLMJ.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define PBBLBMBCIIN_APCKPKCNFJE_OFFSET UNITYSDK_OFFSET(0x17FE6300)
#define PBBLBMBCIIN_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x17FE6210)
#define PBBLBMBCIIN_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x17FE6440)
#define PBBLBMBCIIN_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x17FE6590)
#define PBBLBMBCIIN_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x17FE6450)
#define PBBLBMBCIIN__CTOR_OFFSET UNITYSDK_OFFSET(0x17FE6200)

inline static constexpr unsigned int PBBLBMBCIIN_TypeDefinitionIndex = 17085;

class PBBLBMBCIIN : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::MLONBLJHLMJ HBDPAIKANDB; // 0x18
	::System::Byte CNIAANMNOCF; // 0x28
	::System::Byte ACIOBDEBDNK; // 0x29
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x2A
	::System::Byte _padding0[0x1];
	::System::Int32 PCMOJLNOPPM; // 0x2C
	::System::Int32 BPMHKHIBGEJ; // 0x30

	::System::Void _ctor(::MLONBLJHLMJ LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::MLONBLJHLMJ, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + PBBLBMBCIIN__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBBLBMBCIIN_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 APCKPKCNFJE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PBBLBMBCIIN_APCKPKCNFJE_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PBBLBMBCIIN_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PBBLBMBCIIN_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PBBLBMBCIIN_LJANCIBECFG_OFFSET))(this);
	}
};
