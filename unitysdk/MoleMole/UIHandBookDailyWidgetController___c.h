#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EIGJEBNOGLC;
class JBDIABHJBPE;
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16EF4480)
#define MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16EF44C0)
#define MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER___C__ONSHOW_B__5_0_OFFSET UNITYSDK_OFFSET(0x16EF46A0)
#define MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER___C__ONUIOPEN_B__4_0_OFFSET UNITYSDK_OFFSET(0x16EF44D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookDailyWidgetController___c_TypeDefinitionIndex = 39944;

	class UIHandBookDailyWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::EIGJEBNOGLC*, ::System::Int32>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::EIGJEBNOGLC*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookDailyWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3C230);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookDailyWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3C238);
		}
		static ::System::Func_2<::JBDIABHJBPE*, ::EIGJEBNOGLC*>** StaticGet___9__4_0()
		{
			return (::System::Func_2<::JBDIABHJBPE*, ::EIGJEBNOGLC*>**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookDailyWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3C240);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::EIGJEBNOGLC* _OnUIOpen_b__4_0(::JBDIABHJBPE* template_)
		{
			return ((::EIGJEBNOGLC*(*)(::PVOID, ::JBDIABHJBPE*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER___C__ONUIOPEN_B__4_0_OFFSET))(this, template_);
		}

		::System::Int32 _OnShow_b__5_0(::EIGJEBNOGLC* b)
		{
			return ((::System::Int32(*)(::PVOID, ::EIGJEBNOGLC*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER___C__ONSHOW_B__5_0_OFFSET))(this, b);
		}
	};
}
