#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BAMPJJAPJJG.h"
class CIIKBJFOKHL;

#define CFNEDBDHHNG_CTOR_OFFSET UNITYSDK_OFFSET(0xD6066D0)
#define CFNEDBDHHNG_HKCONCPENCG_OFFSET UNITYSDK_OFFSET(0xD606700)

inline static constexpr unsigned int CFNEDBDHHNG_TypeDefinitionIndex = 80659;

	class CFNEDBDHHNG : public ::BAMPJJAPJJG
	{
	public:
		::CIIKBJFOKHL* EEFMDEHLLFI; // 0x10
		::System::Void _ctor(::CIIKBJFOKHL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CIIKBJFOKHL*))((::PBYTE)hIl2Cpp + CFNEDBDHHNG_CTOR_OFFSET))(this, a1);
		}

		::CIIKBJFOKHL* HKCONCPENCG()
		{
			return ((::CIIKBJFOKHL*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFNEDBDHHNG_HKCONCPENCG_OFFSET))(this);
		}

	};
