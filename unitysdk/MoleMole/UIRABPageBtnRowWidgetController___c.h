#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KFEJPGKMPMD;
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIRABPAGEBTNROWWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15C54B10)
#define MOLEMOLE_UIRABPAGEBTNROWWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15C54B50)
#define MOLEMOLE_UIRABPAGEBTNROWWIDGETCONTROLLER___C__ISLEVEL1ACHIEVEDANDNOTFINISH310_B__63_0_OFFSET UNITYSDK_OFFSET(0x15C550D0)
#define MOLEMOLE_UIRABPAGEBTNROWWIDGETCONTROLLER___C__ONLAYERSINFOBTNCLICK_B__54_0_OFFSET UNITYSDK_OFFSET(0x15C54B60)
#define MOLEMOLE_UIRABPAGEBTNROWWIDGETCONTROLLER___C__ONSPECIALTRAININGINFOBTNCLICK_B__55_0_OFFSET UNITYSDK_OFFSET(0x15C54D30)
#define MOLEMOLE_UIRABPAGEBTNROWWIDGETCONTROLLER___C__ONTASKINFOBTNCLICK_B__56_0_OFFSET UNITYSDK_OFFSET(0x15C54F00)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABPageBtnRowWidgetController___c_TypeDefinitionIndex = 55252;

	class UIRABPageBtnRowWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIRABPageBtnRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x47230);
		}
		static ::System::Action** StaticGet___9__56_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIRABPageBtnRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x47238);
		}
		static ::System::Action** StaticGet___9__54_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIRABPageBtnRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x47240);
		}
		static ::System::Func_2<::KFEJPGKMPMD*, ::System::Boolean>** StaticGet___9__63_0()
		{
			return (::System::Func_2<::KFEJPGKMPMD*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIRABPageBtnRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x47248);
		}
		static ::System::Action** StaticGet___9__55_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIRABPageBtnRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x47250);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABPAGEBTNROWWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABPAGEBTNROWWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnLayersInfoBtnClick_b__54_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABPAGEBTNROWWIDGETCONTROLLER___C__ONLAYERSINFOBTNCLICK_B__54_0_OFFSET))(this);
		}

		::System::Void _OnSpecialTrainingInfoBtnClick_b__55_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABPAGEBTNROWWIDGETCONTROLLER___C__ONSPECIALTRAININGINFOBTNCLICK_B__55_0_OFFSET))(this);
		}

		::System::Void _OnTaskInfoBtnClick_b__56_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABPAGEBTNROWWIDGETCONTROLLER___C__ONTASKINFOBTNCLICK_B__56_0_OFFSET))(this);
		}

		::System::Boolean _IsLevel1AchievedAndNotFinish310_b__63_0(::KFEJPGKMPMD* row)
		{
			return ((::System::Boolean(*)(::PVOID, ::KFEJPGKMPMD*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABPAGEBTNROWWIDGETCONTROLLER___C__ISLEVEL1ACHIEVEDANDNOTFINISH310_B__63_0_OFFSET))(this, row);
		}
	};
}
