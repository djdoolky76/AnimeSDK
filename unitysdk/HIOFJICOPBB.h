#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define HIOFJICOPBB__CTOR_OFFSET UNITYSDK_OFFSET(0x11025DC0)

inline static constexpr unsigned int HIOFJICOPBB_TypeDefinitionIndex = 56825;

class HIOFJICOPBB : public ::System::Attribute
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIOFJICOPBB__CTOR_OFFSET))(this);
	}
};
