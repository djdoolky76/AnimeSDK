#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AFAPNIFHDAC_CTOR_OFFSET UNITYSDK_OFFSET(0xCF05270)
#define AFAPNIFHDAC_JJNFOPNOPBF_OFFSET UNITYSDK_OFFSET(0xCF051D0)

inline static constexpr unsigned int AFAPNIFHDAC_TypeDefinitionIndex = 62452;

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
