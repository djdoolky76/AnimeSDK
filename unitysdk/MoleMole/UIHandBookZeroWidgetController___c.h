#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CCPCAPILDDK;
class CFGFGIBNKKN;
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Predicate_1; }

#define MOLEMOLE_UIHANDBOOKZEROWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x197774F0)
#define MOLEMOLE_UIHANDBOOKZEROWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19777530)
#define MOLEMOLE_UIHANDBOOKZEROWIDGETCONTROLLER___C__ONREWARDBTNCLICK_B__21_0_OFFSET UNITYSDK_OFFSET(0x19777590)
#define MOLEMOLE_UIHANDBOOKZEROWIDGETCONTROLLER___C__ONUIINIT_B__9_3_OFFSET UNITYSDK_OFFSET(0x19777540)
#define MOLEMOLE_UIHANDBOOKZEROWIDGETCONTROLLER___C__REFRESHREDEEM_B__19_1_OFFSET UNITYSDK_OFFSET(0x19777560)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookZeroWidgetController___c_TypeDefinitionIndex = 43840;

	class UIHandBookZeroWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookZeroWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3EF70);
		}
		static ::System::Action** StaticGet___9__21_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookZeroWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3EF78);
		}
		static ::System::Predicate_1<::CCPCAPILDDK*>** StaticGet___9__19_1()
		{
			return (::System::Predicate_1<::CCPCAPILDDK*>**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookZeroWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3EF80);
		}
		static ::System::Func_2<::CFGFGIBNKKN*, ::System::Int32>** StaticGet___9__9_3()
		{
			return (::System::Func_2<::CFGFGIBNKKN*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookZeroWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3EF88);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKZEROWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKZEROWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _OnUIInit_b__9_3(::CFGFGIBNKKN* entry)
		{
			return ((::System::Int32(*)(::PVOID, ::CFGFGIBNKKN*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKZEROWIDGETCONTROLLER___C__ONUIINIT_B__9_3_OFFSET))(this, entry);
		}

		::System::Boolean _RefreshRedeem_b__19_1(::CCPCAPILDDK* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::CCPCAPILDDK*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKZEROWIDGETCONTROLLER___C__REFRESHREDEEM_B__19_1_OFFSET))(this, x);
		}

		::System::Void _OnRewardBtnClick_b__21_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKZEROWIDGETCONTROLLER___C__ONREWARDBTNCLICK_B__21_0_OFFSET))(this);
		}
	};
}
