#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OFKCHDNGMME.h"

#define CGNFLMMEMDN__CTOR_OFFSET UNITYSDK_OFFSET(0x16A2A550)

inline static constexpr unsigned int CGNFLMMEMDN_TypeDefinitionIndex = 79403;

class CGNFLMMEMDN : public ::OFKCHDNGMME
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGNFLMMEMDN__CTOR_OFFSET))(this);
	}
};
