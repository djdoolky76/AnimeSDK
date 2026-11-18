#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CHBFBFAPPCC;
class OLHFONBEAAN;

#define CHBFBFAPPCC_EHPFKOCFLMF_BCECABPMLME_OFFSET UNITYSDK_OFFSET(0x16A2A610)
#define CHBFBFAPPCC_EHPFKOCFLMF__CTOR_OFFSET UNITYSDK_OFFSET(0x16A2A600)

inline static constexpr unsigned int CHBFBFAPPCC_EHPFKOCFLMF_TypeDefinitionIndex = 41659;

class CHBFBFAPPCC_EHPFKOCFLMF : public ::System::Object
{
public:
	::CHBFBFAPPCC* KLHPEBKNIFB; // 0x10
	::OLHFONBEAAN* HHIJHDFHPOI; // 0x18
	::System::Int32 EHGKAFFGGJF; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHBFBFAPPCC_EHPFKOCFLMF__CTOR_OFFSET))(this);
	}

	::System::Void BCECABPMLME()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHBFBFAPPCC_EHPFKOCFLMF_BCECABPMLME_OFFSET))(this);
	}
};
