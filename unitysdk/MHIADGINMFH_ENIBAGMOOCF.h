#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/Object.h"

#define MHIADGINMFH_ENIBAGMOOCF_CKEMNJODHCH_OFFSET UNITYSDK_OFFSET(0x10751860)
#define MHIADGINMFH_ENIBAGMOOCF__CTOR_OFFSET UNITYSDK_OFFSET(0x10751850)

inline static constexpr unsigned int MHIADGINMFH_ENIBAGMOOCF_TypeDefinitionIndex = 41442;

class MHIADGINMFH_ENIBAGMOOCF : public ::System::Object
{
public:
	::HOCDHMEPPEG ECLGGGCDNKC; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHIADGINMFH_ENIBAGMOOCF__CTOR_OFFSET))(this);
	}

	::System::Void CKEMNJODHCH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHIADGINMFH_ENIBAGMOOCF_CKEMNJODHCH_OFFSET))(this);
	}
};
