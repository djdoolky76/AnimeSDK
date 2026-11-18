#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LJIBNLBCGFG.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"
#include "unitysdk/OBKCIJLJCBN.h"
#include "unitysdk/System/ValueType.h"

class BBNKLHCDAGB;
class DOEADLKIMBH;
class FAECECHKCII;

#define CHLLIMBNFLF_BJANDJKKNCD_OFFSET UNITYSDK_OFFSET(0x731260)
#define CHLLIMBNFLF_FFCPIEDHBDP_OFFSET UNITYSDK_OFFSET(0x731210)
#define CHLLIMBNFLF_LCJEELHBNHG_OFFSET UNITYSDK_OFFSET(0x731270)
#define CHLLIMBNFLF__CTOR_OFFSET UNITYSDK_OFFSET(0x7311C0)

inline static constexpr unsigned int CHLLIMBNFLF_TypeDefinitionIndex = 46286;

struct alignas(8) CHLLIMBNFLF
{
	::LJIBNLBCGFG ONPNJPBGPNK; // 0x10
	::MoleMole::HollowChessboard::HollowChessboardUID GHOBLHGHFMG; // 0x18
	::BBNKLHCDAGB* KDEHMPGOCEP; // 0x20
	::BBNKLHCDAGB* PADJNMGMGHO; // 0x28
	::DOEADLKIMBH* HLCGIGILDCK; // 0x30
	::FAECECHKCII* KKGGDJJLAOM; // 0x38

	::System::Void _ctor(::MoleMole::HollowChessboard::HollowChessboardUID GHOBLHGHFMG, ::DOEADLKIMBH* HLCGIGILDCK, ::BBNKLHCDAGB* KDEHMPGOCEP, ::BBNKLHCDAGB* PADJNMGMGHO, ::FAECECHKCII* KKGGDJJLAOM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowChessboardUID, ::DOEADLKIMBH*, ::BBNKLHCDAGB*, ::BBNKLHCDAGB*, ::FAECECHKCII*))((::PBYTE)hIl2Cpp + CHLLIMBNFLF__CTOR_OFFSET))(this, GHOBLHGHFMG, HLCGIGILDCK, KDEHMPGOCEP, PADJNMGMGHO, KKGGDJJLAOM);
	}

	::System::Boolean FFCPIEDHBDP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CHLLIMBNFLF_FFCPIEDHBDP_OFFSET))(this);
	}

	::System::Void BJANDJKKNCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHLLIMBNFLF_BJANDJKKNCD_OFFSET))(this);
	}

	::System::Void LCJEELHBNHG(::OBKCIJLJCBN JKBLDFBGBPK)
	{
		return ((::System::Void(*)(::PVOID, ::OBKCIJLJCBN))((::PBYTE)hIl2Cpp + CHLLIMBNFLF_LCJEELHBNHG_OFFSET))(this, JKBLDFBGBPK);
	}
};
