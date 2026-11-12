#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DIHIHAPJLPK;
namespace EffectPlugin { class Effect_CustomFollowPlugin; }
namespace RPG::Client { class MonoEffectPluginPerformEventListener; }

#define DIHIHAPJLPK___C__DISPLAYCLASS13_0_CTOR_OFFSET UNITYSDK_OFFSET(0xF970370)
#define DIHIHAPJLPK___C__DISPLAYCLASS13_0___ONTRAILEFFECTCOMPLETE_B__0_OFFSET UNITYSDK_OFFSET(0xF970760)

inline static constexpr unsigned int DIHIHAPJLPK___c__DisplayClass13_0_TypeDefinitionIndex = 58540;

	class DIHIHAPJLPK___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::EffectPlugin::Effect_CustomFollowPlugin* followPlugin; // 0x10
		::RPG::Client::MonoEffectPluginPerformEventListener* performPlugin; // 0x18
		::DIHIHAPJLPK* __4__this; // 0x20
		::System::UInt32 energyNum; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIHIHAPJLPK___C__DISPLAYCLASS13_0_CTOR_OFFSET))(this);
		}

		::System::Void __OnTrailEffectComplete_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIHIHAPJLPK___C__DISPLAYCLASS13_0___ONTRAILEFFECTCOMPLETE_B__0_OFFSET))(this);
		}

	};
