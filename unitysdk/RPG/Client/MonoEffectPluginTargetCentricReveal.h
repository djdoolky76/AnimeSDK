#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginBase.h"
class KJDIHDCAHBI;
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOEFFECTPLUGINTARGETCENTRICREVEAL_AWAKEPLUGIN_OFFSET UNITYSDK_OFFSET(0x1ADEC9B0)
#define RPG_CLIENT_MONOEFFECTPLUGINTARGETCENTRICREVEAL_CTOR_OFFSET UNITYSDK_OFFSET(0x1ADECC30)
#define RPG_CLIENT_MONOEFFECTPLUGINTARGETCENTRICREVEAL_DISPOSEPLUGIN_OFFSET UNITYSDK_OFFSET(0x1ADECAF0)
#define RPG_CLIENT_MONOEFFECTPLUGINTARGETCENTRICREVEAL_GET_ENABLE_OFFSET UNITYSDK_OFFSET(0x1ADEC940)
#define RPG_CLIENT_MONOEFFECTPLUGINTARGETCENTRICREVEAL_GET_RADIUS_OFFSET UNITYSDK_OFFSET(0x1ADEC950)
#define RPG_CLIENT_MONOEFFECTPLUGINTARGETCENTRICREVEAL_GET_SOFTNESS_OFFSET UNITYSDK_OFFSET(0x1ADEC960)
#define RPG_CLIENT_MONOEFFECTPLUGINTARGETCENTRICREVEAL_GET_TARGETTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1ADEC930)
#define RPG_CLIENT_MONOEFFECTPLUGINTARGETCENTRICREVEAL_IGNOREINEDITOR_OFFSET UNITYSDK_OFFSET(0x1ADEC970)
#define RPG_CLIENT_MONOEFFECTPLUGINTARGETCENTRICREVEAL_RESETPLUGIN_OFFSET UNITYSDK_OFFSET(0x1ADECAA0)
#define RPG_CLIENT_MONOEFFECTPLUGINTARGETCENTRICREVEAL_SETREVEALPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1ADECB80)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginTargetCentricReveal_TypeDefinitionIndex = 72086;

	class MonoEffectPluginTargetCentricReveal : public ::RPG::Client::MonoEffectPluginBase
	{
	public:
		::System::Boolean CBADMJBKGEJ; // 0x28
		::System::Byte _padding0[0x3];
		::System::Single PHPKIPNNKLI; // 0x2C
		::System::Single LHPONOAHOLC; // 0x30
		::System::Byte _padding1[0x4];
		::UnityEngine::Transform* LEAGHKJLJPF; // 0x38
		::KJDIHDCAHBI* NGHLJLODNDC; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINTARGETCENTRICREVEAL_CTOR_OFFSET))(this);
		}

		::UnityEngine::Transform* get_TargetTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINTARGETCENTRICREVEAL_GET_TARGETTRANSFORM_OFFSET))(this);
		}

		::System::Boolean get_Enable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINTARGETCENTRICREVEAL_GET_ENABLE_OFFSET))(this);
		}

		::System::Single get_Radius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINTARGETCENTRICREVEAL_GET_RADIUS_OFFSET))(this);
		}

		::System::Single get_Softness()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINTARGETCENTRICREVEAL_GET_SOFTNESS_OFFSET))(this);
		}

		::System::Boolean IgnoreInEditor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINTARGETCENTRICREVEAL_IGNOREINEDITOR_OFFSET))(this);
		}

		::System::Void AwakePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINTARGETCENTRICREVEAL_AWAKEPLUGIN_OFFSET))(this);
		}

		::System::Void ResetPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINTARGETCENTRICREVEAL_RESETPLUGIN_OFFSET))(this);
		}

		::System::Void DisposePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINTARGETCENTRICREVEAL_DISPOSEPLUGIN_OFFSET))(this);
		}

		::System::Void SetRevealProperties(::RPG::GameCore::GameEntity* a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINTARGETCENTRICREVEAL_SETREVEALPROPERTIES_OFFSET))(this, a1, a2, a3);
		}

	};
}
