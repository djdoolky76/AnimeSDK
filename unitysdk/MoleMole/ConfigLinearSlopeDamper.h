#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigSingleAxisDamper.h"

#define MOLEMOLE_CONFIGLINEARSLOPEDAMPER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A772F70)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigLinearSlopeDamper_TypeDefinitionIndex = 89251;

	class ConfigLinearSlopeDamper : public ::MoleMole::ConfigSingleAxisDamper
	{
	public:
		::System::Single AbsoluteOffset; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGLINEARSLOPEDAMPER__CTOR_OFFSET))(this);
		}
	};
}
