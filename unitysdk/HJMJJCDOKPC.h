#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JGELKBLKFHE.h"

class FKAFBPCGNMJ;

#define HJMJJCDOKPC_IMMOFOLIEKI_OFFSET UNITYSDK_OFFSET(0x14A1CD00)
#define HJMJJCDOKPC_NCFKAOGPKKP_OFFSET UNITYSDK_OFFSET(0x14A1CD10)
#define HJMJJCDOKPC__CTOR_OFFSET UNITYSDK_OFFSET(0x14A1CC60)

inline static constexpr unsigned int HJMJJCDOKPC_TypeDefinitionIndex = 65644;

class HJMJJCDOKPC : public ::JGELKBLKFHE
{
public:
	::FKAFBPCGNMJ* _DCBBPBJEFNL_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJMJJCDOKPC__CTOR_OFFSET))(this);
	}

	::System::Void IMMOFOLIEKI(::FKAFBPCGNMJ* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::FKAFBPCGNMJ*))((::PBYTE)hIl2Cpp + HJMJJCDOKPC_IMMOFOLIEKI_OFFSET))(this, EGEGIMGMJHN);
	}

	::FKAFBPCGNMJ* NCFKAOGPKKP()
	{
		return ((::FKAFBPCGNMJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJMJJCDOKPC_NCFKAOGPKKP_OFFSET))(this);
	}
};
