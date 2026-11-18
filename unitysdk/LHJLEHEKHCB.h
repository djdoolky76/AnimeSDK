#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define LHJLEHEKHCB__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDE19F0)

inline static constexpr unsigned int LHJLEHEKHCB_TypeDefinitionIndex = 28814;

class LHJLEHEKHCB : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHJLEHEKHCB__CTOR_OFFSET))(this);
	}
};
