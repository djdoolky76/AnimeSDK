#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueTuple_2.h"

class CBDDODKFCIJ;
class EDBDJENIDEO;

#define GLLAMAMOIMK_DBOLGMGMPFE_HHHEOMOCCHG_OFFSET UNITYSDK_OFFSET(0x125E1740)
#define GLLAMAMOIMK_DBOLGMGMPFE_LKJDHLCJLJC_OFFSET UNITYSDK_OFFSET(0x125E0E80)
#define GLLAMAMOIMK_DBOLGMGMPFE__CTOR_OFFSET UNITYSDK_OFFSET(0x125E1750)

inline static constexpr unsigned int GLLAMAMOIMK_DBOLGMGMPFE_TypeDefinitionIndex = 85022;

class GLLAMAMOIMK_DBOLGMGMPFE
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLLAMAMOIMK_DBOLGMGMPFE__CTOR_OFFSET))(this);
	}

	::System::Boolean LKJDHLCJLJC(::System::ValueTuple_2<::EDBDJENIDEO*, ::CBDDODKFCIJ*>& CENBECNGPHI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::EDBDJENIDEO*, ::CBDDODKFCIJ*>&))((::PBYTE)hIl2Cpp + GLLAMAMOIMK_DBOLGMGMPFE_LKJDHLCJLJC_OFFSET))(this, CENBECNGPHI);
	}

	::System::Int32 HHHEOMOCCHG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLLAMAMOIMK_DBOLGMGMPFE_HHHEOMOCCHG_OFFSET))(this);
	}
};
