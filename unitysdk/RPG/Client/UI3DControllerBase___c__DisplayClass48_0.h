#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_UI3DCONTROLLERBASE___C__DISPLAYCLASS48_0_CTOR_OFFSET UNITYSDK_OFFSET(0xE356E70)
#define RPG_CLIENT_UI3DCONTROLLERBASE___C__DISPLAYCLASS48_0__ASYNCLOADPREFAB_B__0_OFFSET UNITYSDK_OFFSET(0xE356E80)

namespace RPG::Client
{
	inline static constexpr unsigned int UI3DControllerBase___c__DisplayClass48_0_TypeDefinitionIndex = 73001;

	class UI3DControllerBase___c__DisplayClass48_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE___C__DISPLAYCLASS48_0_CTOR_OFFSET))(this);
		}

		::System::Void _AsyncLoadPrefab_b__0(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE___C__DISPLAYCLASS48_0__ASYNCLOADPREFAB_B__0_OFFSET))(this, a1);
		}

	};
}
