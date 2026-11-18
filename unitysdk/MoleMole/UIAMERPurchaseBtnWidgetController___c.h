#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OBOPDFEMAFJ.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIAMERPURCHASEBTNWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13A0E640)
#define MOLEMOLE_UIAMERPURCHASEBTNWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13A0E680)
#define MOLEMOLE_UIAMERPURCHASEBTNWIDGETCONTROLLER___C__ONBUYBTN_B__3_0_OFFSET UNITYSDK_OFFSET(0x13A0E690)
#define MOLEMOLE_UIAMERPURCHASEBTNWIDGETCONTROLLER___C__ONBUYBTN_B__3_1_OFFSET UNITYSDK_OFFSET(0x13A0E6A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAMERPurchaseBtnWidgetController___c_TypeDefinitionIndex = 40552;

	class UIAMERPurchaseBtnWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__3_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIAMERPurchaseBtnWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x44C80);
		}
		static ::System::Action_1<::OBOPDFEMAFJ>** StaticGet___9__3_1()
		{
			return (::System::Action_1<::OBOPDFEMAFJ>**)Il2CppClass::FromTypeDefinitionIndex(UIAMERPurchaseBtnWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x44C88);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIAMERPurchaseBtnWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x44C90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIAMERPURCHASEBTNWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAMERPURCHASEBTNWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnBuyBtn_b__3_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAMERPURCHASEBTNWIDGETCONTROLLER___C__ONBUYBTN_B__3_0_OFFSET))(this);
		}

		::System::Void _OnBuyBtn_b__3_1(::OBOPDFEMAFJ e)
		{
			return ((::System::Void(*)(::PVOID, ::OBOPDFEMAFJ))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAMERPURCHASEBTNWIDGETCONTROLLER___C__ONBUYBTN_B__3_1_OFFSET))(this, e);
		}
	};
}
