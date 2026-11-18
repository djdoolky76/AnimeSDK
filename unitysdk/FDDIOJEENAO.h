#pragma once
#include "unitysdk/unitysdk.h"

#define FDDIOJEENAO__CTOR_OFFSET UNITYSDK_OFFSET(0xBB38470)

inline static constexpr unsigned int FDDIOJEENAO_TypeDefinitionIndex = 91177;

class FDDIOJEENAO
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDDIOJEENAO__CTOR_OFFSET))(this);
	}
};
