#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AFAPNIFHDAC_CTOR_OFFSET UNITYSDK_OFFSET(0x18DA9530)
#define AFAPNIFHDAC_JJNFOPNOPBF_OFFSET UNITYSDK_OFFSET(0x18DA9490)

inline static constexpr unsigned int AFAPNIFHDAC_TypeDefinitionIndex = 63865;

	class AFAPNIFHDAC : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFAPNIFHDAC_CTOR_OFFSET))(this);
		}

		::System::Boolean JJNFOPNOPBF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AFAPNIFHDAC_JJNFOPNOPBF_OFFSET))(this);
		}

	};
