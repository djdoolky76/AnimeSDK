#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIACTIVITYFILMGUIDEBTNWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1899AAD0)
#define MOLEMOLE_UIACTIVITYFILMGUIDEBTNWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1899AB10)
#define MOLEMOLE_UIACTIVITYFILMGUIDEBTNWIDGETCONTROLLER___C__ONBTNCLICK_B__7_0_OFFSET UNITYSDK_OFFSET(0x1899AB20)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityFilmGuideBtnWidgetController___c_TypeDefinitionIndex = 40013;

	class UIActivityFilmGuideBtnWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIActivityFilmGuideBtnWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x41E60);
		}
		static ::System::Action** StaticGet___9__7_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIActivityFilmGuideBtnWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x41E68);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFILMGUIDEBTNWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFILMGUIDEBTNWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnBtnClick_b__7_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFILMGUIDEBTNWIDGETCONTROLLER___C__ONBTNCLICK_B__7_0_OFFSET))(this);
		}
	};
}
