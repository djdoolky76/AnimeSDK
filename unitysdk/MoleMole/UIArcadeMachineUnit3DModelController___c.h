#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIARCADEMACHINEUNIT3DMODELCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x188660B0)
#define MOLEMOLE_UIARCADEMACHINEUNIT3DMODELCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x188660F0)
#define MOLEMOLE_UIARCADEMACHINEUNIT3DMODELCONTROLLER___C__PLAYONSCREEN_B__39_0_OFFSET UNITYSDK_OFFSET(0x18866100)

namespace MoleMole
{
	inline static constexpr unsigned int UIArcadeMachineUnit3DModelController___c_TypeDefinitionIndex = 85798;

	class UIArcadeMachineUnit3DModelController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__39_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIArcadeMachineUnit3DModelController___c_TypeDefinitionIndex)->GetStaticField(0x41F40);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIArcadeMachineUnit3DModelController___c_TypeDefinitionIndex)->GetStaticField(0x41F48);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEMACHINEUNIT3DMODELCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEMACHINEUNIT3DMODELCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _PlayOnScreen_b__39_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEMACHINEUNIT3DMODELCONTROLLER___C__PLAYONSCREEN_B__39_0_OFFSET))(this);
		}
	};
}
