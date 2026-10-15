#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NMIGMOHJEKK_CTOR_OFFSET UNITYSDK_OFFSET(0xBC87980)

	class NMIGMOHJEKK : public ::System::Object
	{
	public:
		::System::Boolean IHBKOPMKIJF; // 0x10
		::System::Void _ctor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NMIGMOHJEKK_CTOR_OFFSET))(this, a1);
		}

	};
