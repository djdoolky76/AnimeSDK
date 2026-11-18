#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BIHPBFHEOOA.h"

class HPDKLCFLONL;
class MNGIEFKBBGJ;

#define AHNGDEFEEFC__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCA5200)

inline static constexpr unsigned int AHNGDEFEEFC_TypeDefinitionIndex = 94231;

class AHNGDEFEEFC : public ::BIHPBFHEOOA
{
public:
	::HPDKLCFLONL* CNEPIFPOKEN; // 0x10
	::MNGIEFKBBGJ* LNFHPJFHJNB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHNGDEFEEFC__CTOR_OFFSET))(this);
	}
};
