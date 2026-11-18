#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CHIHAOLEACH__CTOR_OFFSET UNITYSDK_OFFSET(0x128F9A50)

inline static constexpr unsigned int CHIHAOLEACH_TypeDefinitionIndex = 39349;

class CHIHAOLEACH : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHIHAOLEACH__CTOR_OFFSET))(this);
	}
};
