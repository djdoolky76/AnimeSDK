#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HPBIMDNDPLK.h"
#include "unitysdk/System/Object.h"

#define CHODNEDHGJE_NPGKJCAHHLK_DCAPJBNHLKE_OFFSET UNITYSDK_OFFSET(0x128FB420)
#define CHODNEDHGJE_NPGKJCAHHLK__CTOR_OFFSET UNITYSDK_OFFSET(0x128FB410)

inline static constexpr unsigned int CHODNEDHGJE_NPGKJCAHHLK_TypeDefinitionIndex = 88603;

class CHODNEDHGJE_NPGKJCAHHLK : public ::System::Object
{
public:
	::HPBIMDNDPLK NFNBKDIPIAP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHODNEDHGJE_NPGKJCAHHLK__CTOR_OFFSET))(this);
	}

	::System::Void DCAPJBNHLKE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHODNEDHGJE_NPGKJCAHHLK_DCAPJBNHLKE_OFFSET))(this);
	}
};
