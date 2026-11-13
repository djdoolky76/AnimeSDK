#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
namespace RPG::Client { class MonoEffect; }
namespace System { template <typename T> class Action_1; }

#define PEEDFBLADEA___C__DISPLAYCLASS19_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1044A820)
#define PEEDFBLADEA___C__DISPLAYCLASS19_0___FIREEXITTELEPORTEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0x1044A880)

inline static constexpr unsigned int PEEDFBLADEA___c__DisplayClass19_0_TypeDefinitionIndex = 81553;

	class PEEDFBLADEA___c__DisplayClass19_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::Int32>* onLoadFailed; // 0x10
		::System::Int32 exitFlightVersion; // 0x18
		::System::Boolean callbackInvoked; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEEDFBLADEA___C__DISPLAYCLASS19_0_CTOR_OFFSET))(this);
		}

		::System::Void __FireExitTeleportEffect_b__0(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + PEEDFBLADEA___C__DISPLAYCLASS19_0___FIREEXITTELEPORTEFFECT_B__0_OFFSET))(this, a1, a2);
		}

	};
