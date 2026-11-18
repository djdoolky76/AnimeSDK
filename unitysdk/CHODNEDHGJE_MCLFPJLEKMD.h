#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HPBIMDNDPLK.h"
#include "unitysdk/System/Object.h"

#define CHODNEDHGJE_MCLFPJLEKMD_MKKLGFKGOLH_OFFSET UNITYSDK_OFFSET(0x115479A0)
#define CHODNEDHGJE_MCLFPJLEKMD__CTOR_OFFSET UNITYSDK_OFFSET(0x11547990)

inline static constexpr unsigned int CHODNEDHGJE_MCLFPJLEKMD_TypeDefinitionIndex = 88596;

class CHODNEDHGJE_MCLFPJLEKMD : public ::System::Object
{
public:
	::HPBIMDNDPLK LPIHAHMNBIG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHODNEDHGJE_MCLFPJLEKMD__CTOR_OFFSET))(this);
	}

	::System::Void MKKLGFKGOLH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHODNEDHGJE_MCLFPJLEKMD_MKKLGFKGOLH_OFFSET))(this);
	}
};
