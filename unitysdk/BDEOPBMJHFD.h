#pragma once
#include "unitysdk/unitysdk.h"

#define BDEOPBMJHFD_CTOR_OFFSET UNITYSDK_OFFSET(0x170BDD60)
#define BDEOPBMJHFD_GGNBOEIMEPM_OFFSET UNITYSDK_OFFSET(0x170BDCB0)

inline static constexpr unsigned int BDEOPBMJHFD_TypeDefinitionIndex = 70656;

	class BDEOPBMJHFD
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDEOPBMJHFD_CTOR_OFFSET))(this);
		}

		::System::Void GGNBOEIMEPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDEOPBMJHFD_GGNBOEIMEPM_OFFSET))(this);
		}

	};
