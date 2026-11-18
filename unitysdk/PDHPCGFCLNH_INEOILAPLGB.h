#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PDHPCGFCLNH;

#define PDHPCGFCLNH_INEOILAPLGB_KGOFEBJMJIK_OFFSET UNITYSDK_OFFSET(0x136F3EF0)
#define PDHPCGFCLNH_INEOILAPLGB__CTOR_OFFSET UNITYSDK_OFFSET(0x136F3EE0)

inline static constexpr unsigned int PDHPCGFCLNH_INEOILAPLGB_TypeDefinitionIndex = 39950;

class PDHPCGFCLNH_INEOILAPLGB : public ::System::Object
{
public:
	::PDHPCGFCLNH* KLHPEBKNIFB; // 0x10
	::System::Int32 KKGGACLGGPN; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDHPCGFCLNH_INEOILAPLGB__CTOR_OFFSET))(this);
	}

	::System::Boolean KGOFEBJMJIK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PDHPCGFCLNH_INEOILAPLGB_KGOFEBJMJIK_OFFSET))(this);
	}
};
