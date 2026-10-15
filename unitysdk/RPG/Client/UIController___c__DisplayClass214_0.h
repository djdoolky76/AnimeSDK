#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class UIController; }
namespace System { class Action; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_UICONTROLLER___C__DISPLAYCLASS214_0_CTOR_OFFSET UNITYSDK_OFFSET(0xE392360)
#define RPG_CLIENT_UICONTROLLER___C__DISPLAYCLASS214_0__ASYNCLOADPREFAB_B__0_OFFSET UNITYSDK_OFFSET(0xE3962B0)

namespace RPG::Client
{
	inline static constexpr unsigned int UIController___c__DisplayClass214_0_TypeDefinitionIndex = 73039;

	class UIController___c__DisplayClass214_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10
		::RPG::Client::UIController* __4__this; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICONTROLLER___C__DISPLAYCLASS214_0_CTOR_OFFSET))(this);
		}

		::System::Void _AsyncLoadPrefab_b__0(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICONTROLLER___C__DISPLAYCLASS214_0__ASYNCLOADPREFAB_B__0_OFFSET))(this, a1);
		}

	};
}
