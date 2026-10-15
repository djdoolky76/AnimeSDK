#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LIFDICCJGMJ_InspectType.h"
#include "unitysdk/System/Attribute.h"

#define LIFDICCJGMJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1D0C9920)

inline static constexpr unsigned int LIFDICCJGMJ_TypeDefinitionIndex = 25041;

	class LIFDICCJGMJ : public ::System::Attribute
	{
	public:
		::LIFDICCJGMJ_InspectType GMPGDEINODK; // 0x10
		::System::Void _ctor(::LIFDICCJGMJ_InspectType a1)
		{
			return ((::System::Void(*)(::PVOID, ::LIFDICCJGMJ_InspectType))((::PBYTE)hIl2Cpp + LIFDICCJGMJ_CTOR_OFFSET))(this, a1);
		}

	};
