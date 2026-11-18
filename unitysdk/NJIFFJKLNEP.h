#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/PropertyAttribute.h"

#define NJIFFJKLNEP__CTOR_OFFSET UNITYSDK_OFFSET(0xE0A2DB0)

inline static constexpr unsigned int NJIFFJKLNEP_TypeDefinitionIndex = 50547;

class NJIFFJKLNEP : public ::UnityEngine::PropertyAttribute
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJIFFJKLNEP__CTOR_OFFSET))(this);
	}
};
