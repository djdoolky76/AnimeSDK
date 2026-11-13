#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HMPHBCGCIMC_AGFFNCBEBBO_OFFSET UNITYSDK_OFFSET(0x209377E0)
#define HMPHBCGCIMC_CMHKNNNPMAJ_OFFSET UNITYSDK_OFFSET(0x20937870)
#define HMPHBCGCIMC_CTOR_OFFSET UNITYSDK_OFFSET(0x20937990)
#define HMPHBCGCIMC_FOAKGMFLMOC_OFFSET UNITYSDK_OFFSET(0x20937900)

inline static constexpr unsigned int HMPHBCGCIMC_TypeDefinitionIndex = 44965;

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
