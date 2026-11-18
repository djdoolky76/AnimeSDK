#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIBANGKOVTASKDETAILWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16EADF70)
#define MOLEMOLE_UIBANGKOVTASKDETAILWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16EADFB0)
#define MOLEMOLE_UIBANGKOVTASKDETAILWIDGETCONTROLLER___C__ONCLICKWISHLISTBTN_B__20_1_OFFSET UNITYSDK_OFFSET(0x16EADFC0)
#define MOLEMOLE_UIBANGKOVTASKDETAILWIDGETCONTROLLER___C__ONCLICKWISHLISTBTN_B__20_3_OFFSET UNITYSDK_OFFSET(0x16EADFD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangkovTaskDetailWidgetController___c_TypeDefinitionIndex = 77682;

	class UIBangkovTaskDetailWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIBangkovTaskDetailWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x46F00);
		}
		static ::System::Action** StaticGet___9__20_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIBangkovTaskDetailWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x46F08);
		}
		static ::System::Action** StaticGet___9__20_3()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIBangkovTaskDetailWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x46F10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTASKDETAILWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTASKDETAILWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickWishListBtn_b__20_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTASKDETAILWIDGETCONTROLLER___C__ONCLICKWISHLISTBTN_B__20_1_OFFSET))(this);
		}

		::System::Void _OnClickWishListBtn_b__20_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTASKDETAILWIDGETCONTROLLER___C__ONCLICKWISHLISTBTN_B__20_3_OFFSET))(this);
		}
	};
}
