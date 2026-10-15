#pragma once
#include "unitysdk/unitysdk.h"

#define GLHLFHFLAJB_CTOR_OFFSET UNITYSDK_OFFSET(0x15AB6B90)

	class GLHLFHFLAJB
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLHLFHFLAJB_CTOR_OFFSET))(this);
		}

	};
