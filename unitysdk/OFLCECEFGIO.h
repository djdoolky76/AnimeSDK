#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define OFLCECEFGIO__CTOR_OFFSET UNITYSDK_OFFSET(0x15FDC260)

inline static constexpr unsigned int OFLCECEFGIO_TypeDefinitionIndex = 54486;

class OFLCECEFGIO : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFLCECEFGIO__CTOR_OFFSET))(this);
	}
};
