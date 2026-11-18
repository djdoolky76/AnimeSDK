#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KDDDLLMIIBD__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB12580)

inline static constexpr unsigned int KDDDLLMIIBD_TypeDefinitionIndex = 28921;

class KDDDLLMIIBD : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDDDLLMIIBD__CTOR_OFFSET))(this);
	}
};
