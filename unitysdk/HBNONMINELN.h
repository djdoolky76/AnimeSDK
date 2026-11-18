#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BCHOANCLADD;

#define HBNONMINELN_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x16F23220)
#define HBNONMINELN__CTOR_OFFSET UNITYSDK_OFFSET(0x16F23210)

inline static constexpr unsigned int HBNONMINELN_TypeDefinitionIndex = 66647;

class HBNONMINELN : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBNONMINELN__CTOR_OFFSET))(this);
	}

	::BCHOANCLADD* COKNIICCODC()
	{
		return ((::BCHOANCLADD*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBNONMINELN_COKNIICCODC_OFFSET))(this);
	}
};
