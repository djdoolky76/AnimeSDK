#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FCEFNCCAONE__CTOR_OFFSET UNITYSDK_OFFSET(0x17265440)

inline static constexpr unsigned int FCEFNCCAONE_TypeDefinitionIndex = 60760;

class FCEFNCCAONE : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCEFNCCAONE__CTOR_OFFSET))(this);
	}
};
