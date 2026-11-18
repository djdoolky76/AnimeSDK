#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KGFNKFAJDEB__CTOR_OFFSET UNITYSDK_OFFSET(0x168021D0)

inline static constexpr unsigned int KGFNKFAJDEB_TypeDefinitionIndex = 88950;

class KGFNKFAJDEB : public ::System::Object
{
public:
	::System::Boolean MJAFHFKEMAK; // 0x10
	::System::Boolean PLKNALFLOAO; // 0x11

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGFNKFAJDEB__CTOR_OFFSET))(this);
	}
};
