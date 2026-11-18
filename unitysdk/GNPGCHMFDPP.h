#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GNPGCHMFDPP__CTOR_OFFSET UNITYSDK_OFFSET(0x181634B0)

inline static constexpr unsigned int GNPGCHMFDPP_TypeDefinitionIndex = 55802;

class GNPGCHMFDPP : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNPGCHMFDPP__CTOR_OFFSET))(this);
	}
};
