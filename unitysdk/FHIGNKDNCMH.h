#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FHIGNKDNCMH_CTOR_OFFSET UNITYSDK_OFFSET(0x18AAA1B0)

inline static constexpr unsigned int FHIGNKDNCMH_TypeDefinitionIndex = 74953;

	class FHIGNKDNCMH : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHIGNKDNCMH_CTOR_OFFSET))(this);
		}

	};
