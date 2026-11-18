#pragma once
#include "unitysdk/unitysdk.h"

#define FALOGAMNAJC__CTOR_OFFSET UNITYSDK_OFFSET(0x1616E0F0)

inline static constexpr unsigned int FALOGAMNAJC_TypeDefinitionIndex = 45052;

class FALOGAMNAJC
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FALOGAMNAJC__CTOR_OFFSET))(this);
	}
};
