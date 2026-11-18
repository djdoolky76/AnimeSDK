#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HFHIMPFIHMA__CTOR_OFFSET UNITYSDK_OFFSET(0x16F2FDE0)

inline static constexpr unsigned int HFHIMPFIHMA_TypeDefinitionIndex = 62600;

class HFHIMPFIHMA : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFHIMPFIHMA__CTOR_OFFSET))(this);
	}
};
