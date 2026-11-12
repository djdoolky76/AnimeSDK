#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ACIOOFOEGOH_CTOR_OFFSET UNITYSDK_OFFSET(0xB7896F0)

inline static constexpr unsigned int ACIOOFOEGOH_TypeDefinitionIndex = 74275;

	class ACIOOFOEGOH : public ::System::Object
	{
	public:
		::System::Single PDPMDLBEMAN; // 0x10
		::System::Single APAKOOPMIMP; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACIOOFOEGOH_CTOR_OFFSET))(this);
		}

	};
