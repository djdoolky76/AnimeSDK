#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginBase.h"
class IBFIOLEFPBL;
namespace RPG::Client { class UISetTMPAttribute; }

#define RPG_CLIENT_MONOEFFECTPLUGINSDFTEXT_AWAKEPLUGIN_OFFSET UNITYSDK_OFFSET(0xE25ACA0)
#define RPG_CLIENT_MONOEFFECTPLUGINSDFTEXT_CTOR_OFFSET UNITYSDK_OFFSET(0xE25AE00)
#define RPG_CLIENT_MONOEFFECTPLUGINSDFTEXT_DESTROYPLUGIN_OFFSET UNITYSDK_OFFSET(0xE25AD30)
#define RPG_CLIENT_MONOEFFECTPLUGINSDFTEXT_DISPOSEPLUGIN_OFFSET UNITYSDK_OFFSET(0xE25AC60)
#define RPG_CLIENT_MONOEFFECTPLUGINSDFTEXT_GET_BEHAVIOR_OFFSET UNITYSDK_OFFSET(0xE25ADF0)
#define RPG_CLIENT_MONOEFFECTPLUGINSDFTEXT_RESETPLUGIN_OFFSET UNITYSDK_OFFSET(0xE25AC10)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginSDFText_TypeDefinitionIndex = 72072;

	class MonoEffectPluginSDFText : public ::RPG::Client::MonoEffectPluginBase
	{
	public:
		::RPG::Client::UISetTMPAttribute* SDFText; // 0x28
		::IBFIOLEFPBL* KADDKEGNCHE; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSDFTEXT_CTOR_OFFSET))(this);
		}

		::System::Void ResetPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSDFTEXT_RESETPLUGIN_OFFSET))(this);
		}

		::System::Void DisposePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSDFTEXT_DISPOSEPLUGIN_OFFSET))(this);
		}

		::System::Void AwakePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSDFTEXT_AWAKEPLUGIN_OFFSET))(this);
		}

		::System::Void DestroyPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSDFTEXT_DESTROYPLUGIN_OFFSET))(this);
		}

		::IBFIOLEFPBL* get_Behavior()
		{
			return ((::IBFIOLEFPBL*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSDFTEXT_GET_BEHAVIOR_OFFSET))(this);
		}

	};
}
