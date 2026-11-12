#pragma once
#include "unitysdk/unitysdk.h"

#define CFCKJENMNJL_CTOR_OFFSET UNITYSDK_OFFSET(0xD36F5D0)
#define CFCKJENMNJL_GGNBOEIMEPM_OFFSET UNITYSDK_OFFSET(0xD36F030)

inline static constexpr unsigned int CFCKJENMNJL_TypeDefinitionIndex = 70650;

	class CFCKJENMNJL
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFCKJENMNJL_CTOR_OFFSET))(this);
		}

		::System::Void GGNBOEIMEPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFCKJENMNJL_GGNBOEIMEPM_OFFSET))(this);
		}

	};
