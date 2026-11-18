#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace DG::Tweening { class Tweener; }
namespace UnityEngine::UI { class LayoutElement; }

#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER___C__DISPLAYCLASS148_1__CTOR_OFFSET UNITYSDK_OFFSET(0x18FC5C70)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER___C__DISPLAYCLASS148_1__PLAYCHANGETRACKTIPSFADEOUT_B__1_OFFSET UNITYSDK_OFFSET(0x18FC5C80)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER___C__DISPLAYCLASS148_1__PLAYCHANGETRACKTIPSFADEOUT_B__2_OFFSET UNITYSDK_OFFSET(0x18FC5CB0)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER___C__DISPLAYCLASS148_1__PLAYCHANGETRACKTIPSFADEOUT_B__3_OFFSET UNITYSDK_OFFSET(0x18FC5CE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMissionTipsRowWidgetController___c__DisplayClass148_1_TypeDefinitionIndex = 71119;

	template <typename T>
	class UIMissionTipsRowWidgetController___c__DisplayClass148_1 : public ::System::Object
	{
	public:
		::DG::Tweening::Tweener* tweener; // 0x10
		::System::Object* CS___8__locals1; // 0x18
		::UnityEngine::UI::LayoutElement* layoutElement; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER___C__DISPLAYCLASS148_1__CTOR_OFFSET))(this);
		}

		::System::Single _PlayChangeTrackTipsFadeOut_b__1()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER___C__DISPLAYCLASS148_1__PLAYCHANGETRACKTIPSFADEOUT_B__1_OFFSET))(this);
		}

		::System::Void _PlayChangeTrackTipsFadeOut_b__2(::System::Single t)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER___C__DISPLAYCLASS148_1__PLAYCHANGETRACKTIPSFADEOUT_B__2_OFFSET))(this, t);
		}

		::System::Void _PlayChangeTrackTipsFadeOut_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER___C__DISPLAYCLASS148_1__PLAYCHANGETRACKTIPSFADEOUT_B__3_OFFSET))(this);
		}
	};
}
