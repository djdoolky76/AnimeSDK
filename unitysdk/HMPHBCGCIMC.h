#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HMPHBCGCIMC_AGFFNCBEBBO_OFFSET UNITYSDK_OFFSET(0x1CC92E60)
#define HMPHBCGCIMC_CMHKNNNPMAJ_OFFSET UNITYSDK_OFFSET(0x1CC92EF0)
#define HMPHBCGCIMC_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC93010)
#define HMPHBCGCIMC_FOAKGMFLMOC_OFFSET UNITYSDK_OFFSET(0x1CC92F80)

	class HMPHBCGCIMC : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMPHBCGCIMC_CTOR_OFFSET))(this);
		}

		::System::Void AGFFNCBEBBO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMPHBCGCIMC_AGFFNCBEBBO_OFFSET))(this);
		}

		::System::Void CMHKNNNPMAJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMPHBCGCIMC_CMHKNNNPMAJ_OFFSET))(this);
		}

		::System::Void FOAKGMFLMOC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMPHBCGCIMC_FOAKGMFLMOC_OFFSET))(this);
		}

	};
