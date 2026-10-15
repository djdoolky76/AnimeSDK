#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BOGCBDLBHFK;
class KNICEONOCBK;
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class GameObject; }

#define KNICEONOCBK___C__DISPLAYCLASS5_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB57F2E0)
#define KNICEONOCBK___C__DISPLAYCLASS5_0__LOADASSETASYNC_B__0_OFFSET UNITYSDK_OFFSET(0xB57F4A0)

inline static constexpr unsigned int KNICEONOCBK___c__DisplayClass5_0_TypeDefinitionIndex = 76619;

	class KNICEONOCBK___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::BOGCBDLBHFK* entity; // 0x10
		::KNICEONOCBK* __4__this; // 0x18
		::System::Action_1<::BOGCBDLBHFK*>* callback; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNICEONOCBK___C__DISPLAYCLASS5_0_CTOR_OFFSET))(this);
		}

		::System::Void _LoadAssetAsync_b__0(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + KNICEONOCBK___C__DISPLAYCLASS5_0__LOADASSETASYNC_B__0_OFFSET))(this, a1);
		}

	};
