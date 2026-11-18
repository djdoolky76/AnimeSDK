#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FODHABILILB_ONGFIOMODMJ_OFFSET UNITYSDK_OFFSET(0x11D8B740)
#define FODHABILILB__CTOR_OFFSET UNITYSDK_OFFSET(0x11D8B780)

inline static constexpr unsigned int FODHABILILB_TypeDefinitionIndex = 91033;

class FODHABILILB : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FODHABILILB__CTOR_OFFSET))(this);
	}

	::System::Void ONGFIOMODMJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FODHABILILB_ONGFIOMODMJ_OFFSET))(this);
	}
};
