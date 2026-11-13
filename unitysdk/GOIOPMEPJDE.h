#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HBIAKFCLCIG.h"
#include "unitysdk/CAHKKMIFGGB.h"

#define GOIOPMEPJDE_CTOR_OFFSET UNITYSDK_OFFSET(0x187B9820)
#define GOIOPMEPJDE_GNADABFLEFM_OFFSET UNITYSDK_OFFSET(0x187B96C0)

inline static constexpr unsigned int GOIOPMEPJDE_TypeDefinitionIndex = 66501;

	class GOIOPMEPJDE : public ::HBIAKFCLCIG
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOIOPMEPJDE_CTOR_OFFSET))(this);
		}

		::System::Boolean GNADABFLEFM(::System::UInt32 a1, ::CAHKKMIFGGB a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::CAHKKMIFGGB))((::PBYTE)hIl2Cpp + GOIOPMEPJDE_GNADABFLEFM_OFFSET))(this, a1, a2);
		}

	};
