#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIGENERALTOKENROWWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A271CF0)
#define MOLEMOLE_UIGENERALTOKENROWWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A271D30)
#define MOLEMOLE_UIGENERALTOKENROWWIDGETCONTROLLER___C__INITBTNBIND_B__8_5_OFFSET UNITYSDK_OFFSET(0x1A271D40)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralTokenRowWidgetController___c_TypeDefinitionIndex = 61224;

	class UIGeneralTokenRowWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIGeneralTokenRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x4EB30);
		}
		static ::System::Action** StaticGet___9__8_5()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIGeneralTokenRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x4EB38);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOKENROWWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOKENROWWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _InitBtnBind_b__8_5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOKENROWWIDGETCONTROLLER___C__INITBTNBIND_B__8_5_OFFSET))(this);
		}
	};
}
