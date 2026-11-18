#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BNKLLIHDALE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B993FA0)

inline static constexpr unsigned int BNKLLIHDALE_TypeDefinitionIndex = 11034;

class BNKLLIHDALE : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNKLLIHDALE__CTOR_OFFSET))(this);
	}
};
