#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
class BOKPPKAHPIP;
namespace RPG::Client { class MonoEffect; }
namespace UnityEngine { class Transform; }

#define BOKPPKAHPIP___C__DISPLAYCLASS18_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1B5F14A0)
#define BOKPPKAHPIP___C__DISPLAYCLASS18_0___STARTROUTEBGCURVEEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0x1B5F14F0)

inline static constexpr unsigned int BOKPPKAHPIP___c__DisplayClass18_0_TypeDefinitionIndex = 81572;

	class BOKPPKAHPIP___c__DisplayClass18_0 : public ::System::Object
	{
	public:
		::UnityEngine::Transform* attachTransform; // 0x10
		::BOKPPKAHPIP* __4__this; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOKPPKAHPIP___C__DISPLAYCLASS18_0_CTOR_OFFSET))(this);
		}

		::System::Void __StartRouteBgCurveEffect_b__0(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + BOKPPKAHPIP___C__DISPLAYCLASS18_0___STARTROUTEBGCURVEEFFECT_B__0_OFFSET))(this, a1, a2);
		}

	};
