#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HBIAKFCLCIG.h"
#include "unitysdk/CAHKKMIFGGB.h"

#define ICOBBBAGFAD_CTOR_OFFSET UNITYSDK_OFFSET(0x188DD470)
#define ICOBBBAGFAD_GNADABFLEFM_OFFSET UNITYSDK_OFFSET(0x188DD3F0)

inline static constexpr unsigned int ICOBBBAGFAD_TypeDefinitionIndex = 66499;

	class ICOBBBAGFAD : public ::HBIAKFCLCIG
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICOBBBAGFAD_CTOR_OFFSET))(this);
		}

		::System::Boolean GNADABFLEFM(::System::UInt32 a1, ::CAHKKMIFGGB a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::CAHKKMIFGGB))((::PBYTE)hIl2Cpp + ICOBBBAGFAD_GNADABFLEFM_OFFSET))(this, a1, a2);
		}

	};
