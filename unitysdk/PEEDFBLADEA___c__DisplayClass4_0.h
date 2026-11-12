#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TriggerEffectParamsRef.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
class PEEDFBLADEA;
namespace RPG::Client { class MonoEffect; }
namespace System { template <typename T> class Action_1; }

#define PEEDFBLADEA___C__DISPLAYCLASS4_0_CTOR_OFFSET UNITYSDK_OFFSET(0xC93B880)
#define PEEDFBLADEA___C__DISPLAYCLASS4_0__STARTEXITSWITCHOUT_B__0_OFFSET UNITYSDK_OFFSET(0xC93CC80)

inline static constexpr unsigned int PEEDFBLADEA___c__DisplayClass4_0_TypeDefinitionIndex = 81557;

	class PEEDFBLADEA___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::Int32>* onLoaded; // 0x10
		::System::Action_1<::System::Int32>* onLoadFailed; // 0x18
		::PEEDFBLADEA* __4__this; // 0x20
		::RPG::Client::TriggerEffectParamsRef triggerParamRef; // 0x28
		::System::Int32 exitFlightVersion; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEEDFBLADEA___C__DISPLAYCLASS4_0_CTOR_OFFSET))(this);
		}

		::System::Void _StartExitSwitchOut_b__0(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + PEEDFBLADEA___C__DISPLAYCLASS4_0__STARTEXITSWITCHOUT_B__0_OFFSET))(this, a1, a2);
		}

	};
