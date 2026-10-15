#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LCPNALBMKIB.h"

#define EKCPPGBIPHP_CTOR_OFFSET UNITYSDK_OFFSET(0x154F3DD0)
#define EKCPPGBIPHP_DANKHPIIDOH_OFFSET UNITYSDK_OFFSET(0x154F3B70)

inline static constexpr unsigned int EKCPPGBIPHP_TypeDefinitionIndex = 66172;

	class EKCPPGBIPHP : public ::LCPNALBMKIB
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKCPPGBIPHP_CTOR_OFFSET))(this);
		}

		::System::Void DANKHPIIDOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKCPPGBIPHP_DANKHPIIDOH_OFFSET))(this);
		}

	};
