#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGCHAOSBUFF__CTOR_OFFSET UNITYSDK_OFFSET(0x131DF520)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigChaosBuff_TypeDefinitionIndex = 62443;

	class ConfigChaosBuff : public ::System::Object
	{
	public:
		::System::String* MaterialPropertyKey; // 0x10
		::System::String* DamageAudio; // 0x18
		::System::Single ControlTime; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHAOSBUFF__CTOR_OFFSET))(this);
		}
	};
}
