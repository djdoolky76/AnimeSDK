#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGLEVELENDTIMESLOW__CTOR_OFFSET UNITYSDK_OFFSET(0x190A2E60)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigLevelEndTimeSlow_TypeDefinitionIndex = 86437;

	class ConfigLevelEndTimeSlow : public ::System::Object
	{
	public:
		::System::String* DefaultKey; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLEVELENDTIMESLOW__CTOR_OFFSET))(this);
		}
	};
}
