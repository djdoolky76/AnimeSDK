#pragma once
#include "unitysdk/unitysdk.h"
class AEHGMMGLPAB;

#define MKEPJNNPDNP_CAIMHGNFNOF_OFFSET UNITYSDK_OFFSET(0xB993790)
#define MKEPJNNPDNP_CTOR_OFFSET UNITYSDK_OFFSET(0xB993830)

	class MKEPJNNPDNP
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKEPJNNPDNP_CTOR_OFFSET))(this);
		}

		::System::Void CAIMHGNFNOF(::AEHGMMGLPAB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AEHGMMGLPAB*))((::PBYTE)hIl2Cpp + MKEPJNNPDNP_CAIMHGNFNOF_OFFSET))(this, a1);
		}

	};
