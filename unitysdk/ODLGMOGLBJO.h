#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/APNCODNOFLH_IOLGAFLHBCM.h"
#include "unitysdk/System/ValueType.h"

#define ODLGMOGLBJO_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x593330)
#define ODLGMOGLBJO__CTOR_OFFSET UNITYSDK_OFFSET(0x593310)

inline static constexpr unsigned int ODLGMOGLBJO_TypeDefinitionIndex = 54628;

struct alignas(4) ODLGMOGLBJO
{
	::System::Single CHGCGKPBDEG; // 0x10
	::System::Single BHOIMDLLDND; // 0x14
	::System::Int32 FMBOEBDDNHH; // 0x18
	::System::Boolean DLKOGGJPCLG; // 0x1C
	::System::Byte _padding0[0x3];
	::APNCODNOFLH_IOLGAFLHBCM ABEMLGOBKDD; // 0x20

	::System::Void _ctor(::APNCODNOFLH_IOLGAFLHBCM JNAMLAOGNAL)
	{
		return ((::System::Void(*)(::PVOID, ::APNCODNOFLH_IOLGAFLHBCM))((::PBYTE)hIl2Cpp + ODLGMOGLBJO__CTOR_OFFSET))(this, JNAMLAOGNAL);
	}

	::System::Void OKJCHFGIKBH(::System::Single FNIOPKPHDEH, ::System::Single FGEGAPBOIBI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ODLGMOGLBJO_OKJCHFGIKBH_OFFSET))(this, FNIOPKPHDEH, FGEGAPBOIBI);
	}
};
