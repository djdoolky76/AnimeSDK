#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LCPNALBMKIB.h"

#define ABCKINEAAKC_CTOR_OFFSET UNITYSDK_OFFSET(0xB0EC5C0)
#define ABCKINEAAKC_DANKHPIIDOH_OFFSET UNITYSDK_OFFSET(0xB0EC470)

inline static constexpr unsigned int ABCKINEAAKC_TypeDefinitionIndex = 66186;

	class ABCKINEAAKC : public ::LCPNALBMKIB
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABCKINEAAKC_CTOR_OFFSET))(this);
		}

		::System::Void DANKHPIIDOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABCKINEAAKC_DANKHPIIDOH_OFFSET))(this);
		}

	};
