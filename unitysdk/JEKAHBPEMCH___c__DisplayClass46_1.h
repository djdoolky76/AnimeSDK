#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Entitas { class IEntity; }
namespace RPG::GameCore { class FiveDimEffectItem; }
namespace System { class Object; }
namespace UnityEngine { class GameObject; }

#define JEKAHBPEMCH___C__DISPLAYCLASS46_1_CTOR_OFFSET UNITYSDK_OFFSET(0x16636F10)
#define JEKAHBPEMCH___C__DISPLAYCLASS46_1__FIREPLAYERBRAKEEFFECTS_B__0_OFFSET UNITYSDK_OFFSET(0x16638040)

inline static constexpr unsigned int JEKAHBPEMCH___c__DisplayClass46_1_TypeDefinitionIndex = 76711;

	template <typename T>
	class JEKAHBPEMCH___c__DisplayClass46_1 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals1; // 0x10
		::RPG::GameCore::FiveDimEffectItem* effectItem; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEKAHBPEMCH___C__DISPLAYCLASS46_1_CTOR_OFFSET))(this);
		}

		::System::Void _FirePlayerBrakeEffects_b__0(::Entitas::IEntity* a1, ::UnityEngine::GameObject* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + JEKAHBPEMCH___C__DISPLAYCLASS46_1__FIREPLAYERBRAKEEFFECTS_B__0_OFFSET))(this, a1, a2);
		}

	};
