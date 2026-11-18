#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/NJNGHAOBGCA.h"

class CLNGHONFNHE;
class DLEIBKICEDA;

#define PPKMMEMFDGA_KHABHIGBPIN_OFFSET UNITYSDK_OFFSET(0x999080)
#define PPKMMEMFDGA__CTOR_OFFSET UNITYSDK_OFFSET(0x999000)

inline static constexpr unsigned int PPKMMEMFDGA_TypeDefinitionIndex = 28793;

struct alignas(8) PPKMMEMFDGA
{
	::DLEIBKICEDA* APNICEKPIOM; // 0x10
	::System::UInt32 PNMBGDJIBHE; // 0x18

	::System::Void _ctor(::DLEIBKICEDA* HGBKBOMGLJI, ::System::UInt32 NJPBLIINPKP)
	{
		return ((::System::Void(*)(::PVOID, ::DLEIBKICEDA*, ::System::UInt32))((::PBYTE)hIl2Cpp + PPKMMEMFDGA__CTOR_OFFSET))(this, HGBKBOMGLJI, NJPBLIINPKP);
	}

	::System::Boolean KHABHIGBPIN(::CLNGHONFNHE* BMEPJBGGDFN, ::NJNGHAOBGCA& HBMGHPEPBNC)
	{
		return ((::System::Boolean(*)(::PVOID, ::CLNGHONFNHE*, ::NJNGHAOBGCA&))((::PBYTE)hIl2Cpp + PPKMMEMFDGA_KHABHIGBPIN_OFFSET))(this, BMEPJBGGDFN, HBMGHPEPBNC);
	}
};
