#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
template <typename T> class KNLFLMMHALL_1;

#define MOLEMOLE_UIAUTOBATTLECAMPITEMWIDGETCONTROLLER___C__BINDVIEW_B__9_0_OFFSET UNITYSDK_OFFSET(0x19649ED0)
#define MOLEMOLE_UIAUTOBATTLECAMPITEMWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19649E80)
#define MOLEMOLE_UIAUTOBATTLECAMPITEMWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19649EC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAutoBattleCampItemWidgetController___c_TypeDefinitionIndex = 86745;

	class UIAutoBattleCampItemWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIAutoBattleCampItemWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x44D30);
		}
		static ::System::Action_1<::KNLFLMMHALL_1<::System::Object*>*>** StaticGet___9__9_0()
		{
			return (::System::Action_1<::KNLFLMMHALL_1<::System::Object*>*>**)Il2CppClass::FromTypeDefinitionIndex(UIAutoBattleCampItemWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x44D38);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLECAMPITEMWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLECAMPITEMWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _BindView_b__9_0(::KNLFLMMHALL_1<::System::Object*>* p)
		{
			return ((::System::Void(*)(::PVOID, ::KNLFLMMHALL_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLECAMPITEMWIDGETCONTROLLER___C__BINDVIEW_B__9_0_OFFSET))(this, p);
		}
	};
}
