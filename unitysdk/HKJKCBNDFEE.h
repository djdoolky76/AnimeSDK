#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HKJKCBNDFEE__CTOR_OFFSET UNITYSDK_OFFSET(0x17E4FAF0)

inline static constexpr unsigned int HKJKCBNDFEE_TypeDefinitionIndex = 41802;

class HKJKCBNDFEE : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKJKCBNDFEE__CTOR_OFFSET))(this);
	}
};
