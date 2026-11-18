#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OOHBEPCMHMC.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/UINewbieGuideBottomTabRowWidgetController_ScoreSortItem.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UINEWBIEGUIDEBOTTOMTABROWWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x168CF9C0)
#define MOLEMOLE_UINEWBIEGUIDEBOTTOMTABROWWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x168CFA00)
#define MOLEMOLE_UINEWBIEGUIDEBOTTOMTABROWWIDGETCONTROLLER___C__GETSCORERECOMMENDTEXT_B__13_0_OFFSET UNITYSDK_OFFSET(0x168CFA10)
#define MOLEMOLE_UINEWBIEGUIDEBOTTOMTABROWWIDGETCONTROLLER___C__GETSCORERECOMMENDTEXT_B__13_1_OFFSET UNITYSDK_OFFSET(0x168CFA20)
#define MOLEMOLE_UINEWBIEGUIDEBOTTOMTABROWWIDGETCONTROLLER___C__GETSCORERECOMMENDTEXT_B__13_2_OFFSET UNITYSDK_OFFSET(0x168CFA30)

namespace MoleMole
{
	inline static constexpr unsigned int UINewbieGuideBottomTabRowWidgetController___c_TypeDefinitionIndex = 45504;

	class UINewbieGuideBottomTabRowWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Object*, ::OOHBEPCMHMC>** StaticGet___9__13_1()
		{
			return (::System::Func_2<::System::Object*, ::OOHBEPCMHMC>**)Il2CppClass::FromTypeDefinitionIndex(UINewbieGuideBottomTabRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x422A0);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UINewbieGuideBottomTabRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x422A8);
		}
		static ::System::Func_2<::System::Object*, ::System::Boolean>** StaticGet___9__13_0()
		{
			return (::System::Func_2<::System::Object*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UINewbieGuideBottomTabRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x422B0);
		}
		static ::System::Func_2<::System::Object*, ::System::Single>** StaticGet___9__13_2()
		{
			return (::System::Func_2<::System::Object*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(UINewbieGuideBottomTabRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x422B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEBOTTOMTABROWWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEBOTTOMTABROWWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetScoreRecommendText_b__13_0(::MoleMole::UINewbieGuideBottomTabRowWidgetController_ScoreSortItem item)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UINewbieGuideBottomTabRowWidgetController_ScoreSortItem))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEBOTTOMTABROWWIDGETCONTROLLER___C__GETSCORERECOMMENDTEXT_B__13_0_OFFSET))(this, item);
		}

		::OOHBEPCMHMC _GetScoreRecommendText_b__13_1(::MoleMole::UINewbieGuideBottomTabRowWidgetController_ScoreSortItem item)
		{
			return ((::OOHBEPCMHMC(*)(::PVOID, ::MoleMole::UINewbieGuideBottomTabRowWidgetController_ScoreSortItem))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEBOTTOMTABROWWIDGETCONTROLLER___C__GETSCORERECOMMENDTEXT_B__13_1_OFFSET))(this, item);
		}

		::System::Single _GetScoreRecommendText_b__13_2(::MoleMole::UINewbieGuideBottomTabRowWidgetController_ScoreSortItem item)
		{
			return ((::System::Single(*)(::PVOID, ::MoleMole::UINewbieGuideBottomTabRowWidgetController_ScoreSortItem))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEBOTTOMTABROWWIDGETCONTROLLER___C__GETSCORERECOMMENDTEXT_B__13_2_OFFSET))(this, item);
		}
	};
}
