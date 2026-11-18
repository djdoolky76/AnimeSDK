#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define EFDGDGJDMDE__CTOR_OFFSET UNITYSDK_OFFSET(0x1589B280)

inline static constexpr unsigned int EFDGDGJDMDE_TypeDefinitionIndex = 72679;

class EFDGDGJDMDE : public ::System::Attribute
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFDGDGJDMDE__CTOR_OFFSET))(this);
	}
};
