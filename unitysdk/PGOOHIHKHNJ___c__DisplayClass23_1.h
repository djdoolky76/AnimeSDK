#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
namespace RPG::Client { class MonoEffect; }
namespace System { class Object; }

#define PGOOHIHKHNJ___C__DISPLAYCLASS23_1_CTOR_OFFSET UNITYSDK_OFFSET(0xC22D260)
#define PGOOHIHKHNJ___C__DISPLAYCLASS23_1___PLAYDAMAGEHITEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0xC22D670)

inline static constexpr unsigned int PGOOHIHKHNJ___c__DisplayClass23_1_TypeDefinitionIndex = 54984;

	template <typename T>
	class PGOOHIHKHNJ___c__DisplayClass23_1 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals1; // 0x10
		::System::Boolean ignorePrefabAttachPoint; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGOOHIHKHNJ___C__DISPLAYCLASS23_1_CTOR_OFFSET))(this);
		}

		::System::Void __PlayDamageHitEffect_b__0(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + PGOOHIHKHNJ___C__DISPLAYCLASS23_1___PLAYDAMAGEHITEFFECT_B__0_OFFSET))(this, a1, a2);
		}

	};
