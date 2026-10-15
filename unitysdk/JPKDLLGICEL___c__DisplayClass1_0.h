#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MonoEffect; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JPKDLLGICEL___C__DISPLAYCLASS1_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB2C5510)
#define JPKDLLGICEL___C__DISPLAYCLASS1_0__TRIGGEREFFECTS_B__0_OFFSET UNITYSDK_OFFSET(0xB2C58E0)

inline static constexpr unsigned int JPKDLLGICEL___c__DisplayClass1_0_TypeDefinitionIndex = 52470;

	class JPKDLLGICEL___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* targetRendererNames; // 0x10
		::System::Action* __9__0; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPKDLLGICEL___C__DISPLAYCLASS1_0_CTOR_OFFSET))(this);
		}

		::System::Void _TriggerEffects_b__0(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + JPKDLLGICEL___C__DISPLAYCLASS1_0__TRIGGEREFFECTS_B__0_OFFSET))(this, a1, a2);
		}

	};
