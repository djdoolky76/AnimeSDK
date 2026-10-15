#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DHHDBNNPIOL_CTOR_OFFSET UNITYSDK_OFFSET(0xEBD2F60)
#define DHHDBNNPIOL_JJNFOPNOPBF_OFFSET UNITYSDK_OFFSET(0xEBD2EC0)

inline static constexpr unsigned int DHHDBNNPIOL_TypeDefinitionIndex = 62454;

	class DHHDBNNPIOL : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHHDBNNPIOL_CTOR_OFFSET))(this);
		}

		::System::Boolean JJNFOPNOPBF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DHHDBNNPIOL_JJNFOPNOPBF_OFFSET))(this);
		}

	};
