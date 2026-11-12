#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CNBNJLFNHKG_CTOR_OFFSET UNITYSDK_OFFSET(0xE5E1C00)

inline static constexpr unsigned int CNBNJLFNHKG_TypeDefinitionIndex = 80037;

	class CNBNJLFNHKG : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNBNJLFNHKG_CTOR_OFFSET))(this);
		}

	};
