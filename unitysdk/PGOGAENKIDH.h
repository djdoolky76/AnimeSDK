#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define PGOGAENKIDH__CTOR_OFFSET UNITYSDK_OFFSET(0x1FDBE220)

inline static constexpr unsigned int PGOGAENKIDH_TypeDefinitionIndex = 28311;

class PGOGAENKIDH : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGOGAENKIDH__CTOR_OFFSET))(this);
	}
};
