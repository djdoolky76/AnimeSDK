#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GFKKCCCLOFB__CTOR_OFFSET UNITYSDK_OFFSET(0x18136FF0)

inline static constexpr unsigned int GFKKCCCLOFB_TypeDefinitionIndex = 62785;

class GFKKCCCLOFB : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFKKCCCLOFB__CTOR_OFFSET))(this);
	}
};
