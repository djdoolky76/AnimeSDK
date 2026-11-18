#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CCPCAPILDDK;
class CFGFGIBNKKN;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Predicate_1; }

#define MOLEMOLE_UIHANDBOOKWEEKLYQUESTWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x187C4D20)
#define MOLEMOLE_UIHANDBOOKWEEKLYQUESTWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x187C4D60)
#define MOLEMOLE_UIHANDBOOKWEEKLYQUESTWIDGETCONTROLLER___C__ONUIINIT_B__2_3_OFFSET UNITYSDK_OFFSET(0x187C4D70)
#define MOLEMOLE_UIHANDBOOKWEEKLYQUESTWIDGETCONTROLLER___C__REFRESHSHOPPOPUP_B__11_1_OFFSET UNITYSDK_OFFSET(0x187C4D90)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookWeeklyQuestWidgetController___c_TypeDefinitionIndex = 68158;

	class UIHandBookWeeklyQuestWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookWeeklyQuestWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x4C400);
		}
		static ::System::Func_2<::CFGFGIBNKKN*, ::System::Int32>** StaticGet___9__2_3()
		{
			return (::System::Func_2<::CFGFGIBNKKN*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookWeeklyQuestWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x4C408);
		}
		static ::System::Predicate_1<::CCPCAPILDDK*>** StaticGet___9__11_1()
		{
			return (::System::Predicate_1<::CCPCAPILDDK*>**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookWeeklyQuestWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x4C410);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKWEEKLYQUESTWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKWEEKLYQUESTWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _OnUIInit_b__2_3(::CFGFGIBNKKN* entry)
		{
			return ((::System::Int32(*)(::PVOID, ::CFGFGIBNKKN*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKWEEKLYQUESTWIDGETCONTROLLER___C__ONUIINIT_B__2_3_OFFSET))(this, entry);
		}

		::System::Boolean _RefreshShopPopup_b__11_1(::CCPCAPILDDK* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::CCPCAPILDDK*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKWEEKLYQUESTWIDGETCONTROLLER___C__REFRESHSHOPPOPUP_B__11_1_OFFSET))(this, x);
		}
	};
}
