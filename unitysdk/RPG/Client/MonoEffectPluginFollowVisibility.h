#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FollowVisibilityType.h"
#include "unitysdk/RPG/Client/MonoEffectPluginBase.h"
class BOCHJJNGOIH;

#define RPG_CLIENT_MONOEFFECTPLUGINFOLLOWVISIBILITY_AWAKEPLUGIN_OFFSET UNITYSDK_OFFSET(0x193A5E10)
#define RPG_CLIENT_MONOEFFECTPLUGINFOLLOWVISIBILITY_CTOR_OFFSET UNITYSDK_OFFSET(0x193A6040)
#define RPG_CLIENT_MONOEFFECTPLUGINFOLLOWVISIBILITY_DESTROYPLUGIN_OFFSET UNITYSDK_OFFSET(0x193A5F00)
#define RPG_CLIENT_MONOEFFECTPLUGINFOLLOWVISIBILITY_DISPOSEPLUGIN_OFFSET UNITYSDK_OFFSET(0x193A6000)
#define RPG_CLIENT_MONOEFFECTPLUGINFOLLOWVISIBILITY_IGNOREINEDITOR_OFFSET UNITYSDK_OFFSET(0x193A5DD0)
#define RPG_CLIENT_MONOEFFECTPLUGINFOLLOWVISIBILITY_RESETPLUGIN_OFFSET UNITYSDK_OFFSET(0x193A5FC0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginFollowVisibility_TypeDefinitionIndex = 72033;

	class MonoEffectPluginFollowVisibility : public ::RPG::Client::MonoEffectPluginBase
	{
	public:
		::RPG::Client::FollowVisibilityType FollowType; // 0x28
		::System::Byte _padding0[0x4];
		::BOCHJJNGOIH* KADDKEGNCHE; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFOLLOWVISIBILITY_CTOR_OFFSET))(this);
		}

		::System::Boolean IgnoreInEditor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFOLLOWVISIBILITY_IGNOREINEDITOR_OFFSET))(this);
		}

		::System::Void AwakePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFOLLOWVISIBILITY_AWAKEPLUGIN_OFFSET))(this);
		}

		::System::Void DestroyPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFOLLOWVISIBILITY_DESTROYPLUGIN_OFFSET))(this);
		}

		::System::Void ResetPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFOLLOWVISIBILITY_RESETPLUGIN_OFFSET))(this);
		}

		::System::Void DisposePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFOLLOWVISIBILITY_DISPOSEPLUGIN_OFFSET))(this);
		}

	};
}
