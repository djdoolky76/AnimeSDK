#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HENIKKGDMJD.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/DPHCMIKAOHK.h"

class KGBFLHNJHHN;

#define PCGIAEJPONF_NPBPNCDCNDG_OFFSET UNITYSDK_OFFSET(0x17FE6D40)
#define PCGIAEJPONF__CTOR_OFFSET UNITYSDK_OFFSET(0x17FE6D30)

inline static constexpr unsigned int PCGIAEJPONF_TypeDefinitionIndex = 17703;

class PCGIAEJPONF : public ::HENIKKGDMJD
{
public:
	::System::DateTime AICHFKIBENF; // 0x58
	::System::DateTime IOMPEGPDBHB; // 0x60

	::System::Void _ctor(::DPHCMIKAOHK LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::DPHCMIKAOHK, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + PCGIAEJPONF__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void NPBPNCDCNDG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCGIAEJPONF_NPBPNCDCNDG_OFFSET))(this);
	}
};
