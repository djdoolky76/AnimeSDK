#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FMPCODLIOLG;
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class GameObject; }

#define FMPCODLIOLG___C__DISPLAYCLASS40_0_CTOR_OFFSET UNITYSDK_OFFSET(0x15865020)
#define FMPCODLIOLG___C__DISPLAYCLASS40_0___ASYNCLOADPREFAB_B__0_OFFSET UNITYSDK_OFFSET(0x15866680)

inline static constexpr unsigned int FMPCODLIOLG___c__DisplayClass40_0_TypeDefinitionIndex = 73026;

	class FMPCODLIOLG___c__DisplayClass40_0 : public ::System::Object
	{
	public:
		::FMPCODLIOLG* __4__this; // 0x10
		::System::Action_1<::UnityEngine::GameObject*>* callback; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMPCODLIOLG___C__DISPLAYCLASS40_0_CTOR_OFFSET))(this);
		}

		::System::Void __AsyncLoadPrefab_b__0(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + FMPCODLIOLG___C__DISPLAYCLASS40_0___ASYNCLOADPREFAB_B__0_OFFSET))(this, a1);
		}

	};
