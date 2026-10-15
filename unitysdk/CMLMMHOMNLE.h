#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMLMMHOMNLE_InspectType.h"
#include "unitysdk/System/Attribute.h"

#define CMLMMHOMNLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DCB0BF0)

inline static constexpr unsigned int CMLMMHOMNLE_TypeDefinitionIndex = 25039;

	class CMLMMHOMNLE : public ::System::Attribute
	{
	public:
		::CMLMMHOMNLE_InspectType GMPGDEINODK; // 0x10
		::System::Void _ctor(::CMLMMHOMNLE_InspectType a1)
		{
			return ((::System::Void(*)(::PVOID, ::CMLMMHOMNLE_InspectType))((::PBYTE)hIl2Cpp + CMLMMHOMNLE_CTOR_OFFSET))(this, a1);
		}

	};
