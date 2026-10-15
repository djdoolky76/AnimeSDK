#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HMPHBCGCIMC_AGFFNCBEBBO_OFFSET UNITYSDK_OFFSET(0x1CC64C00)
#define HMPHBCGCIMC_CMHKNNNPMAJ_OFFSET UNITYSDK_OFFSET(0x1CC64C90)
#define HMPHBCGCIMC_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC64DB0)
#define HMPHBCGCIMC_FOAKGMFLMOC_OFFSET UNITYSDK_OFFSET(0x1CC64D20)

inline static constexpr unsigned int HMPHBCGCIMC_TypeDefinitionIndex = 43890;

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
