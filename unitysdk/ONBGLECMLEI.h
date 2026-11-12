#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HLJNBBHKKMI;
class LPHINGPIEAJ;

#define ONBGLECMLEI_CTOR_OFFSET UNITYSDK_OFFSET(0xC847BD0)
#define ONBGLECMLEI_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0xC847BE0)

inline static constexpr unsigned int ONBGLECMLEI_TypeDefinitionIndex = 79782;

	class ONBGLECMLEI : public ::System::Object
	{
	public:
		::HLJNBBHKKMI* PDENFEFCAGN; // 0x10
		::System::Void _ctor(::HLJNBBHKKMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HLJNBBHKKMI*))((::PBYTE)hIl2Cpp + ONBGLECMLEI_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean HKKFFCBJOKM(::LPHINGPIEAJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LPHINGPIEAJ*))((::PBYTE)hIl2Cpp + ONBGLECMLEI_HKKFFCBJOKM_OFFSET))(this, a1);
		}

	};
