#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BHNGBMGOPIA_CTOR_OFFSET UNITYSDK_OFFSET(0xB48F250)

inline static constexpr unsigned int BHNGBMGOPIA_TypeDefinitionIndex = 72629;

	class BHNGBMGOPIA : public ::System::Object
	{
	public:
		::System::Boolean DDMGCODOPIM; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHNGBMGOPIA_CTOR_OFFSET))(this);
		}

	};
