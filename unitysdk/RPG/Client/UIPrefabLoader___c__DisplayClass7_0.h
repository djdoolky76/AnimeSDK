#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ViewCacheType.h"
#include "unitysdk/System/Object.h"
class AJEKOLJDHAK;
class IKMOKCKMNMC;
namespace RPG::Client { class UIPrefabLoader_LoadResult; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_UIPREFABLOADER___C__DISPLAYCLASS7_0_CTOR_OFFSET UNITYSDK_OFFSET(0xE3E9030)
#define RPG_CLIENT_UIPREFABLOADER___C__DISPLAYCLASS7_0__ASYNCLOADVIEWPREFAB_B__0_OFFSET UNITYSDK_OFFSET(0xE3EA800)
#define RPG_CLIENT_UIPREFABLOADER___C__DISPLAYCLASS7_0__ASYNCLOADVIEWPREFAB_B__1_OFFSET UNITYSDK_OFFSET(0xE3EA840)

namespace RPG::Client
{
	class UIPrefabLoader___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::IKMOKCKMNMC* cacheEntry; // 0x10
		::AJEKOLJDHAK* viewCache; // 0x18
		::System::Action* callback; // 0x20
		::System::String* path; // 0x28
		::RPG::Client::ViewCacheType cacheType; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPREFABLOADER___C__DISPLAYCLASS7_0_CTOR_OFFSET))(this);
		}

		::System::Void _AsyncLoadViewPrefab_b__0(::RPG::Client::UIPrefabLoader_LoadResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIPrefabLoader_LoadResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPREFABLOADER___C__DISPLAYCLASS7_0__ASYNCLOADVIEWPREFAB_B__0_OFFSET))(this, a1);
		}

		::System::Void _AsyncLoadViewPrefab_b__1(::RPG::Client::UIPrefabLoader_LoadResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIPrefabLoader_LoadResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPREFABLOADER___C__DISPLAYCLASS7_0__ASYNCLOADVIEWPREFAB_B__1_OFFSET))(this, a1);
		}

	};
}
