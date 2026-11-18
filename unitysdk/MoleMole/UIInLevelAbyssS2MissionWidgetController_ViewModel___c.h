#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MIGLNLMDFLJ;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIINLEVELABYSSS2MISSIONWIDGETCONTROLLER_VIEWMODEL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x182B12F0)
#define MOLEMOLE_UIINLEVELABYSSS2MISSIONWIDGETCONTROLLER_VIEWMODEL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x182B1330)
#define MOLEMOLE_UIINLEVELABYSSS2MISSIONWIDGETCONTROLLER_VIEWMODEL___C__ONCREATEPROPERTY_B__13_1_OFFSET UNITYSDK_OFFSET(0x182B1340)
#define MOLEMOLE_UIINLEVELABYSSS2MISSIONWIDGETCONTROLLER_VIEWMODEL___C__ONCREATEPROPERTY_B__13_2_OFFSET UNITYSDK_OFFSET(0x182B1390)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelAbyssS2MissionWidgetController_ViewModel___c_TypeDefinitionIndex = 70382;

	class UIInLevelAbyssS2MissionWidgetController_ViewModel___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::MIGLNLMDFLJ*, ::System::Int32>** StaticGet___9__13_2()
		{
			return (::System::Func_2<::MIGLNLMDFLJ*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelAbyssS2MissionWidgetController_ViewModel___c_TypeDefinitionIndex)->GetStaticField(0x421F0);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelAbyssS2MissionWidgetController_ViewModel___c_TypeDefinitionIndex)->GetStaticField(0x421F8);
		}
		static ::System::Comparison_1<::MIGLNLMDFLJ*>** StaticGet___9__13_1()
		{
			return (::System::Comparison_1<::MIGLNLMDFLJ*>**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelAbyssS2MissionWidgetController_ViewModel___c_TypeDefinitionIndex)->GetStaticField(0x42200);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELABYSSS2MISSIONWIDGETCONTROLLER_VIEWMODEL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELABYSSS2MISSIONWIDGETCONTROLLER_VIEWMODEL___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _OnCreateProperty_b__13_1(::MIGLNLMDFLJ* x, ::MIGLNLMDFLJ* y)
		{
			return ((::System::Int32(*)(::PVOID, ::MIGLNLMDFLJ*, ::MIGLNLMDFLJ*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELABYSSS2MISSIONWIDGETCONTROLLER_VIEWMODEL___C__ONCREATEPROPERTY_B__13_1_OFFSET))(this, x, y);
		}

		::System::Int32 _OnCreateProperty_b__13_2(::MIGLNLMDFLJ* x)
		{
			return ((::System::Int32(*)(::PVOID, ::MIGLNLMDFLJ*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELABYSSS2MISSIONWIDGETCONTROLLER_VIEWMODEL___C__ONCREATEPROPERTY_B__13_2_OFFSET))(this, x);
		}
	};
}
