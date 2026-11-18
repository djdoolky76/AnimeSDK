#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define PIPAOOIIBJH__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2B0C60)

inline static constexpr unsigned int PIPAOOIIBJH_TypeDefinitionIndex = 82028;

class PIPAOOIIBJH : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPAOOIIBJH__CTOR_OFFSET))(this);
	}
};
