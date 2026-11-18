#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OBOOLKLKFHG.h"
#include "unitysdk/OHNDLJDJIDC.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define IBLMGEPPJFP_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1953D8A0)
#define IBLMGEPPJFP_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1953D9A0)
#define IBLMGEPPJFP_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1953D990)
#define IBLMGEPPJFP_PGFCLLGLOCG_OFFSET UNITYSDK_OFFSET(0x1953D9B0)
#define IBLMGEPPJFP__CTOR_OFFSET UNITYSDK_OFFSET(0x1953D890)

inline static constexpr unsigned int IBLMGEPPJFP_TypeDefinitionIndex = 10976;

class IBLMGEPPJFP : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::OBOOLKLKFHG HBDPAIKANDB; // 0x18
	::System::Nullable_1<::OHNDLJDJIDC> EIGCFEHJEDC; // 0x28
	::System::Byte _padding0[0x10];
	::System::Byte ACIOBDEBDNK; // 0x40
	::System::Byte CNIAANMNOCF; // 0x41
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x42

	::System::Void _ctor(::OBOOLKLKFHG LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::OBOOLKLKFHG, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + IBLMGEPPJFP__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBLMGEPPJFP_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IBLMGEPPJFP_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IBLMGEPPJFP_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::OHNDLJDJIDC PGFCLLGLOCG()
	{
		return ((::OHNDLJDJIDC(*)(::PVOID))((::PBYTE)hIl2Cpp + IBLMGEPPJFP_PGFCLLGLOCG_OFFSET))(this);
	}
};
