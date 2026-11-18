#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AENICMHEIBH;
class AENICMHEIBH_ICGFKDPMBBN;

#define AENICMHEIBH_FLKFDLFNDHA_GCNDPGEEPHF_OFFSET UNITYSDK_OFFSET(0x16D6B530)
#define AENICMHEIBH_FLKFDLFNDHA__CTOR_OFFSET UNITYSDK_OFFSET(0x16D6B520)

inline static constexpr unsigned int AENICMHEIBH_FLKFDLFNDHA_TypeDefinitionIndex = 85677;

class AENICMHEIBH_FLKFDLFNDHA : public ::System::Object
{
public:
	::AENICMHEIBH* KLHPEBKNIFB; // 0x10
	::AENICMHEIBH_ICGFKDPMBBN* ADANGBMIJBF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AENICMHEIBH_FLKFDLFNDHA__CTOR_OFFSET))(this);
	}

	::System::Boolean GCNDPGEEPHF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AENICMHEIBH_FLKFDLFNDHA_GCNDPGEEPHF_OFFSET))(this);
	}
};
