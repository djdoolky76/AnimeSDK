#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JPJABODOAOF.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define NGJBGJOFNIK_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1BF6C530)
#define NGJBGJOFNIK_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1BF6CB30)
#define NGJBGJOFNIK_GKAMCMIJFHJ_OFFSET UNITYSDK_OFFSET(0x1BF6C770)
#define NGJBGJOFNIK_KMJOKBIIEDB_OFFSET UNITYSDK_OFFSET(0x1BF6C630)
#define NGJBGJOFNIK_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1BF6C620)
#define NGJBGJOFNIK_OFDHBMPOCPM_OFFSET UNITYSDK_OFFSET(0x1BF6C8B0)
#define NGJBGJOFNIK_OFFCLGALMMJ_OFFSET UNITYSDK_OFFSET(0x1BF6C9F0)
#define NGJBGJOFNIK__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF6C520)

inline static constexpr unsigned int NGJBGJOFNIK_TypeDefinitionIndex = 10399;

class NGJBGJOFNIK : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::JPJABODOAOF HBDPAIKANDB; // 0x18
	::System::Byte CNIAANMNOCF; // 0x28
	::System::Byte ACIOBDEBDNK; // 0x29
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x2A
	::System::Byte _padding0[0x1];
	::System::Int32 FNPDGPJPEAM; // 0x2C
	::System::Int32 OKBBGPGIODD; // 0x30
	::System::Int32 OCFJMFHDEBP; // 0x34
	::System::Int32 HMNEPJGNLIE; // 0x38

	::System::Void _ctor(::JPJABODOAOF LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::JPJABODOAOF, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + NGJBGJOFNIK__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGJBGJOFNIK_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NGJBGJOFNIK_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 KMJOKBIIEDB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGJBGJOFNIK_KMJOKBIIEDB_OFFSET))(this);
	}

	::System::Int32 GKAMCMIJFHJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGJBGJOFNIK_GKAMCMIJFHJ_OFFSET))(this);
	}

	::System::Int32 OFDHBMPOCPM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGJBGJOFNIK_OFDHBMPOCPM_OFFSET))(this);
	}

	::System::Int32 OFFCLGALMMJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGJBGJOFNIK_OFFCLGALMMJ_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NGJBGJOFNIK_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
