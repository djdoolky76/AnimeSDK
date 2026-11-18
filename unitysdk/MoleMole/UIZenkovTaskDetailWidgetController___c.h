#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIZENKOVTASKDETAILWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11390110)
#define MOLEMOLE_UIZENKOVTASKDETAILWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11390150)
#define MOLEMOLE_UIZENKOVTASKDETAILWIDGETCONTROLLER___C__ONCLICKWISHLISTBTN_B__31_1_OFFSET UNITYSDK_OFFSET(0x11390160)
#define MOLEMOLE_UIZENKOVTASKDETAILWIDGETCONTROLLER___C__ONCLICKWISHLISTBTN_B__31_3_OFFSET UNITYSDK_OFFSET(0x11390170)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovTaskDetailWidgetController___c_TypeDefinitionIndex = 92936;

	class UIZenkovTaskDetailWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIZenkovTaskDetailWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3F520);
		}
		static ::System::Action** StaticGet___9__31_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIZenkovTaskDetailWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3F528);
		}
		static ::System::Action** StaticGet___9__31_3()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIZenkovTaskDetailWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3F530);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTASKDETAILWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTASKDETAILWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickWishListBtn_b__31_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTASKDETAILWIDGETCONTROLLER___C__ONCLICKWISHLISTBTN_B__31_1_OFFSET))(this);
		}

		::System::Void _OnClickWishListBtn_b__31_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTASKDETAILWIDGETCONTROLLER___C__ONCLICKWISHLISTBTN_B__31_3_OFFSET))(this);
		}
	};
}
