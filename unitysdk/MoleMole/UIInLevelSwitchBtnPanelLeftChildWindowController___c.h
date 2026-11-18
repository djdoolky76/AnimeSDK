#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_UIINLEVELSWITCHBTNPANELLEFTCHILDWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1960AA60)
#define MOLEMOLE_UIINLEVELSWITCHBTNPANELLEFTCHILDWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1960AAA0)
#define MOLEMOLE_UIINLEVELSWITCHBTNPANELLEFTCHILDWINDOWCONTROLLER___C__INITSWITCHAVATARCOMPONENT_B__23_0_OFFSET UNITYSDK_OFFSET(0x1960AAB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelSwitchBtnPanelLeftChildWindowController___c_TypeDefinitionIndex = 52434;

	class UIInLevelSwitchBtnPanelLeftChildWindowController___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelSwitchBtnPanelLeftChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x38F30);
		}
		static ::System::Func_1<::System::Boolean>** StaticGet___9__23_0()
		{
			return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelSwitchBtnPanelLeftChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x38F38);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSWITCHBTNPANELLEFTCHILDWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSWITCHBTNPANELLEFTCHILDWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _InitSwitchAvatarComponent_b__23_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSWITCHBTNPANELLEFTCHILDWINDOWCONTROLLER___C__INITSWITCHAVATARCOMPONENT_B__23_0_OFFSET))(this);
		}
	};
}
