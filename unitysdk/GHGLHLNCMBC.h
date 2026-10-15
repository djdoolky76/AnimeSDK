#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GHGLHLNCMBC_InspectType.h"
#include "unitysdk/System/Attribute.h"

#define GHGLHLNCMBC_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE18670)

inline static constexpr unsigned int GHGLHLNCMBC_TypeDefinitionIndex = 25037;

	class GHGLHLNCMBC : public ::System::Attribute
	{
	public:
		::GHGLHLNCMBC_InspectType GMPGDEINODK; // 0x10
		::System::Void _ctor(::GHGLHLNCMBC_InspectType a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHGLHLNCMBC_InspectType))((::PBYTE)hIl2Cpp + GHGLHLNCMBC_CTOR_OFFSET))(this, a1);
		}

	};
