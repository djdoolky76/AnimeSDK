#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define GLDLCANBHBH__CTOR_OFFSET UNITYSDK_OFFSET(0x14CFA180)

inline static constexpr unsigned int GLDLCANBHBH_TypeDefinitionIndex = 81404;

class GLDLCANBHBH : public ::System::Attribute
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLDLCANBHBH__CTOR_OFFSET))(this);
	}
};
