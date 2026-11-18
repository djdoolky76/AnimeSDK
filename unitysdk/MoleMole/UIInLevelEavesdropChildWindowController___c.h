#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MOLEMOLE_UIINLEVELEAVESDROPCHILDWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17F6B870)
#define MOLEMOLE_UIINLEVELEAVESDROPCHILDWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17F6B8B0)
#define MOLEMOLE_UIINLEVELEAVESDROPCHILDWINDOWCONTROLLER___C__ONSHOW_B__31_0_OFFSET UNITYSDK_OFFSET(0x17F6B8C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelEavesdropChildWindowController___c_TypeDefinitionIndex = 81627;

	class UIInLevelEavesdropChildWindowController___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelEavesdropChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3C350);
		}
		static ::System::Action_1<::UnityEngine::UI::Extension::UILocalizationText*>** StaticGet___9__31_0()
		{
			return (::System::Action_1<::UnityEngine::UI::Extension::UILocalizationText*>**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelEavesdropChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3C358);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELEAVESDROPCHILDWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELEAVESDROPCHILDWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnShow_b__31_0(::UnityEngine::UI::Extension::UILocalizationText* content)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UILocalizationText*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELEAVESDROPCHILDWINDOWCONTROLLER___C__ONSHOW_B__31_0_OFFSET))(this, content);
		}
	};
}
