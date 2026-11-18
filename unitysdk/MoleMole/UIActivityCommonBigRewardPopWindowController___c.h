#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIACTIVITYCOMMONBIGREWARDPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1631FDD0)
#define MOLEMOLE_UIACTIVITYCOMMONBIGREWARDPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1631FE10)
#define MOLEMOLE_UIACTIVITYCOMMONBIGREWARDPOPWINDOWCONTROLLER___C__ONPOPUPWINDOWCLOSE_B__16_0_OFFSET UNITYSDK_OFFSET(0x1631FE20)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityCommonBigRewardPopWindowController___c_TypeDefinitionIndex = 39519;

	class UIActivityCommonBigRewardPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__16_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIActivityCommonBigRewardPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x46E20);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIActivityCommonBigRewardPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x46E28);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMMONBIGREWARDPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMMONBIGREWARDPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnPopupWindowClose_b__16_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMMONBIGREWARDPOPWINDOWCONTROLLER___C__ONPOPUPWINDOWCLOSE_B__16_0_OFFSET))(this);
		}
	};
}
