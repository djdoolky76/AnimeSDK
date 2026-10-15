#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BOGCBDLBHFK;
class KNICEONOCBK;
namespace System { class Action; }
namespace UnityEngine { class GameObject; }

#define KNICEONOCBK___C__DISPLAYCLASS5_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB585EE0)
#define KNICEONOCBK___C__DISPLAYCLASS5_0__LOADASSETASYNC_B__0_OFFSET UNITYSDK_OFFSET(0xB5860A0)

	class KNICEONOCBK___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10
		::BOGCBDLBHFK* entity; // 0x18
		::KNICEONOCBK* __4__this; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNICEONOCBK___C__DISPLAYCLASS5_0_CTOR_OFFSET))(this);
		}

		::System::Void _LoadAssetAsync_b__0(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + KNICEONOCBK___C__DISPLAYCLASS5_0__LOADASSETASYNC_B__0_OFFSET))(this, a1);
		}

	};
