#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/System/Object.h"
class POIDGGOOMHO;
namespace RPG::Client { class MonoEffect; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define POIDGGOOMHO___C__DISPLAYCLASS0_0_CTOR_OFFSET UNITYSDK_OFFSET(0xC3686B0)
#define POIDGGOOMHO___C__DISPLAYCLASS0_0___APPLYEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0xC36B6C0)

inline static constexpr unsigned int POIDGGOOMHO___c__DisplayClass0_0_TypeDefinitionIndex = 80237;

	class POIDGGOOMHO___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::POIDGGOOMHO* __4__this; // 0x10
		::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>* __9__0; // 0x18
		::System::Int32 generation; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POIDGGOOMHO___C__DISPLAYCLASS0_0_CTOR_OFFSET))(this);
		}

		::System::Void __ApplyEffect_b__0(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + POIDGGOOMHO___C__DISPLAYCLASS0_0___APPLYEFFECT_B__0_OFFSET))(this, a1, a2);
		}

	};
