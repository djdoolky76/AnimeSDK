#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PNELGBMHFFL.h"
#include "unitysdk/System/Object.h"

#define BIMGEEPNCHP_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8BAF60)

	class BIMGEEPNCHP : public ::System::Object
	{
	public:
		::PNELGBMHFFL DFOMJDDJDII; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIMGEEPNCHP_CTOR_OFFSET))(this);
		}

	};
