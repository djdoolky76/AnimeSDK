#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EEGNCADIMBJ.h"
#include "unitysdk/HFLADMCGDOG.h"

#define HEGPDELFNFK_JHKOFECAEEO_OFFSET UNITYSDK_OFFSET(0x1407EDE0)
#define HEGPDELFNFK_OEDPBHBJKFK_OFFSET UNITYSDK_OFFSET(0x1407EE00)
#define HEGPDELFNFK_OGNADODLAOH_OFFSET UNITYSDK_OFFSET(0x1407EDF0)
#define HEGPDELFNFK__CTOR_OFFSET UNITYSDK_OFFSET(0x1407EDD0)

inline static constexpr unsigned int HEGPDELFNFK_TypeDefinitionIndex = 66717;

class HEGPDELFNFK : public ::EEGNCADIMBJ
{
public:
	::System::Void _ctor(::HFLADMCGDOG CIAHAAKLADN)
	{
		return ((::System::Void(*)(::PVOID, ::HFLADMCGDOG))((::PBYTE)hIl2Cpp + HEGPDELFNFK__CTOR_OFFSET))(this, CIAHAAKLADN);
	}

	::System::Boolean JHKOFECAEEO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HEGPDELFNFK_JHKOFECAEEO_OFFSET))(this);
	}

	::System::Boolean OGNADODLAOH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HEGPDELFNFK_OGNADODLAOH_OFFSET))(this);
	}

	::System::Boolean OEDPBHBJKFK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HEGPDELFNFK_OEDPBHBJKFK_OFFSET))(this);
	}
};
