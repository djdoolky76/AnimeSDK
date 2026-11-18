#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UISUMMERTIDETREASUREMAINPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x188DBCD0)
#define MOLEMOLE_UISUMMERTIDETREASUREMAINPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x188DBD10)
#define MOLEMOLE_UISUMMERTIDETREASUREMAINPAGECONTROLLER___C__ONBEACHCOMBINGBTNCLICK_B__44_0_OFFSET UNITYSDK_OFFSET(0x188DBD20)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerTideTreasureMainPageController___c_TypeDefinitionIndex = 64034;

	class UISummerTideTreasureMainPageController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__44_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UISummerTideTreasureMainPageController___c_TypeDefinitionIndex)->GetStaticField(0x4FBA0);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UISummerTideTreasureMainPageController___c_TypeDefinitionIndex)->GetStaticField(0x4FBA8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASUREMAINPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASUREMAINPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnBeachcombingBtnClick_b__44_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASUREMAINPAGECONTROLLER___C__ONBEACHCOMBINGBTNCLICK_B__44_0_OFFSET))(this);
		}
	};
}
