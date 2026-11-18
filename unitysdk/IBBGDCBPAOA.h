#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IBBGDCBPAOA__CTOR_OFFSET UNITYSDK_OFFSET(0x1012C740)

inline static constexpr unsigned int IBBGDCBPAOA_TypeDefinitionIndex = 55237;

class IBBGDCBPAOA : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBBGDCBPAOA__CTOR_OFFSET))(this);
	}
};
