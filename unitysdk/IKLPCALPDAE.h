#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DFFKOJEMIDD.h"
class KLGICPNPKIC;

#define IKLPCALPDAE_CTOR_OFFSET UNITYSDK_OFFSET(0x1648D080)
#define IKLPCALPDAE_PAGLGOBLGDG_OFFSET UNITYSDK_OFFSET(0x1648CB30)

inline static constexpr unsigned int IKLPCALPDAE_TypeDefinitionIndex = 73416;

	class IKLPCALPDAE : public ::DFFKOJEMIDD
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKLPCALPDAE_CTOR_OFFSET))(this);
		}

		::System::Void PAGLGOBLGDG(::KLGICPNPKIC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KLGICPNPKIC*))((::PBYTE)hIl2Cpp + IKLPCALPDAE_PAGLGOBLGDG_OFFSET))(this, a1);
		}

	};
