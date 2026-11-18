#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIACTIVITYDETECTIVESTOREPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18847E90)
#define MOLEMOLE_UIACTIVITYDETECTIVESTOREPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18847ED0)
#define MOLEMOLE_UIACTIVITYDETECTIVESTOREPAGECONTROLLER___C__ONUIINIT_B__12_0_OFFSET UNITYSDK_OFFSET(0x18847EE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityDetectiveStorePageController___c_TypeDefinitionIndex = 54709;

	class UIActivityDetectiveStorePageController___c : public ::System::Object
	{
	public:
		static ::UnityEngine::Events::UnityAction** StaticGet___9__12_0()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIActivityDetectiveStorePageController___c_TypeDefinitionIndex)->GetStaticField(0x41E50);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIActivityDetectiveStorePageController___c_TypeDefinitionIndex)->GetStaticField(0x41E58);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYDETECTIVESTOREPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYDETECTIVESTOREPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__12_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYDETECTIVESTOREPAGECONTROLLER___C__ONUIINIT_B__12_0_OFFSET))(this);
		}
	};
}
