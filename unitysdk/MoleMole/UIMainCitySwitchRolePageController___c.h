#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15D0D3B0)
#define MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15D0D3F0)
#define MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER___C__ONPRECHECKSWITCHAVATAR_B__28_0_OFFSET UNITYSDK_OFFSET(0x15D0D400)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCitySwitchRolePageController___c_TypeDefinitionIndex = 88990;

	class UIMainCitySwitchRolePageController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__28_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIMainCitySwitchRolePageController___c_TypeDefinitionIndex)->GetStaticField(0x42280);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIMainCitySwitchRolePageController___c_TypeDefinitionIndex)->GetStaticField(0x42288);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnPreCheckSwitchAvatar_b__28_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLEPAGECONTROLLER___C__ONPRECHECKSWITCHAVATAR_B__28_0_OFFSET))(this);
		}
	};
}
