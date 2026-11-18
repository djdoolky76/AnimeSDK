#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIRABINLEVELBATTLEWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x147F99F0)
#define MOLEMOLE_UIRABINLEVELBATTLEWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x147F9A30)
#define MOLEMOLE_UIRABINLEVELBATTLEWIDGETCONTROLLER___C__ONUIOPEN_B__12_0_OFFSET UNITYSDK_OFFSET(0x147F9A40)
#define MOLEMOLE_UIRABINLEVELBATTLEWIDGETCONTROLLER___C__ONUIOPEN_B__12_1_OFFSET UNITYSDK_OFFSET(0x147F9D90)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABInLevelBattleWidgetController___c_TypeDefinitionIndex = 71070;

	class UIRABInLevelBattleWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__12_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIRABInLevelBattleWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x4C500);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIRABInLevelBattleWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x4C508);
		}
		static ::UnityEngine::Events::UnityAction** StaticGet___9__12_0()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIRABInLevelBattleWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x4C510);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELBATTLEWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELBATTLEWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIOpen_b__12_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELBATTLEWIDGETCONTROLLER___C__ONUIOPEN_B__12_0_OFFSET))(this);
		}

		::System::Void _OnUIOpen_b__12_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELBATTLEWIDGETCONTROLLER___C__ONUIOPEN_B__12_1_OFFSET))(this);
		}
	};
}
