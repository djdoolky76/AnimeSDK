#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AFAPNIFHDAC_CTOR_OFFSET UNITYSDK_OFFSET(0xD5B6AA0)
#define AFAPNIFHDAC_JJNFOPNOPBF_OFFSET UNITYSDK_OFFSET(0xD5B6A00)

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
