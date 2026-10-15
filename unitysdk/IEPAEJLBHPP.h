#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IEPAEJLBHPP_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB0A3A0)

	class IEPAEJLBHPP : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEPAEJLBHPP_CTOR_OFFSET))(this);
		}

	};
