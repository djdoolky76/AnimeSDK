#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIYOROZUYADIFFICULTWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12C07FD0)
#define MOLEMOLE_UIYOROZUYADIFFICULTWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12C08010)
#define MOLEMOLE_UIYOROZUYADIFFICULTWIDGETCONTROLLER___C__GOTOMAINCITY_B__26_0_OFFSET UNITYSDK_OFFSET(0x12C08020)

namespace MoleMole
{
	inline static constexpr unsigned int UIYorozuyaDifficultWidgetController___c_TypeDefinitionIndex = 81806;

	class UIYorozuyaDifficultWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__26_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIYorozuyaDifficultWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x4EC80);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIYorozuyaDifficultWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x4EC88);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYADIFFICULTWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYADIFFICULTWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _GoToMainCity_b__26_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYADIFFICULTWIDGETCONTROLLER___C__GOTOMAINCITY_B__26_0_OFFSET))(this);
		}
	};
}
