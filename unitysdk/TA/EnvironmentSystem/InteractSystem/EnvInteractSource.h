#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A24C08DF141FF935/E40DABAF14F09957.h"
#include "unitysdk/A24C08DF141FF935/E4290752F5F2E992.h"

#define TA_ENVIRONMENTSYSTEM_INTERACTSYSTEM_ENVINTERACTSOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x28C81A0)

namespace TA::EnvironmentSystem::InteractSystem
{
	inline static constexpr unsigned int EnvInteractSource_TypeDefinitionIndex = 16305;

	class EnvInteractSource
	{
	public:
		::A24C08DF141FF935::E4290752F5F2E992 Shape; // 0x28
		::System::Single Radius; // 0x2C
		::System::Single Length; // 0x30
		::A24C08DF141FF935::E40DABAF14F09957 Channel; // 0x34
		::System::Boolean IsMain; // 0x38
		::System::Boolean EnableContinuity; // 0x39
		::System::Byte _padding0[0x2];
		::System::Single ContinuityThreshold; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_INTERACTSYSTEM_ENVINTERACTSOURCE__CTOR_OFFSET))(this);
		}
	};
}
