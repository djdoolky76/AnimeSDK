#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IECCKLEOJGF.h"
#include "unitysdk/AJLBEMPAIJL.h"

class IJDHOIGBKFP;
class KGBFLHNJHHN;

#define HHKGFOGCEFK_HJIAELNAHIP_OFFSET UNITYSDK_OFFSET(0x1E1C6590)
#define HHKGFOGCEFK_MDGCOKBMLFG_OFFSET UNITYSDK_OFFSET(0x1E1C64A0)
#define HHKGFOGCEFK__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1C6490)

inline static constexpr unsigned int HHKGFOGCEFK_TypeDefinitionIndex = 93971;

class HHKGFOGCEFK : public ::IECCKLEOJGF
{
public:
	::System::Void _ctor(::AJLBEMPAIJL LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::AJLBEMPAIJL, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + HHKGFOGCEFK__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean MDGCOKBMLFG(::IJDHOIGBKFP* PFJJJOBKCPE)
	{
		return ((::System::Boolean(*)(::PVOID, ::IJDHOIGBKFP*))((::PBYTE)hIl2Cpp + HHKGFOGCEFK_MDGCOKBMLFG_OFFSET))(this, PFJJJOBKCPE);
	}

	::System::Int32 HJIAELNAHIP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HHKGFOGCEFK_HJIAELNAHIP_OFFSET))(this);
	}
};
