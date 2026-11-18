#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIACTIVITYDETECTIVEFMPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19D10450)
#define MOLEMOLE_UIACTIVITYDETECTIVEFMPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19D10490)
#define MOLEMOLE_UIACTIVITYDETECTIVEFMPOPWINDOWCONTROLLER___C__ONUIINIT_B__16_0_OFFSET UNITYSDK_OFFSET(0x19D104A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityDetectiveFMPopWindowController___c_TypeDefinitionIndex = 69477;

	class UIActivityDetectiveFMPopWindowController___c : public ::System::Object
	{
	public:
		static ::UnityEngine::Events::UnityAction** StaticGet___9__16_0()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIActivityDetectiveFMPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3BFA0);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIActivityDetectiveFMPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3BFA8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYDETECTIVEFMPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYDETECTIVEFMPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__16_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYDETECTIVEFMPOPWINDOWCONTROLLER___C__ONUIINIT_B__16_0_OFFSET))(this);
		}
	};
}
