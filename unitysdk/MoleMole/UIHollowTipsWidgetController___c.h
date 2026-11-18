#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace DG::Tweening { class TweenCallback; }

#define MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x195DCE70)
#define MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x195DCEB0)
#define MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER___C__DOANIMATION_B__8_2_OFFSET UNITYSDK_OFFSET(0x195DCEC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowTipsWidgetController___c_TypeDefinitionIndex = 87869;

	class UIHollowTipsWidgetController___c : public ::System::Object
	{
	public:
		static ::DG::Tweening::TweenCallback** StaticGet___9__8_2()
		{
			return (::DG::Tweening::TweenCallback**)Il2CppClass::FromTypeDefinitionIndex(UIHollowTipsWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x38ED0);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIHollowTipsWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x38ED8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _DoAnimation_b__8_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER___C__DOANIMATION_B__8_2_OFFSET))(this);
		}
	};
}
