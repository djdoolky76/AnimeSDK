#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EJDMMMNGMPF__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5EA380)

inline static constexpr unsigned int EJDMMMNGMPF_TypeDefinitionIndex = 34057;

class EJDMMMNGMPF : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJDMMMNGMPF__CTOR_OFFSET))(this);
	}
};
