#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UISUIBIANTEMPLEMANAGEPAGECONTROLLER___C__BIND_B__16_0_OFFSET UNITYSDK_OFFSET(0x16909B40)
#define MOLEMOLE_UISUIBIANTEMPLEMANAGEPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16909AF0)
#define MOLEMOLE_UISUIBIANTEMPLEMANAGEPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16909B30)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleManagePageController___c_TypeDefinitionIndex = 61713;

	class UISuibianTempleManagePageController___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UISuibianTempleManagePageController___c_TypeDefinitionIndex)->GetStaticField(0x45370);
		}
		static ::UnityEngine::Events::UnityAction** StaticGet___9__16_0()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UISuibianTempleManagePageController___c_TypeDefinitionIndex)->GetStaticField(0x45378);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMANAGEPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMANAGEPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _Bind_b__16_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMANAGEPAGECONTROLLER___C__BIND_B__16_0_OFFSET))(this);
		}
	};
}
