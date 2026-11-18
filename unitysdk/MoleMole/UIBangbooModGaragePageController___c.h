#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIBANGBOOMODGARAGEPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x159539D0)
#define MOLEMOLE_UIBANGBOOMODGARAGEPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15953A10)
#define MOLEMOLE_UIBANGBOOMODGARAGEPAGECONTROLLER___C__ONUIINIT_B__4_0_OFFSET UNITYSDK_OFFSET(0x15953A20)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangbooModGaragePageController___c_TypeDefinitionIndex = 90043;

	class UIBangbooModGaragePageController___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIBangbooModGaragePageController___c_TypeDefinitionIndex)->GetStaticField(0x3ED40);
		}
		static ::UnityEngine::Events::UnityAction** StaticGet___9__4_0()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIBangbooModGaragePageController___c_TypeDefinitionIndex)->GetStaticField(0x3ED48);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMODGARAGEPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMODGARAGEPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__4_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMODGARAGEPAGECONTROLLER___C__ONUIINIT_B__4_0_OFFSET))(this);
		}
	};
}
