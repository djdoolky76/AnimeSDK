#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1706AB50)
#define MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1706AB90)
#define MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER___C__ONMAINBTNCLICKED_B__52_0_OFFSET UNITYSDK_OFFSET(0x1706ABA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIEquipDetailPageController___c_TypeDefinitionIndex = 46301;

	class UIEquipDetailPageController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__52_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIEquipDetailPageController___c_TypeDefinitionIndex)->GetStaticField(0x4AB20);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIEquipDetailPageController___c_TypeDefinitionIndex)->GetStaticField(0x4AB28);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnMainBtnClicked_b__52_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER___C__ONMAINBTNCLICKED_B__52_0_OFFSET))(this);
		}
	};
}
