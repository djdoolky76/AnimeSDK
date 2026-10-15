#pragma once
#include "unitysdk/unitysdk.h"

#define BDEOPBMJHFD_CTOR_OFFSET UNITYSDK_OFFSET(0x162EA030)
#define BDEOPBMJHFD_GGNBOEIMEPM_OFFSET UNITYSDK_OFFSET(0x162E9F80)

inline static constexpr unsigned int BDEOPBMJHFD_TypeDefinitionIndex = 68704;

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
