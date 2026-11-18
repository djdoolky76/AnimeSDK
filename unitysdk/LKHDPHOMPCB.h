#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define LKHDPHOMPCB_GPKMPDHNCGL_OFFSET UNITYSDK_OFFSET(0x16855380)
#define LKHDPHOMPCB__CTOR_OFFSET UNITYSDK_OFFSET(0x168553C0)

inline static constexpr unsigned int LKHDPHOMPCB_TypeDefinitionIndex = 51175;

class LKHDPHOMPCB : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKHDPHOMPCB__CTOR_OFFSET))(this);
	}

	::System::Boolean GPKMPDHNCGL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LKHDPHOMPCB_GPKMPDHNCGL_OFFSET))(this);
	}
};
