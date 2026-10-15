#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IEAMIIFFDKL.h"

#define NONOFPLPIFB_CTOR_OFFSET UNITYSDK_OFFSET(0x1D243B60)

	class NONOFPLPIFB : public ::IEAMIIFFDKL
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NONOFPLPIFB_CTOR_OFFSET))(this);
		}

	};
