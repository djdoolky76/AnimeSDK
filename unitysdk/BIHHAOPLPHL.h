#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BIHHAOPLPHL_CEPDAOEBPJD_OFFSET UNITYSDK_OFFSET(0xB4A86F0)

	class BIHHAOPLPHL : public ::System::Object
	{
	public:
		static ::System::UInt32 CEPDAOEBPJD()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + BIHHAOPLPHL_CEPDAOEBPJD_OFFSET))();
		}

	};
