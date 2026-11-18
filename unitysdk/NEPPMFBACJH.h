#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class EPJAODADCEA;

#define NEPPMFBACJH_ADEIIOBMIDP_OFFSET UNITYSDK_OFFSET(0x358B00)
#define NEPPMFBACJH_LCEBELOJPCE_OFFSET UNITYSDK_OFFSET(0x282350)

inline static constexpr unsigned int NEPPMFBACJH_TypeDefinitionIndex = 84588;

struct alignas(8) NEPPMFBACJH
{
	::EPJAODADCEA* _NENIBFCDPPP_k__BackingField; // 0x10

	::System::Void ADEIIOBMIDP(::EPJAODADCEA* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::EPJAODADCEA*))((::PBYTE)hIl2Cpp + NEPPMFBACJH_ADEIIOBMIDP_OFFSET))(this, EGEGIMGMJHN);
	}

	::EPJAODADCEA* LCEBELOJPCE()
	{
		return ((::EPJAODADCEA*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEPPMFBACJH_LCEBELOJPCE_OFFSET))(this);
	}
};
