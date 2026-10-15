#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FFAHCMHJDAA_CTOR_OFFSET UNITYSDK_OFFSET(0x15723550)

inline static constexpr unsigned int FFAHCMHJDAA_TypeDefinitionIndex = 72399;

	class FFAHCMHJDAA : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFAHCMHJDAA_CTOR_OFFSET))(this);
		}

	};
