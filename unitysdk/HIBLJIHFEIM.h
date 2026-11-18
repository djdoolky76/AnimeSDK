#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HIBLJIHFEIM__CTOR_OFFSET UNITYSDK_OFFSET(0x1E23A070)

inline static constexpr unsigned int HIBLJIHFEIM_TypeDefinitionIndex = 94036;

class HIBLJIHFEIM : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIBLJIHFEIM__CTOR_OFFSET))(this);
	}
};
