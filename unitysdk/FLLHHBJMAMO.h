#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FLLHHBJMAMO__CTOR_OFFSET UNITYSDK_OFFSET(0x1E2EB050)

inline static constexpr unsigned int FLLHHBJMAMO_TypeDefinitionIndex = 93603;

class FLLHHBJMAMO : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLLHHBJMAMO__CTOR_OFFSET))(this);
	}
};
