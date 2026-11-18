#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIINLEVELEMOTICONSTIPWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A2A1C10)
#define MOLEMOLE_UIINLEVELEMOTICONSTIPWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2A1C50)
#define MOLEMOLE_UIINLEVELEMOTICONSTIPWIDGETCONTROLLER___C__ONUIINIT_B__4_0_OFFSET UNITYSDK_OFFSET(0x1A2A1C60)
#define MOLEMOLE_UIINLEVELEMOTICONSTIPWIDGETCONTROLLER___C__ONUIINIT_B__4_1_OFFSET UNITYSDK_OFFSET(0x1A2A1D80)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelEmoticonsTipWidgetController___c_TypeDefinitionIndex = 51028;

	class UIInLevelEmoticonsTipWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelEmoticonsTipWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x4C430);
		}
		static ::UnityEngine::Events::UnityAction** StaticGet___9__4_0()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelEmoticonsTipWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x4C438);
		}
		static ::UnityEngine::Events::UnityAction** StaticGet___9__4_1()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelEmoticonsTipWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x4C440);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELEMOTICONSTIPWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELEMOTICONSTIPWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__4_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELEMOTICONSTIPWIDGETCONTROLLER___C__ONUIINIT_B__4_0_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__4_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELEMOTICONSTIPWIDGETCONTROLLER___C__ONUIINIT_B__4_1_OFFSET))(this);
		}
	};
}
