#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IGIELDPGADC_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC350A0)

inline static constexpr unsigned int IGIELDPGADC_TypeDefinitionIndex = 44726;

	class IGIELDPGADC : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGIELDPGADC_CTOR_OFFSET))(this);
		}

	};
