#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Entitas { class IEntity; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class GameObject; }

#define MNCOPNHONHO___C__DISPLAYCLASS217_0_CTOR_OFFSET UNITYSDK_OFFSET(0x18922350)
#define MNCOPNHONHO___C__DISPLAYCLASS217_0__FIREEFFECTLIST_B__0_OFFSET UNITYSDK_OFFSET(0x1892ED80)

inline static constexpr unsigned int MNCOPNHONHO___c__DisplayClass217_0_TypeDefinitionIndex = 79026;

	class MNCOPNHONHO___c__DisplayClass217_0 : public ::System::Object
	{
	public:
		::System::Action_2<::Entitas::IEntity*, ::UnityEngine::GameObject*>* __9__0; // 0x10
		::System::Action* loadedCallback; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNCOPNHONHO___C__DISPLAYCLASS217_0_CTOR_OFFSET))(this);
		}

		::System::Void _FireEffectList_b__0(::Entitas::IEntity* a1, ::UnityEngine::GameObject* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MNCOPNHONHO___C__DISPLAYCLASS217_0__FIREEFFECTLIST_B__0_OFFSET))(this, a1, a2);
		}

	};
