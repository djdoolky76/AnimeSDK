#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CODJLLEKIAJ;
class MIGLNLMDFLJ;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIABYSSS2MISSIONWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x198EAB10)
#define MOLEMOLE_UIABYSSS2MISSIONWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x198EAB50)
#define MOLEMOLE_UIABYSSS2MISSIONWIDGETCONTROLLER___C__INITMISSIONCONFIG_B__6_0_OFFSET UNITYSDK_OFFSET(0x198EAB60)
#define MOLEMOLE_UIABYSSS2MISSIONWIDGETCONTROLLER___C__SETTABTYPE_B__10_0_OFFSET UNITYSDK_OFFSET(0x198EABB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS2MissionWidgetController___c_TypeDefinitionIndex = 69583;

	class UIAbyssS2MissionWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::CODJLLEKIAJ*>** StaticGet___9__6_0()
		{
			return (::System::Comparison_1<::CODJLLEKIAJ*>**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssS2MissionWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x4D8B0);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssS2MissionWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x4D8B8);
		}
		static ::System::Func_2<::MIGLNLMDFLJ*, ::System::Int32>** StaticGet___9__10_0()
		{
			return (::System::Func_2<::MIGLNLMDFLJ*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssS2MissionWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x4D8C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MISSIONWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MISSIONWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _InitMissionConfig_b__6_0(::CODJLLEKIAJ* a, ::CODJLLEKIAJ* b)
		{
			return ((::System::Int32(*)(::PVOID, ::CODJLLEKIAJ*, ::CODJLLEKIAJ*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MISSIONWIDGETCONTROLLER___C__INITMISSIONCONFIG_B__6_0_OFFSET))(this, a, b);
		}

		::System::Int32 _SetTabType_b__10_0(::MIGLNLMDFLJ* x)
		{
			return ((::System::Int32(*)(::PVOID, ::MIGLNLMDFLJ*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MISSIONWIDGETCONTROLLER___C__SETTABTYPE_B__10_0_OFFSET))(this, x);
		}
	};
}
