#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIHOLLOWCARDSUITDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18C75430)
#define MOLEMOLE_UIHOLLOWCARDSUITDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18C75470)
#define MOLEMOLE_UIHOLLOWCARDSUITDIALOGPOPWINDOWCONTROLLER___C__DOGOTONEST_B__37_0_OFFSET UNITYSDK_OFFSET(0x18C75480)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowCardSuitDialogPopWindowController___c_TypeDefinitionIndex = 65973;

	class UIHollowCardSuitDialogPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIHollowCardSuitDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x353A0);
		}
		static ::System::Action** StaticGet___9__37_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIHollowCardSuitDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x353A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDSUITDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDSUITDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _DoGoToNest_b__37_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDSUITDIALOGPOPWINDOWCONTROLLER___C__DOGOTONEST_B__37_0_OFFSET))(this);
		}
	};
}
