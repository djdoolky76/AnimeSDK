#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NHCJFJECJHG_CTOR_OFFSET UNITYSDK_OFFSET(0xBBBE570)

	class NHCJFJECJHG : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHCJFJECJHG_CTOR_OFFSET))(this);
		}

	};
