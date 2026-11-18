#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MEBBFONDHBG.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define LOHLECBADBO_APCKPKCNFJE_OFFSET UNITYSDK_OFFSET(0x1B30CDB0)
#define LOHLECBADBO_BKNKCFDBLGH_OFFSET UNITYSDK_OFFSET(0x1B30D000)
#define LOHLECBADBO_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B30CEF0)
#define LOHLECBADBO_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B30CFE0)
#define LOHLECBADBO_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B30CFF0)
#define LOHLECBADBO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B30CDA0)

inline static constexpr unsigned int LOHLECBADBO_TypeDefinitionIndex = 10664;

class LOHLECBADBO : public ::System::Object
{
public:
	::MEBBFONDHBG HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Byte ACIOBDEBDNK; // 0x28
	::System::Byte CNIAANMNOCF; // 0x29
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x2A
	::System::Byte _padding0[0x1];
	::System::Int32 BPMHKHIBGEJ; // 0x2C
	::System::Int32 NLCDENLKOPM; // 0x30

	::System::Void _ctor(::MEBBFONDHBG LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::MEBBFONDHBG, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + LOHLECBADBO__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 APCKPKCNFJE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LOHLECBADBO_APCKPKCNFJE_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOHLECBADBO_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LOHLECBADBO_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LOHLECBADBO_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 BKNKCFDBLGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LOHLECBADBO_BKNKCFDBLGH_OFFSET))(this);
	}
};
