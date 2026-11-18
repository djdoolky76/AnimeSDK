#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/EPHBGKMGEFF.h"

class EMPMHOJOLHJ;

#define JKLNCKHIBNP_PMBCBBOJKHK_GJOLPBBOHDA_OFFSET UNITYSDK_OFFSET(0x13AD5140)
#define JKLNCKHIBNP_PMBCBBOJKHK__CTOR_OFFSET UNITYSDK_OFFSET(0x13AD5130)

inline static constexpr unsigned int JKLNCKHIBNP_PMBCBBOJKHK_TypeDefinitionIndex = 87635;

class JKLNCKHIBNP_PMBCBBOJKHK : public ::System::Object
{
public:
	::EMPMHOJOLHJ* AMJADGKJAPK; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKLNCKHIBNP_PMBCBBOJKHK__CTOR_OFFSET))(this);
	}

	::System::Boolean GJOLPBBOHDA(::EPHBGKMGEFF GEGOALONGBI)
	{
		return ((::System::Boolean(*)(::PVOID, ::EPHBGKMGEFF))((::PBYTE)hIl2Cpp + JKLNCKHIBNP_PMBCBBOJKHK_GJOLPBBOHDA_OFFSET))(this, GEGOALONGBI);
	}
};
