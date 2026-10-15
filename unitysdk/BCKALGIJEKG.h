#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AGKEILLNKIC.h"

#define BCKALGIJEKG_CTOR_OFFSET UNITYSDK_OFFSET(0x1C407690)

inline static constexpr unsigned int BCKALGIJEKG_TypeDefinitionIndex = 41435;

	class BCKALGIJEKG : public ::AGKEILLNKIC
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCKALGIJEKG_CTOR_OFFSET))(this);
		}

	};
