#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HLJNBBHKKMI;
class LPHINGPIEAJ;

#define LDEDCAALMFI_CTOR_OFFSET UNITYSDK_OFFSET(0x1AC782A0)
#define LDEDCAALMFI_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0x1AC782B0)

inline static constexpr unsigned int LDEDCAALMFI_TypeDefinitionIndex = 79777;

	class LDEDCAALMFI : public ::System::Object
	{
	public:
		::HLJNBBHKKMI* PDENFEFCAGN; // 0x10
		::System::Void _ctor(::HLJNBBHKKMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HLJNBBHKKMI*))((::PBYTE)hIl2Cpp + LDEDCAALMFI_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean HKKFFCBJOKM(::LPHINGPIEAJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LPHINGPIEAJ*))((::PBYTE)hIl2Cpp + LDEDCAALMFI_HKKFFCBJOKM_OFFSET))(this, a1);
		}

	};
