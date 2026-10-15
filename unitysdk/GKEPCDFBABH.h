#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GKEPCDFBABH_CTOR_OFFSET UNITYSDK_OFFSET(0x15A962E0)

	class GKEPCDFBABH : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKEPCDFBABH_CTOR_OFFSET))(this);
		}

	};
