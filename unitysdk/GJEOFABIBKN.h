#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define GJEOFABIBKN__CTOR_OFFSET UNITYSDK_OFFSET(0x20068320)

inline static constexpr unsigned int GJEOFABIBKN_TypeDefinitionIndex = 6966;

class GJEOFABIBKN : public ::System::Attribute
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJEOFABIBKN__CTOR_OFFSET))(this);
	}
};
