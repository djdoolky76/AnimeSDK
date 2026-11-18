#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UITOWERBUFFROWWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x167E97F0)
#define MOLEMOLE_UITOWERBUFFROWWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x167E9830)
#define MOLEMOLE_UITOWERBUFFROWWIDGETCONTROLLER___C__SETEMPTY_B__10_0_OFFSET UNITYSDK_OFFSET(0x167E9840)
#define MOLEMOLE_UITOWERBUFFROWWIDGETCONTROLLER___C__SETEMPTY_B__10_1_OFFSET UNITYSDK_OFFSET(0x167E99A0)

namespace MoleMole
{
	inline static constexpr unsigned int UITowerBuffRowWidgetController___c_TypeDefinitionIndex = 55675;

	class UITowerBuffRowWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__10_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UITowerBuffRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x4ADB0);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UITowerBuffRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x4ADB8);
		}
		static ::System::Action** StaticGet___9__10_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UITowerBuffRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x4ADC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERBUFFROWWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERBUFFROWWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _SetEmpty_b__10_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERBUFFROWWIDGETCONTROLLER___C__SETEMPTY_B__10_0_OFFSET))(this);
		}

		::System::Void _SetEmpty_b__10_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERBUFFROWWIDGETCONTROLLER___C__SETEMPTY_B__10_1_OFFSET))(this);
		}
	};
}
