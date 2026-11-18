#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OFJPGIECELO.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define EOGGNCPBOLM_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x187B2260)
#define EOGGNCPBOLM_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x187B2140)
#define EOGGNCPBOLM_HOMIAAGCLJD_OFFSET UNITYSDK_OFFSET(0x187B2150)
#define EOGGNCPBOLM_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x187B2130)
#define EOGGNCPBOLM_MBNEPPMDAHH_OFFSET UNITYSDK_OFFSET(0x187B2020)
#define EOGGNCPBOLM__CTOR_OFFSET UNITYSDK_OFFSET(0x187B2010)

inline static constexpr unsigned int EOGGNCPBOLM_TypeDefinitionIndex = 16999;

class EOGGNCPBOLM : public ::System::Object
{
public:
	::OFJPGIECELO HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::String* MGDDBANCPDH; // 0x28
	::System::String* GKJGBCHEFCA; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x38
	::System::Byte CNIAANMNOCF; // 0x39
	::System::Byte ACIOBDEBDNK; // 0x3A

	::System::Void _ctor(::OFJPGIECELO LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::OFJPGIECELO, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + EOGGNCPBOLM__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* MBNEPPMDAHH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOGGNCPBOLM_MBNEPPMDAHH_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EOGGNCPBOLM_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EOGGNCPBOLM_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* HOMIAAGCLJD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOGGNCPBOLM_HOMIAAGCLJD_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOGGNCPBOLM_COFGIJJOFLP_OFFSET))(this);
	}
};
