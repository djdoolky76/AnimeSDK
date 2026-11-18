#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ENGPICMPKAE__CTOR_OFFSET UNITYSDK_OFFSET(0x15E348F0)

inline static constexpr unsigned int ENGPICMPKAE_TypeDefinitionIndex = 65208;

class ENGPICMPKAE : public ::System::Object
{
public:
	::System::Int32 LNLEMGHIHIG; // 0x10
	::System::Boolean LKDACHBDGLL; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENGPICMPKAE__CTOR_OFFSET))(this);
	}
};
