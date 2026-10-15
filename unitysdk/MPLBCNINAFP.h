#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CHLIAIJFBJF.h"

#define MPLBCNINAFP_CTOR_OFFSET UNITYSDK_OFFSET(0xBA40F20)
#define MPLBCNINAFP_NEPBDELGKOD_OFFSET UNITYSDK_OFFSET(0xBA40EC0)

	class MPLBCNINAFP : public ::CHLIAIJFBJF
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPLBCNINAFP_CTOR_OFFSET))(this);
		}

		::System::Boolean NEPBDELGKOD(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MPLBCNINAFP_NEPBDELGKOD_OFFSET))(this, a1, a2);
		}

	};
