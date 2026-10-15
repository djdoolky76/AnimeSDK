#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define OKNOPHBDNAB_AMIOJKLDALI_OFFSET UNITYSDK_OFFSET(0xBEF0D90)
#define OKNOPHBDNAB_FPPOHEPFLPC_OFFSET UNITYSDK_OFFSET(0xBEF0D30)

	class OKNOPHBDNAB : public ::System::Object
	{
	public:
		static ::System::Void FPPOHEPFLPC()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OKNOPHBDNAB_FPPOHEPFLPC_OFFSET))();
		}

		static ::System::Void AMIOJKLDALI()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OKNOPHBDNAB_AMIOJKLDALI_OFFSET))();
		}

	};
