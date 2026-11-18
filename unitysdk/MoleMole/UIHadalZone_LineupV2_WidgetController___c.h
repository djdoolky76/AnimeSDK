#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x199D1650)
#define MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x199D1690)
#define MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER___C___UPDATEINFO_B__12_0_OFFSET UNITYSDK_OFFSET(0x199D16A0)
#define MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER___C___UPDATEINFO_B__12_1_OFFSET UNITYSDK_OFFSET(0x199D16B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHadalZone_LineupV2_WidgetController___c_TypeDefinitionIndex = 73207;

	class UIHadalZone_LineupV2_WidgetController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__12_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIHadalZone_LineupV2_WidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3C200);
		}
		static ::System::Action** StaticGet___9__12_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIHadalZone_LineupV2_WidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3C208);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIHadalZone_LineupV2_WidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3C210);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void __UpdateInfo_b__12_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER___C___UPDATEINFO_B__12_0_OFFSET))(this);
		}

		::System::Void __UpdateInfo_b__12_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER___C___UPDATEINFO_B__12_1_OFFSET))(this);
		}
	};
}
