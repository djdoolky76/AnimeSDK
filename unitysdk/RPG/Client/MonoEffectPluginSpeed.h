#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginBase.h"

#define RPG_CLIENT_MONOEFFECTPLUGINSPEED_CTOR_OFFSET UNITYSDK_OFFSET(0xD80B6D0)
#define RPG_CLIENT_MONOEFFECTPLUGINSPEED_DISPOSEPLUGIN_OFFSET UNITYSDK_OFFSET(0xD80B690)
#define RPG_CLIENT_MONOEFFECTPLUGINSPEED_IGNOREINEDITOR_OFFSET UNITYSDK_OFFSET(0xD80B610)
#define RPG_CLIENT_MONOEFFECTPLUGINSPEED_RESETPLUGIN_OFFSET UNITYSDK_OFFSET(0xD80B650)

namespace RPG::Client
{
	class MonoEffectPluginSpeed : public ::RPG::Client::MonoEffectPluginBase
	{
	public:
		::System::Boolean KeySpeedIsOn; // 0x28
		::System::Byte _padding0[0x3];
		::System::Single Speed; // 0x2C
		::System::Boolean IsSimulationSpeedSyncMode; // 0x30
		::System::Boolean IsApplyToShaderSimulationSpeed; // 0x31
		::System::Boolean InfluencedBySimulationSpeed; // 0x32
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSPEED_CTOR_OFFSET))(this);
		}

		::System::Boolean IgnoreInEditor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSPEED_IGNOREINEDITOR_OFFSET))(this);
		}

		::System::Void ResetPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSPEED_RESETPLUGIN_OFFSET))(this);
		}

		::System::Void DisposePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSPEED_DISPOSEPLUGIN_OFFSET))(this);
		}

	};
}
