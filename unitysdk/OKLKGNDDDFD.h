#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HBIAKFCLCIG.h"
#include "unitysdk/CAHKKMIFGGB.h"

#define OKLKGNDDDFD_CTOR_OFFSET UNITYSDK_OFFSET(0xBEE6390)
#define OKLKGNDDDFD_GNADABFLEFM_OFFSET UNITYSDK_OFFSET(0xBEE6330)

inline static constexpr unsigned int OKLKGNDDDFD_TypeDefinitionIndex = 64927;

	class OKLKGNDDDFD : public ::HBIAKFCLCIG
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKLKGNDDDFD_CTOR_OFFSET))(this);
		}

		::System::Boolean GNADABFLEFM(::System::UInt32 a1, ::CAHKKMIFGGB a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::CAHKKMIFGGB))((::PBYTE)hIl2Cpp + OKLKGNDDDFD_GNADABFLEFM_OFFSET))(this, a1, a2);
		}

	};
