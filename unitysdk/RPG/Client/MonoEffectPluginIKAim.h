#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginBase.h"
class CJCBGHLDNAG;
namespace RPG::Client { class AimSolver; }

#define RPG_CLIENT_MONOEFFECTPLUGINIKAIM_AWAKEPLUGIN_OFFSET UNITYSDK_OFFSET(0x193A7360)
#define RPG_CLIENT_MONOEFFECTPLUGINIKAIM_CTOR_OFFSET UNITYSDK_OFFSET(0x193A75D0)
#define RPG_CLIENT_MONOEFFECTPLUGINIKAIM_DESTROYPLUGIN_OFFSET UNITYSDK_OFFSET(0x193A7450)
#define RPG_CLIENT_MONOEFFECTPLUGINIKAIM_DISPOSEPLUGIN_OFFSET UNITYSDK_OFFSET(0x193A72D0)
#define RPG_CLIENT_MONOEFFECTPLUGINIKAIM_ENDOFLATETICK_OFFSET UNITYSDK_OFFSET(0x193A7530)
#define RPG_CLIENT_MONOEFFECTPLUGINIKAIM_GET_BEHAVIOR_OFFSET UNITYSDK_OFFSET(0x193A75C0)
#define RPG_CLIENT_MONOEFFECTPLUGINIKAIM_IGNOREINEDITOR_OFFSET UNITYSDK_OFFSET(0x193A7200)
#define RPG_CLIENT_MONOEFFECTPLUGINIKAIM_RESETPLUGIN_OFFSET UNITYSDK_OFFSET(0x193A7240)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginIKAim_TypeDefinitionIndex = 72037;

	class MonoEffectPluginIKAim : public ::RPG::Client::MonoEffectPluginBase
	{
	public:
		::RPG::Client::AimSolver* Solver; // 0x28
		::CJCBGHLDNAG* KADDKEGNCHE; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINIKAIM_CTOR_OFFSET))(this);
		}

		::System::Boolean IgnoreInEditor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINIKAIM_IGNOREINEDITOR_OFFSET))(this);
		}

		::System::Void ResetPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINIKAIM_RESETPLUGIN_OFFSET))(this);
		}

		::System::Void DisposePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINIKAIM_DISPOSEPLUGIN_OFFSET))(this);
		}

		::System::Void AwakePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINIKAIM_AWAKEPLUGIN_OFFSET))(this);
		}

		::System::Void DestroyPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINIKAIM_DESTROYPLUGIN_OFFSET))(this);
		}

		::System::Void EndOfLateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINIKAIM_ENDOFLATETICK_OFFSET))(this, a1);
		}

		::CJCBGHLDNAG* get_Behavior()
		{
			return ((::CJCBGHLDNAG*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINIKAIM_GET_BEHAVIOR_OFFSET))(this);
		}

	};
}
