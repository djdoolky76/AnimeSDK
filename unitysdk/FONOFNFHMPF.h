#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HLJNBBHKKMI;
class LPHINGPIEAJ;
class MJAOHLLPLGK;

#define FONOFNFHMPF_CTOR_OFFSET UNITYSDK_OFFSET(0x1682CB50)
#define FONOFNFHMPF_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0x1682CB60)

inline static constexpr unsigned int FONOFNFHMPF_TypeDefinitionIndex = 79779;

	class FONOFNFHMPF : public ::System::Object
	{
	public:
		::HLJNBBHKKMI* PDENFEFCAGN; // 0x10
		::MJAOHLLPLGK* FKINCGODJEP; // 0x18
		// static const ::System::String* LPIKHLHKJCG; // 0x0
		::System::Void _ctor(::HLJNBBHKKMI* a1, ::MJAOHLLPLGK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HLJNBBHKKMI*, ::MJAOHLLPLGK*))((::PBYTE)hIl2Cpp + FONOFNFHMPF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean HKKFFCBJOKM(::LPHINGPIEAJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LPHINGPIEAJ*))((::PBYTE)hIl2Cpp + FONOFNFHMPF_HKKFFCBJOKM_OFFSET))(this, a1);
		}

	};
