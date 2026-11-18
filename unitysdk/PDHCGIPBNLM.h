#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define PDHCGIPBNLM__CTOR_OFFSET UNITYSDK_OFFSET(0x13A8AE20)

inline static constexpr unsigned int PDHCGIPBNLM_TypeDefinitionIndex = 64304;

class PDHCGIPBNLM : public ::System::Attribute
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDHCGIPBNLM__CTOR_OFFSET))(this);
	}
};
