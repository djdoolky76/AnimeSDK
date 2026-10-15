#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class UIPrefabLoader_LoadResult; }
namespace System { class Action; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_UIPREFABLOADER___C__DISPLAYCLASS12_0_CTOR_OFFSET UNITYSDK_OFFSET(0xE3E9950)
#define RPG_CLIENT_UIPREFABLOADER___C__DISPLAYCLASS12_0__ASYNCLOADPREFAB_B__0_OFFSET UNITYSDK_OFFSET(0xE3EA5D0)

namespace RPG::Client
{
	class UIPrefabLoader___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPREFABLOADER___C__DISPLAYCLASS12_0_CTOR_OFFSET))(this);
		}

		::System::Void _AsyncLoadPrefab_b__0(::RPG::Client::UIPrefabLoader_LoadResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIPrefabLoader_LoadResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPREFABLOADER___C__DISPLAYCLASS12_0__ASYNCLOADPREFAB_B__0_OFFSET))(this, a1);
		}

	};
}
