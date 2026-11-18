#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A74D550)
#define MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A74D590)
#define MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER___C__GOTOMAINCITY_B__60_0_OFFSET UNITYSDK_OFFSET(0x1A74D6D0)
#define MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER___C__ONCLICKTALENTHANDLE_B__52_0_OFFSET UNITYSDK_OFFSET(0x1A74D5A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS2EntrancePageController___c_TypeDefinitionIndex = 60684;

	class UIAbyssS2EntrancePageController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__60_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssS2EntrancePageController___c_TypeDefinitionIndex)->GetStaticField(0x3BF50);
		}
		static ::System::Action** StaticGet___9__52_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssS2EntrancePageController___c_TypeDefinitionIndex)->GetStaticField(0x3BF58);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssS2EntrancePageController___c_TypeDefinitionIndex)->GetStaticField(0x3BF60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickTalentHandle_b__52_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER___C__ONCLICKTALENTHANDLE_B__52_0_OFFSET))(this);
		}

		::System::Void _GoToMainCity_b__60_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER___C__GOTOMAINCITY_B__60_0_OFFSET))(this);
		}
	};
}
