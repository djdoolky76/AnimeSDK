#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define CIJDKICEOCD_CTOR_OFFSET UNITYSDK_OFFSET(0x1DCFC2E0)

inline static constexpr unsigned int CIJDKICEOCD_TypeDefinitionIndex = 6314;

	class CIJDKICEOCD : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIJDKICEOCD_CTOR_OFFSET))(this);
		}

	};
