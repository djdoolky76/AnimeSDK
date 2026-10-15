#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BMCEEIAPDGM_CTOR_OFFSET UNITYSDK_OFFSET(0x1C88E630)

inline static constexpr unsigned int BMCEEIAPDGM_TypeDefinitionIndex = 42148;

	class BMCEEIAPDGM : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMCEEIAPDGM_CTOR_OFFSET))(this);
		}

	};
