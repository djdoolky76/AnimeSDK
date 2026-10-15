#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define GEBJPAPHKLO_CTOR_OFFSET UNITYSDK_OFFSET(0x159C65D0)

	class GEBJPAPHKLO : public ::System::Attribute
	{
	public:
		::System::Int32 GMDBHJKEAEI; // 0x10
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GEBJPAPHKLO_CTOR_OFFSET))(this, a1);
		}

	};
