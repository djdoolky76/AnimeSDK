#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EANKKLCLOMC_CTOR_OFFSET UNITYSDK_OFFSET(0x12689150)

inline static constexpr unsigned int EANKKLCLOMC_TypeDefinitionIndex = 80542;

	class EANKKLCLOMC : public ::System::Object
	{
	public:
		::System::Boolean KLJGKPLHOAD; // 0x10
		::System::Void _ctor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EANKKLCLOMC_CTOR_OFFSET))(this, a1);
		}

	};
