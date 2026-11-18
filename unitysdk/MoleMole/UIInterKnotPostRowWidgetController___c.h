#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIINTERKNOTPOSTROWWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17950CE0)
#define MOLEMOLE_UIINTERKNOTPOSTROWWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17950D20)
#define MOLEMOLE_UIINTERKNOTPOSTROWWIDGETCONTROLLER___C__REFRESHINTERKNOT_B__32_0_OFFSET UNITYSDK_OFFSET(0x17950D30)

namespace MoleMole
{
	inline static constexpr unsigned int UIInterKnotPostRowWidgetController___c_TypeDefinitionIndex = 63670;

	class UIInterKnotPostRowWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIInterKnotPostRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x4AC90);
		}
		static ::System::Action_1<::System::Int32>** StaticGet___9__32_0()
		{
			return (::System::Action_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIInterKnotPostRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x4AC98);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTPOSTROWWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTPOSTROWWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshInterKnot_b__32_0(::System::Int32 newState)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTPOSTROWWIDGETCONTROLLER___C__REFRESHINTERKNOT_B__32_0_OFFSET))(this, newState);
		}
	};
}
