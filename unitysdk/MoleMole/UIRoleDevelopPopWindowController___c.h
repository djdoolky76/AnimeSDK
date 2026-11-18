#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x168F4460)
#define MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x168F44A0)
#define MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER___C__ONUIINIT_B__11_0_OFFSET UNITYSDK_OFFSET(0x168F44B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleDevelopPopWindowController___c_TypeDefinitionIndex = 66165;

	class UIRoleDevelopPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIRoleDevelopPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3C650);
		}
		static ::UnityEngine::Events::UnityAction** StaticGet___9__11_0()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIRoleDevelopPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3C658);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__11_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER___C__ONUIINIT_B__11_0_OFFSET))(this);
		}
	};
}
