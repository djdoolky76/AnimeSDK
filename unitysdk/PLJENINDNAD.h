#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HLJNBBHKKMI;
class LPHINGPIEAJ;

#define PLJENINDNAD_CTOR_OFFSET UNITYSDK_OFFSET(0xCC36D40)
#define PLJENINDNAD_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0xCC36D50)

inline static constexpr unsigned int PLJENINDNAD_TypeDefinitionIndex = 79777;

	class PLJENINDNAD : public ::System::Object
	{
	public:
		::HLJNBBHKKMI* PDENFEFCAGN; // 0x10
		// static const ::System::String* OCOEKBICLEK; // 0x0
		::System::Void _ctor(::HLJNBBHKKMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HLJNBBHKKMI*))((::PBYTE)hIl2Cpp + PLJENINDNAD_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean HKKFFCBJOKM(::LPHINGPIEAJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LPHINGPIEAJ*))((::PBYTE)hIl2Cpp + PLJENINDNAD_HKKFFCBJOKM_OFFSET))(this, a1);
		}

	};
