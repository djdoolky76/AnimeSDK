#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MBMEINOEBDJ__CTOR_OFFSET UNITYSDK_OFFSET(0x12D4E9E0)

inline static constexpr unsigned int MBMEINOEBDJ_TypeDefinitionIndex = 50466;

class MBMEINOEBDJ : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBMEINOEBDJ__CTOR_OFFSET))(this);
	}
};
