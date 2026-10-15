#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define OBDNNGAILDC_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC3AEE0)

inline static constexpr unsigned int OBDNNGAILDC_TypeDefinitionIndex = 35185;

	class OBDNNGAILDC : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBDNNGAILDC_CTOR_OFFSET))(this);
		}

	};
