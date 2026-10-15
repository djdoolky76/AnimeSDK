#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HIOEAKHGILF;
class LPNIPNDEDDL;
namespace Entitas { class IEntity; }
namespace UnityEngine { class GameObject; }

#define LPNIPNDEDDL___C__DISPLAYCLASS46_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB82A4E0)
#define LPNIPNDEDDL___C__DISPLAYCLASS46_0__INITBORDERPLATEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0xB82DC40)

inline static constexpr unsigned int LPNIPNDEDDL___c__DisplayClass46_0_TypeDefinitionIndex = 76892;

	class LPNIPNDEDDL___c__DisplayClass46_0 : public ::System::Object
	{
	public:
		::LPNIPNDEDDL* __4__this; // 0x10
		::HIOEAKHGILF* enterEntityCaptured; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPNIPNDEDDL___C__DISPLAYCLASS46_0_CTOR_OFFSET))(this);
		}

		::System::Void _InitBorderPlatEffect_b__0(::Entitas::IEntity* a1, ::UnityEngine::GameObject* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + LPNIPNDEDDL___C__DISPLAYCLASS46_0__INITBORDERPLATEFFECT_B__0_OFFSET))(this, a1, a2);
		}

	};
