#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define LMAKOPPLNJE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DC9A260)

inline static constexpr unsigned int LMAKOPPLNJE_TypeDefinitionIndex = 94212;

class LMAKOPPLNJE : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMAKOPPLNJE__CTOR_OFFSET))(this);
	}
};
