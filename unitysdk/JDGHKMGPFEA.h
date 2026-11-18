#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FLNOEEAJGOA.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define JDGHKMGPFEA_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19546520)
#define JDGHKMGPFEA_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19546500)
#define JDGHKMGPFEA_HDDENLNIPMA_OFFSET UNITYSDK_OFFSET(0x19546610)
#define JDGHKMGPFEA_KJCHONPOHPG_OFFSET UNITYSDK_OFFSET(0x19546750)
#define JDGHKMGPFEA_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19546510)
#define JDGHKMGPFEA__CTOR_OFFSET UNITYSDK_OFFSET(0x195464F0)

inline static constexpr unsigned int JDGHKMGPFEA_TypeDefinitionIndex = 10526;

class JDGHKMGPFEA : public ::System::Object
{
public:
	::FLNOEEAJGOA HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Byte CNIAANMNOCF; // 0x28
	::System::Byte ACIOBDEBDNK; // 0x29
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x2A
	::System::Byte _padding0[0x1];
	::System::Int32 AEPNMCGBJKJ; // 0x2C
	::System::Int32 NKCHFHAGJML; // 0x30

	::System::Void _ctor(::FLNOEEAJGOA LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::FLNOEEAJGOA, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + JDGHKMGPFEA__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JDGHKMGPFEA_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JDGHKMGPFEA_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDGHKMGPFEA_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 HDDENLNIPMA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JDGHKMGPFEA_HDDENLNIPMA_OFFSET))(this);
	}

	::System::Int32 KJCHONPOHPG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JDGHKMGPFEA_KJCHONPOHPG_OFFSET))(this);
	}
};
