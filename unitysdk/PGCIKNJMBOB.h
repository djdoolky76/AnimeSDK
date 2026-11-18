#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define PGCIKNJMBOB__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFA92E0)

inline static constexpr unsigned int PGCIKNJMBOB_TypeDefinitionIndex = 28747;

class PGCIKNJMBOB : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGCIKNJMBOB__CTOR_OFFSET))(this);
	}
};
