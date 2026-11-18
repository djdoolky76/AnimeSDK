#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UISHOPPINGMALLLIMITEDCARDWIDGETACTIVITYPIGWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x164A8F60)
#define MOLEMOLE_UISHOPPINGMALLLIMITEDCARDWIDGETACTIVITYPIGWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x164A8FA0)
#define MOLEMOLE_UISHOPPINGMALLLIMITEDCARDWIDGETACTIVITYPIGWIDGETCONTROLLER___C__TRYSENDDEPOSITREWARDREQUEST_B__9_0_OFFSET UNITYSDK_OFFSET(0x164A8FB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIShoppingMallLimitedCardWidgetActivityPigWidgetController___c_TypeDefinitionIndex = 85788;

	class UIShoppingMallLimitedCardWidgetActivityPigWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__9_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIShoppingMallLimitedCardWidgetActivityPigWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x42350);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIShoppingMallLimitedCardWidgetActivityPigWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x42358);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLLIMITEDCARDWIDGETACTIVITYPIGWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLLIMITEDCARDWIDGETACTIVITYPIGWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _TrySendDepositRewardRequest_b__9_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLLIMITEDCARDWIDGETACTIVITYPIGWIDGETCONTROLLER___C__TRYSENDDEPOSITREWARDREQUEST_B__9_0_OFFSET))(this);
		}
	};
}
