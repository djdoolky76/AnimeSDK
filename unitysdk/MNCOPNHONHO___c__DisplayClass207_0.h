#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Entitas { class IEntity; }
namespace System { class Action; }
namespace UnityEngine { class GameObject; }

#define MNCOPNHONHO___C__DISPLAYCLASS207_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB9F8400)
#define MNCOPNHONHO___C__DISPLAYCLASS207_0__FIREEFFECTLIST_B__0_OFFSET UNITYSDK_OFFSET(0xBA048A0)

inline static constexpr unsigned int MNCOPNHONHO___c__DisplayClass207_0_TypeDefinitionIndex = 76696;

	class MNCOPNHONHO___c__DisplayClass207_0 : public ::System::Object
	{
	public:
		::System::Action* loadedCallback; // 0x10
		::System::Action* __9__0; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNCOPNHONHO___C__DISPLAYCLASS207_0_CTOR_OFFSET))(this);
		}

		::System::Void _FireEffectList_b__0(::Entitas::IEntity* a1, ::UnityEngine::GameObject* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MNCOPNHONHO___C__DISPLAYCLASS207_0__FIREEFFECTLIST_B__0_OFFSET))(this, a1, a2);
		}

	};
