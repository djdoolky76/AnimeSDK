#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OODKLNNOPMJ.h"
#include "unitysdk/PECDMLGABBM.h"

class KGBFLHNJHHN;
class PFACPAKPBGK;

#define IMNHEMEHEIP_MDGCOKBMLFG_OFFSET UNITYSDK_OFFSET(0x1DA08490)
#define IMNHEMEHEIP__CTOR_OFFSET UNITYSDK_OFFSET(0x1DA08480)

inline static constexpr unsigned int IMNHEMEHEIP_TypeDefinitionIndex = 93980;

class IMNHEMEHEIP : public ::OODKLNNOPMJ
{
public:
	::System::Void _ctor(::PECDMLGABBM LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::PECDMLGABBM, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + IMNHEMEHEIP__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean MDGCOKBMLFG(::PFACPAKPBGK* PFJJJOBKCPE)
	{
		return ((::System::Boolean(*)(::PVOID, ::PFACPAKPBGK*))((::PBYTE)hIl2Cpp + IMNHEMEHEIP_MDGCOKBMLFG_OFFSET))(this, PFJJJOBKCPE);
	}
};
