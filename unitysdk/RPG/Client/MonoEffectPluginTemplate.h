#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginBase.h"

#define RPG_CLIENT_MONOEFFECTPLUGINTEMPLATE_CTOR_OFFSET UNITYSDK_OFFSET(0xE25F9B0)
#define RPG_CLIENT_MONOEFFECTPLUGINTEMPLATE_DISPOSEPLUGIN_OFFSET UNITYSDK_OFFSET(0xE25F970)
#define RPG_CLIENT_MONOEFFECTPLUGINTEMPLATE_RESETPLUGIN_OFFSET UNITYSDK_OFFSET(0xE25F920)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginTemplate_TypeDefinitionIndex = 72088;

	class MonoEffectPluginTemplate : public ::RPG::Client::MonoEffectPluginBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINTEMPLATE_CTOR_OFFSET))(this);
		}

		::System::Void ResetPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINTEMPLATE_RESETPLUGIN_OFFSET))(this);
		}

		::System::Void DisposePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINTEMPLATE_DISPOSEPLUGIN_OFFSET))(this);
		}

	};
}
