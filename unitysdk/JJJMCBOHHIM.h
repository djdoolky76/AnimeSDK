#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KADNBALMBLI.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define JJJMCBOHHIM_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x18BCCF20)
#define JJJMCBOHHIM_FLCDOCNAHCM_OFFSET UNITYSDK_OFFSET(0x18BCD010)
#define JJJMCBOHHIM_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x18BCD150)
#define JJJMCBOHHIM_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x18BCCF10)
#define JJJMCBOHHIM__CTOR_OFFSET UNITYSDK_OFFSET(0x18BCCF00)

inline static constexpr unsigned int JJJMCBOHHIM_TypeDefinitionIndex = 10199;

class JJJMCBOHHIM : public ::System::Object
{
public:
	::KADNBALMBLI HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Int32 GKIAALNAHCH; // 0x28
	::System::Byte CNIAANMNOCF; // 0x2C
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x2D
	::System::Byte ACIOBDEBDNK; // 0x2E

	::System::Void _ctor(::KADNBALMBLI LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::KADNBALMBLI, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + JJJMCBOHHIM__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JJJMCBOHHIM_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJJMCBOHHIM_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 FLCDOCNAHCM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJJMCBOHHIM_FLCDOCNAHCM_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JJJMCBOHHIM_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
