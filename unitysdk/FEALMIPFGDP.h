#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FEALMIPFGDP_CTOR_OFFSET UNITYSDK_OFFSET(0x156E4700)

	class FEALMIPFGDP : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEALMIPFGDP_CTOR_OFFSET))(this);
		}

	};
