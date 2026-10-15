#pragma once
#include "unitysdk/unitysdk.h"
class DEKDEPEBHNC;
class PHKFMKDHNBO;

#define CPNCJIABDNP_CTOR_OFFSET UNITYSDK_OFFSET(0x10480)
#define CPNCJIABDNP_KGAFHLGGNHJ_OFFSET UNITYSDK_OFFSET(0xEF0F0)
#define CPNCJIABDNP_PCDINPEGBIL_OFFSET UNITYSDK_OFFSET(0xEF110)

inline static constexpr unsigned int CPNCJIABDNP_TypeDefinitionIndex = 56048;

	struct alignas(8) CPNCJIABDNP
	{
		::PHKFMKDHNBO* ALPKKNKAFBG; // 0x10
		::DEKDEPEBHNC* DHMBLHAGFCF; // 0x18
		::System::Void _ctor(::PHKFMKDHNBO* a1, ::DEKDEPEBHNC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::PHKFMKDHNBO*, ::DEKDEPEBHNC*))((::PBYTE)hIl2Cpp + CPNCJIABDNP_CTOR_OFFSET))(this, a1, a2);
		}

		/*
		::System::Int32 KGAFHLGGNHJ(::CPNCJIABDNP a1)
		{
			return ((::System::Int32(*)(::PVOID, ::CPNCJIABDNP))((::PBYTE)hIl2Cpp + CPNCJIABDNP_KGAFHLGGNHJ_OFFSET))(this, a1);
		}
		*/

		::System::Boolean PCDINPEGBIL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CPNCJIABDNP_PCDINPEGBIL_OFFSET))(this);
		}

	};
