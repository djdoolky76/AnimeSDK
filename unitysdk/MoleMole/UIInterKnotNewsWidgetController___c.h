#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIINTERKNOTNEWSWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18CF9E70)
#define MOLEMOLE_UIINTERKNOTNEWSWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18CF9EB0)
#define MOLEMOLE_UIINTERKNOTNEWSWIDGETCONTROLLER___C__UPDATEGETBUTTON_B__14_2_OFFSET UNITYSDK_OFFSET(0x18CF9EC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInterKnotNewsWidgetController___c_TypeDefinitionIndex = 92846;

	class UIInterKnotNewsWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__14_2()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIInterKnotNewsWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3F070);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIInterKnotNewsWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3F078);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTNEWSWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTNEWSWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _UpdateGetButton_b__14_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTNEWSWIDGETCONTROLLER___C__UPDATEGETBUTTON_B__14_2_OFFSET))(this);
		}
	};
}
