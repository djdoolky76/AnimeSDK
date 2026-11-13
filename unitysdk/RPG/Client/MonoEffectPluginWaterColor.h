#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginBase.h"
class MKNKPLOJJGC;

#define RPG_CLIENT_MONOEFFECTPLUGINWATERCOLOR_AWAKEPLUGIN_OFFSET UNITYSDK_OFFSET(0x1ADF0C70)
#define RPG_CLIENT_MONOEFFECTPLUGINWATERCOLOR_CTOR_OFFSET UNITYSDK_OFFSET(0x1ADF0E60)
#define RPG_CLIENT_MONOEFFECTPLUGINWATERCOLOR_DESTROYPLUGIN_OFFSET UNITYSDK_OFFSET(0x1ADF0E00)
#define RPG_CLIENT_MONOEFFECTPLUGINWATERCOLOR_DISPOSEPLUGIN_OFFSET UNITYSDK_OFFSET(0x1ADF0D30)
#define RPG_CLIENT_MONOEFFECTPLUGINWATERCOLOR_IGNOREINEDITOR_OFFSET UNITYSDK_OFFSET(0x1ADF0C30)
#define RPG_CLIENT_MONOEFFECTPLUGINWATERCOLOR_RESETPLUGIN_OFFSET UNITYSDK_OFFSET(0x1ADF0CE0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginWaterColor_TypeDefinitionIndex = 72100;

	class MonoEffectPluginWaterColor : public ::RPG::Client::MonoEffectPluginBase
	{
	public:
		::MKNKPLOJJGC* KADDKEGNCHE; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINWATERCOLOR_CTOR_OFFSET))(this);
		}

		::System::Boolean IgnoreInEditor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINWATERCOLOR_IGNOREINEDITOR_OFFSET))(this);
		}

		::System::Void AwakePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINWATERCOLOR_AWAKEPLUGIN_OFFSET))(this);
		}

		::System::Void ResetPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINWATERCOLOR_RESETPLUGIN_OFFSET))(this);
		}

		::System::Void DisposePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINWATERCOLOR_DISPOSEPLUGIN_OFFSET))(this);
		}

		::System::Void DestroyPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINWATERCOLOR_DESTROYPLUGIN_OFFSET))(this);
		}

	};
}
