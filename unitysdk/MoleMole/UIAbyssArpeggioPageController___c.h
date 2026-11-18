#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x163087E0)
#define MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16308820)
#define MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER___C__GOTOMAINCITY_B__26_0_OFFSET UNITYSDK_OFFSET(0x16308830)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssArpeggioPageController___c_TypeDefinitionIndex = 63601;

	class UIAbyssArpeggioPageController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__26_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssArpeggioPageController___c_TypeDefinitionIndex)->GetStaticField(0x46DC0);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssArpeggioPageController___c_TypeDefinitionIndex)->GetStaticField(0x46DC8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _GoToMainCity_b__26_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER___C__GOTOMAINCITY_B__26_0_OFFSET))(this);
		}
	};
}
