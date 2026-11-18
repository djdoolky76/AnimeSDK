#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define PINBHKFHPAL__CTOR_OFFSET UNITYSDK_OFFSET(0x11B74850)

inline static constexpr unsigned int PINBHKFHPAL_TypeDefinitionIndex = 38707;

class PINBHKFHPAL : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PINBHKFHPAL__CTOR_OFFSET))(this);
	}
};
