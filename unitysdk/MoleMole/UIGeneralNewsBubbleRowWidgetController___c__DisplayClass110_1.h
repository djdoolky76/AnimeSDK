#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS110_1__CTOR_OFFSET UNITYSDK_OFFSET(0x166BFE90)
#define MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS110_1__DOFADEOUT_B__4_OFFSET UNITYSDK_OFFSET(0x166BFFC0)
#define MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS110_1__DOFADEOUT_B__5_OFFSET UNITYSDK_OFFSET(0x166C0000)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralNewsBubbleRowWidgetController___c__DisplayClass110_1_TypeDefinitionIndex = 80554;

	template <typename T>
	class UIGeneralNewsBubbleRowWidgetController___c__DisplayClass110_1 : public ::System::Object
	{
	public:
		::UnityEngine::RectTransform* root; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS110_1__CTOR_OFFSET))(this);
		}

		::System::Single _DoFadeOut_b__4()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS110_1__DOFADEOUT_B__4_OFFSET))(this);
		}

		::System::Void _DoFadeOut_b__5(::System::Single v)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS110_1__DOFADEOUT_B__5_OFFSET))(this, v);
		}
	};
}
