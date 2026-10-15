#pragma once
#include "unitysdk/unitysdk.h"

#define DEJBOBJPEEH_CTOR_OFFSET UNITYSDK_OFFSET(0x1C54DB40)

	class DEJBOBJPEEH
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEJBOBJPEEH_CTOR_OFFSET))(this);
		}

	};
