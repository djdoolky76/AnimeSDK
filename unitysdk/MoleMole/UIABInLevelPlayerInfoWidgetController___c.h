#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class EMPMHOJOLHJ;
class JEHLBFOILMA;
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIABINLEVELPLAYERINFOWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14BDE7E0)
#define MOLEMOLE_UIABINLEVELPLAYERINFOWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14BDE820)
#define MOLEMOLE_UIABINLEVELPLAYERINFOWIDGETCONTROLLER___C__REFRESHBANGBOO_B__19_0_OFFSET UNITYSDK_OFFSET(0x14BDE830)
#define MOLEMOLE_UIABINLEVELPLAYERINFOWIDGETCONTROLLER___C__REFRESHBANGBOO_B__19_1_OFFSET UNITYSDK_OFFSET(0x14BDE880)

namespace MoleMole
{
	inline static constexpr unsigned int UIABInLevelPlayerInfoWidgetController___c_TypeDefinitionIndex = 70079;

	class UIABInLevelPlayerInfoWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIABInLevelPlayerInfoWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3EBE0);
		}
		static ::System::Func_2<::JEHLBFOILMA*, ::System::ValueTuple_2<::EMPMHOJOLHJ*, ::JEHLBFOILMA*>>** StaticGet___9__19_1()
		{
			return (::System::Func_2<::JEHLBFOILMA*, ::System::ValueTuple_2<::EMPMHOJOLHJ*, ::JEHLBFOILMA*>>**)Il2CppClass::FromTypeDefinitionIndex(UIABInLevelPlayerInfoWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3EBE8);
		}
		static ::System::Func_2<::JEHLBFOILMA*, ::System::Boolean>** StaticGet___9__19_0()
		{
			return (::System::Func_2<::JEHLBFOILMA*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIABInLevelPlayerInfoWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3EBF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELPLAYERINFOWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELPLAYERINFOWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshBangBoo_b__19_0(::JEHLBFOILMA* slot)
		{
			return ((::System::Boolean(*)(::PVOID, ::JEHLBFOILMA*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELPLAYERINFOWIDGETCONTROLLER___C__REFRESHBANGBOO_B__19_0_OFFSET))(this, slot);
		}

		::System::ValueTuple_2<::EMPMHOJOLHJ*, ::JEHLBFOILMA*> _RefreshBangBoo_b__19_1(::JEHLBFOILMA* slot)
		{
			return ((::System::ValueTuple_2<::EMPMHOJOLHJ*, ::JEHLBFOILMA*>(*)(::PVOID, ::JEHLBFOILMA*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELPLAYERINFOWIDGETCONTROLLER___C__REFRESHBANGBOO_B__19_1_OFFSET))(this, slot);
		}
	};
}
