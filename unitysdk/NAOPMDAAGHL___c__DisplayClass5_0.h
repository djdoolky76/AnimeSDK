#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NAOPMDAAGHL;
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace UnityEngine { class Transform; }

#define NAOPMDAAGHL___C__DISPLAYCLASS5_0_CTOR_OFFSET UNITYSDK_OFFSET(0xBAA8440)
#define NAOPMDAAGHL___C__DISPLAYCLASS5_0__TRIGGEREFFECTASYNC_B__0_OFFSET UNITYSDK_OFFSET(0xBAB17B0)

inline static constexpr unsigned int NAOPMDAAGHL___c__DisplayClass5_0_TypeDefinitionIndex = 77263;

	class NAOPMDAAGHL___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::UnityEngine::Transform* attachRoot; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAOPMDAAGHL___C__DISPLAYCLASS5_0_CTOR_OFFSET))(this);
		}

		::System::Void _TriggerEffectAsync_b__0(::NAOPMDAAGHL* a1, ::RPG::Client::LittleGame::ElfRestaurantGameEntity* a2, ::UnityEngine::Transform* a3)
		{
			return ((::System::Void(*)(::PVOID, ::NAOPMDAAGHL*, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + NAOPMDAAGHL___C__DISPLAYCLASS5_0__TRIGGEREFFECTASYNC_B__0_OFFSET))(this, a1, a2, a3);
		}

	};
