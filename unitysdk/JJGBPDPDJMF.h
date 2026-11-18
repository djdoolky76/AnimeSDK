#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define JJGBPDPDJMF__CTOR_OFFSET UNITYSDK_OFFSET(0x20068330)

inline static constexpr unsigned int JJGBPDPDJMF_TypeDefinitionIndex = 6977;

class JJGBPDPDJMF : public ::System::Attribute
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJGBPDPDJMF__CTOR_OFFSET))(this);
	}
};
