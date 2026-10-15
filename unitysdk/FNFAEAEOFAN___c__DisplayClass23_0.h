#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FNFAEAEOFAN;
namespace EffectPlugin { class Effect_CustomFollowPlugin; }
namespace RPG::Client { class MonoEffectPluginPerformEventListener; }
namespace UnityEngine { class GameObject; }

#define FNFAEAEOFAN___C__DISPLAYCLASS23_0_CTOR_OFFSET UNITYSDK_OFFSET(0x158626C0)
#define FNFAEAEOFAN___C__DISPLAYCLASS23_0___ONTRAILEFFECTCOMPLETE_B__0_OFFSET UNITYSDK_OFFSET(0x15862800)

inline static constexpr unsigned int FNFAEAEOFAN___c__DisplayClass23_0_TypeDefinitionIndex = 60611;

	class FNFAEAEOFAN___c__DisplayClass23_0 : public ::System::Object
	{
	public:
		::FNFAEAEOFAN* __4__this; // 0x10
		::RPG::Client::MonoEffectPluginPerformEventListener* performPlugin; // 0x18
		::EffectPlugin::Effect_CustomFollowPlugin* followPlugin; // 0x20
		::UnityEngine::GameObject* targetGo; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNFAEAEOFAN___C__DISPLAYCLASS23_0_CTOR_OFFSET))(this);
		}

		::System::Void __OnTrailEffectComplete_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNFAEAEOFAN___C__DISPLAYCLASS23_0___ONTRAILEFFECTCOMPLETE_B__0_OFFSET))(this);
		}

	};
