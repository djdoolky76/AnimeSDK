#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HBIAKFCLCIG.h"
#include "unitysdk/CAHKKMIFGGB.h"

#define JJCPPLCFDID_CTOR_OFFSET UNITYSDK_OFFSET(0xB1FBD80)
#define JJCPPLCFDID_GNADABFLEFM_OFFSET UNITYSDK_OFFSET(0xB1FB580)

inline static constexpr unsigned int JJCPPLCFDID_TypeDefinitionIndex = 64929;

	class JJCPPLCFDID : public ::HBIAKFCLCIG
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJCPPLCFDID_CTOR_OFFSET))(this);
		}

		::System::Boolean GNADABFLEFM(::System::UInt32 a1, ::CAHKKMIFGGB a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::CAHKKMIFGGB))((::PBYTE)hIl2Cpp + JJCPPLCFDID_GNADABFLEFM_OFFSET))(this, a1, a2);
		}

	};
