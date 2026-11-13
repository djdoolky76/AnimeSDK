#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CNBNJLFNHKG_CTOR_OFFSET UNITYSDK_OFFSET(0x1B1B3230)

inline static constexpr unsigned int CNBNJLFNHKG_TypeDefinitionIndex = 80036;

	class CNBNJLFNHKG : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNBNJLFNHKG_CTOR_OFFSET))(this);
		}

	};
