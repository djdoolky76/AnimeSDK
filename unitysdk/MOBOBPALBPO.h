#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GGJFAFONDHN.h"

#define MOBOBPALBPO_CTOR_OFFSET UNITYSDK_OFFSET(0xBA24C80)

	class MOBOBPALBPO : public ::GGJFAFONDHN
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOBOBPALBPO_CTOR_OFFSET))(this);
		}

	};
