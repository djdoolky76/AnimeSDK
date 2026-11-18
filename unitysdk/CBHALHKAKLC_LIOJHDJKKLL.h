#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CBHALHKAKLC_PKPKOMIJMKF;

#define CBHALHKAKLC_LIOJHDJKKLL_AGHGHGONCNN_OFFSET UNITYSDK_OFFSET(0x16A0B6E0)
#define CBHALHKAKLC_LIOJHDJKKLL__CTOR_OFFSET UNITYSDK_OFFSET(0x16A0B6D0)

inline static constexpr unsigned int CBHALHKAKLC_LIOJHDJKKLL_TypeDefinitionIndex = 55890;

class CBHALHKAKLC_LIOJHDJKKLL : public ::System::Object
{
public:
	::CBHALHKAKLC_PKPKOMIJMKF* FGBNBFHOKAA; // 0x10
	::System::UInt32 KLCELHJKJNA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBHALHKAKLC_LIOJHDJKKLL__CTOR_OFFSET))(this);
	}

	::System::Boolean AGHGHGONCNN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CBHALHKAKLC_LIOJHDJKKLL_AGHGHGONCNN_OFFSET))(this);
	}
};
