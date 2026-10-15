#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FECDLDCCHPN.h"

#define OOINNCPHPNP_CTOR_OFFSET UNITYSDK_OFFSET(0xBF89090)

	class OOINNCPHPNP : public ::FECDLDCCHPN
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOINNCPHPNP_CTOR_OFFSET))(this);
		}

	};
