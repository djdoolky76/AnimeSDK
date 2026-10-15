#pragma once
#include "unitysdk/unitysdk.h"

#define GBCLFIPFEAP_CTOR_OFFSET UNITYSDK_OFFSET(0x1594B270)

	class GBCLFIPFEAP
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBCLFIPFEAP_CTOR_OFFSET))(this);
		}

	};
