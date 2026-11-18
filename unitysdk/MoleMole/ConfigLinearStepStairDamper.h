#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigSingleAxisDamper.h"

#define MOLEMOLE_CONFIGLINEARSTEPSTAIRDAMPER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A772F80)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigLinearStepStairDamper_TypeDefinitionIndex = 75299;

	class ConfigLinearStepStairDamper : public ::MoleMole::ConfigSingleAxisDamper
	{
	public:
		::System::Single AbsoluteOffset; // 0x38
		::System::Single StepRatio; // 0x3C
		::System::Boolean UseFirstStepHeightAsRelativeRatio; // 0x40
		::System::Boolean BaselineOffsetPlane; // 0x41

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGLINEARSTEPSTAIRDAMPER__CTOR_OFFSET))(this);
		}
	};
}
