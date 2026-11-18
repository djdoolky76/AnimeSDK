#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19C48080)
#define MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19C480C0)
#define MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER___C__ONGOTOBUTTON_B__39_0_OFFSET UNITYSDK_OFFSET(0x19C480D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookRABWidgetController___c_TypeDefinitionIndex = 62498;

	class UIHandBookRABWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookRABWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x46FE0);
		}
		static ::System::Action_1<::System::Boolean>** StaticGet___9__39_0()
		{
			return (::System::Action_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookRABWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x46FE8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnGoToButton_b__39_0(::System::Boolean jump)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKRABWIDGETCONTROLLER___C__ONGOTOBUTTON_B__39_0_OFFSET))(this, jump);
		}
	};
}
