#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GDDJCPNDLDN__CTOR_OFFSET UNITYSDK_OFFSET(0x11CA0A80)

inline static constexpr unsigned int GDDJCPNDLDN_TypeDefinitionIndex = 83436;

class GDDJCPNDLDN : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDDJCPNDLDN__CTOR_OFFSET))(this);
	}
};
