#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MJJBBOIFFPC__CTOR_OFFSET UNITYSDK_OFFSET(0x16C92CD0)

inline static constexpr unsigned int MJJBBOIFFPC_TypeDefinitionIndex = 83376;

class MJJBBOIFFPC : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJJBBOIFFPC__CTOR_OFFSET))(this);
	}
};
