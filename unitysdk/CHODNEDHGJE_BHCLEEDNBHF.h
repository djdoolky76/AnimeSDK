#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HPBIMDNDPLK.h"
#include "unitysdk/System/Object.h"

#define CHODNEDHGJE_BHCLEEDNBHF_LDGDAAMBJBM_OFFSET UNITYSDK_OFFSET(0x1686A5B0)
#define CHODNEDHGJE_BHCLEEDNBHF__CTOR_OFFSET UNITYSDK_OFFSET(0x1686A5A0)

inline static constexpr unsigned int CHODNEDHGJE_BHCLEEDNBHF_TypeDefinitionIndex = 88602;

class CHODNEDHGJE_BHCLEEDNBHF : public ::System::Object
{
public:
	::HPBIMDNDPLK LPIHAHMNBIG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHODNEDHGJE_BHCLEEDNBHF__CTOR_OFFSET))(this);
	}

	::System::Void LDGDAAMBJBM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHODNEDHGJE_BHCLEEDNBHF_LDGDAAMBJBM_OFFSET))(this);
	}
};
