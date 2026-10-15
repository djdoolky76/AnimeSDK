#pragma once
#include "unitysdk/unitysdk.h"

#define DPKCEPGMAEP_CTOR_OFFSET UNITYSDK_OFFSET(0x1C54F3C0)

	class DPKCEPGMAEP
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPKCEPGMAEP_CTOR_OFFSET))(this);
		}

	};
