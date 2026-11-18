#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class IEAKOBCOHEE;

#define HNCICFFLIPF_LIFIILGGEGF_OFLKPNKACFF_OFFSET UNITYSDK_OFFSET(0x759680)

inline static constexpr unsigned int HNCICFFLIPF_LIFIILGGEGF_TypeDefinitionIndex = 46401;

struct alignas(4) HNCICFFLIPF_LIFIILGGEGF
{
	::System::UInt32 HFMADFEECJH; // 0x10
	::System::UInt32 NJBALIKDOCA; // 0x14

	::IEAKOBCOHEE* OFLKPNKACFF()
	{
		return ((::IEAKOBCOHEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNCICFFLIPF_LIFIILGGEGF_OFLKPNKACFF_OFFSET))(this);
	}
};
