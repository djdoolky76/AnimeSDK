#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginBase.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ParticleSystem; }

#define RPG_CLIENT_MONOEFFECTPLUGINPARTICLEREWIND_AWAKEPLUGIN_OFFSET UNITYSDK_OFFSET(0xD804B00)
#define RPG_CLIENT_MONOEFFECTPLUGINPARTICLEREWIND_BMCNDFBCCJG_OFFSET UNITYSDK_OFFSET(0xD805700)
#define RPG_CLIENT_MONOEFFECTPLUGINPARTICLEREWIND_CTOR_OFFSET UNITYSDK_OFFSET(0xD805870)
#define RPG_CLIENT_MONOEFFECTPLUGINPARTICLEREWIND_DISPOSEPLUGIN_OFFSET UNITYSDK_OFFSET(0xD8050D0)
#define RPG_CLIENT_MONOEFFECTPLUGINPARTICLEREWIND_EGNMELNENAC_OFFSET UNITYSDK_OFFSET(0xD8055C0)
#define RPG_CLIENT_MONOEFFECTPLUGINPARTICLEREWIND_HFOIDBJPGIL_OFFSET UNITYSDK_OFFSET(0xD804FC0)
#define RPG_CLIENT_MONOEFFECTPLUGINPARTICLEREWIND_IGNOREINEDITOR_OFFSET UNITYSDK_OFFSET(0xD804AC0)
#define RPG_CLIENT_MONOEFFECTPLUGINPARTICLEREWIND_INAHLJAPDAM_OFFSET UNITYSDK_OFFSET(0xD804BA0)
#define RPG_CLIENT_MONOEFFECTPLUGINPARTICLEREWIND_RESETPLUGIN_OFFSET UNITYSDK_OFFSET(0xD804B40)
#define RPG_CLIENT_MONOEFFECTPLUGINPARTICLEREWIND_TICK_OFFSET UNITYSDK_OFFSET(0xD805110)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginParticleRewind_TypeDefinitionIndex = 70091;

	class MonoEffectPluginParticleRewind : public ::RPG::Client::MonoEffectPluginBase
	{
	public:
		::Il2CppArray<::System::Object*>* rewindParticleSystems; // 0x28
		::System::Collections::Generic::List_1<::System::Object*>* FNLMDNHHPIE; // 0x30
		::Il2CppArray<::System::Single>* CHPIPIFPGHG; // 0x38
		::System::Boolean KDNIIDOBHML; // 0x40
		::System::Boolean BPMGFODJKLK; // 0x41
		::System::Byte _padding0[0x2];
		::System::Single KJGPBILGDHK; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPARTICLEREWIND_CTOR_OFFSET))(this);
		}

		::System::Boolean IgnoreInEditor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPARTICLEREWIND_IGNOREINEDITOR_OFFSET))(this);
		}

		::System::Void AwakePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPARTICLEREWIND_AWAKEPLUGIN_OFFSET))(this);
		}

		::System::Void ResetPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPARTICLEREWIND_RESETPLUGIN_OFFSET))(this);
		}

		::System::Void DisposePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPARTICLEREWIND_DISPOSEPLUGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPARTICLEREWIND_TICK_OFFSET))(this, a1);
		}

		::System::Void INAHLJAPDAM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPARTICLEREWIND_INAHLJAPDAM_OFFSET))(this);
		}

		::System::Void HFOIDBJPGIL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPARTICLEREWIND_HFOIDBJPGIL_OFFSET))(this);
		}

		::System::Void EGNMELNENAC(::UnityEngine::ParticleSystem* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPARTICLEREWIND_EGNMELNENAC_OFFSET))(this, a1, a2);
		}

		::System::Void BMCNDFBCCJG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPARTICLEREWIND_BMCNDFBCCJG_OFFSET))(this);
		}

	};
}
