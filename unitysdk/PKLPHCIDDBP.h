#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LCPNALBMKIB.h"

#define PKLPHCIDDBP_CTOR_OFFSET UNITYSDK_OFFSET(0xC2E6380)
#define PKLPHCIDDBP_DANKHPIIDOH_OFFSET UNITYSDK_OFFSET(0xC2E6340)

inline static constexpr unsigned int PKLPHCIDDBP_TypeDefinitionIndex = 66175;

	class PKLPHCIDDBP : public ::LCPNALBMKIB
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKLPHCIDDBP_CTOR_OFFSET))(this);
		}

		::System::Void DANKHPIIDOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKLPHCIDDBP_DANKHPIIDOH_OFFSET))(this);
		}

	};
