#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
namespace RPG::Client { class MonoPrefabLightFadeInOutMonoPlugin; }
namespace UnityEngine { class Light; }

#define RPG_CLIENT_MONOPREFABLIGHTFADEINOUTBEHAVIOR_CTOR_OFFSET UNITYSDK_OFFSET(0xD857FF0)
#define RPG_CLIENT_MONOPREFABLIGHTFADEINOUTBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0xD857E90)
#define RPG_CLIENT_MONOPREFABLIGHTFADEINOUTBEHAVIOR_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xD857C40)
#define RPG_CLIENT_MONOPREFABLIGHTFADEINOUTBEHAVIOR_MEJILMGLMOC_OFFSET UNITYSDK_OFFSET(0xD857F10)

namespace RPG::Client
{
	class MonoPrefabLightFadeInOutBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		::Il2CppArray<::UnityEngine::Light*>* _TargetLights; // 0x38
		::Il2CppArray<::System::Single>* _TargetLightsIntensity; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPREFABLIGHTFADEINOUTBEHAVIOR_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPREFABLIGHTFADEINOUTBEHAVIOR_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void MEJILMGLMOC(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPREFABLIGHTFADEINOUTBEHAVIOR_MEJILMGLMOC_OFFSET))(this, a1);
		}

		::RPG::Client::MonoPrefabLightFadeInOutMonoPlugin* get__OwnerMonoPlugin()
		{
			return ((::RPG::Client::MonoPrefabLightFadeInOutMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPREFABLIGHTFADEINOUTBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET))(this);
		}

	};
}
