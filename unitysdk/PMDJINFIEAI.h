#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define PMDJINFIEAI__CTOR_OFFSET UNITYSDK_OFFSET(0x1C664490)

inline static constexpr unsigned int PMDJINFIEAI_TypeDefinitionIndex = 47333;

class PMDJINFIEAI : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMDJINFIEAI__CTOR_OFFSET))(this);
	}
};
