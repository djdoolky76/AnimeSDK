#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class RectTransform; }

#define DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS21_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1FE39BD0)
#define DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS21_0__DOPIVOTY_B__0_OFFSET UNITYSDK_OFFSET(0x1FE3BE80)
#define DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS21_0__DOPIVOTY_B__1_OFFSET UNITYSDK_OFFSET(0x1FE3BEC0)

namespace DG::Tweening
{
	inline static constexpr unsigned int ShortcutExtensions46___c__DisplayClass21_0_TypeDefinitionIndex = 34660;

	class ShortcutExtensions46___c__DisplayClass21_0 : public ::System::Object
	{
	public:
		::UnityEngine::RectTransform* target; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS21_0__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector2 _DOPivotY_b__0()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS21_0__DOPIVOTY_B__0_OFFSET))(this);
		}

		::System::Void _DOPivotY_b__1(::UnityEngine::Vector2 x)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS21_0__DOPIVOTY_B__1_OFFSET))(this, x);
		}
	};
}
