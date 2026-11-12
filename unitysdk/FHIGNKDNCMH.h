#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FHIGNKDNCMH_CTOR_OFFSET UNITYSDK_OFFSET(0x166A1220)

inline static constexpr unsigned int FHIGNKDNCMH_TypeDefinitionIndex = 74954;

	class FHIGNKDNCMH : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHIGNKDNCMH_CTOR_OFFSET))(this);
		}

	};
