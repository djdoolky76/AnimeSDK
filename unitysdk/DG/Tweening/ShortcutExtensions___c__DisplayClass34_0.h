#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace DG::Tweening { class Sequence; }
namespace UnityEngine { class Rigidbody; }

#define DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS34_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1FFC49A0)
#define DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS34_0__DOJUMP_B__0_OFFSET UNITYSDK_OFFSET(0x1FFC49B0)
#define DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS34_0__DOJUMP_B__1_OFFSET UNITYSDK_OFFSET(0x1FFC4A00)
#define DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS34_0__DOJUMP_B__2_OFFSET UNITYSDK_OFFSET(0x1FFC4BB0)
#define DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS34_0__DOJUMP_B__3_OFFSET UNITYSDK_OFFSET(0x1FFC4C00)

namespace DG::Tweening
{
	inline static constexpr unsigned int ShortcutExtensions___c__DisplayClass34_0_TypeDefinitionIndex = 27928;

	class ShortcutExtensions___c__DisplayClass34_0 : public ::System::Object
	{
	public:
		::UnityEngine::Rigidbody* target; // 0x10
		::DG::Tweening::Sequence* s; // 0x18
		::UnityEngine::Vector3 endValue; // 0x20
		::System::Single offsetY; // 0x2C
		::System::Single startPosY; // 0x30
		::System::Boolean offsetYSet; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS34_0__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 _DOJump_b__0()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS34_0__DOJUMP_B__0_OFFSET))(this);
		}

		::System::Void _DOJump_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS34_0__DOJUMP_B__1_OFFSET))(this);
		}

		::UnityEngine::Vector3 _DOJump_b__2()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS34_0__DOJUMP_B__2_OFFSET))(this);
		}

		::UnityEngine::Vector3 _DOJump_b__3()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS34_0__DOJUMP_B__3_OFFSET))(this);
		}
	};
}
