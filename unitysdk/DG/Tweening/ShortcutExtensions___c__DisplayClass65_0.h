#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace DG::Tweening { class Sequence; }
namespace UnityEngine { class Transform; }

#define DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS65_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1FDDF440)
#define DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS65_0__DOLOCALJUMP_B__0_OFFSET UNITYSDK_OFFSET(0x1FDDF450)
#define DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS65_0__DOLOCALJUMP_B__1_OFFSET UNITYSDK_OFFSET(0x1FDDF4A0)
#define DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS65_0__DOLOCALJUMP_B__2_OFFSET UNITYSDK_OFFSET(0x1FDDF4E0)
#define DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS65_0__DOLOCALJUMP_B__3_OFFSET UNITYSDK_OFFSET(0x1FDDF670)
#define DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS65_0__DOLOCALJUMP_B__4_OFFSET UNITYSDK_OFFSET(0x1FDDF6C0)
#define DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS65_0__DOLOCALJUMP_B__5_OFFSET UNITYSDK_OFFSET(0x1FDDF700)
#define DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS65_0__DOLOCALJUMP_B__6_OFFSET UNITYSDK_OFFSET(0x1FDDF750)

namespace DG::Tweening
{
	inline static constexpr unsigned int ShortcutExtensions___c__DisplayClass65_0_TypeDefinitionIndex = 27959;

	class ShortcutExtensions___c__DisplayClass65_0 : public ::System::Object
	{
	public:
		::DG::Tweening::Sequence* s; // 0x10
		::UnityEngine::Transform* target; // 0x18
		::UnityEngine::Vector3 endValue; // 0x20
		::System::Boolean offsetYSet; // 0x2C
		::System::Byte _padding0[0x3];
		::System::Single offsetY; // 0x30
		::System::Single startPosY; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS65_0__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 _DOLocalJump_b__0()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS65_0__DOLOCALJUMP_B__0_OFFSET))(this);
		}

		::System::Void _DOLocalJump_b__1(::UnityEngine::Vector3 x)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS65_0__DOLOCALJUMP_B__1_OFFSET))(this, x);
		}

		::System::Void _DOLocalJump_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS65_0__DOLOCALJUMP_B__2_OFFSET))(this);
		}

		::UnityEngine::Vector3 _DOLocalJump_b__3()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS65_0__DOLOCALJUMP_B__3_OFFSET))(this);
		}

		::System::Void _DOLocalJump_b__4(::UnityEngine::Vector3 x)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS65_0__DOLOCALJUMP_B__4_OFFSET))(this, x);
		}

		::UnityEngine::Vector3 _DOLocalJump_b__5()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS65_0__DOLOCALJUMP_B__5_OFFSET))(this);
		}

		::System::Void _DOLocalJump_b__6(::UnityEngine::Vector3 x)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS65_0__DOLOCALJUMP_B__6_OFFSET))(this, x);
		}
	};
}
