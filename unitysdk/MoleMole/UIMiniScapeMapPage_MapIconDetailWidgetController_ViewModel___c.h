#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_UIMINISCAPEMAPPAGE_MAPICONDETAILWIDGETCONTROLLER_VIEWMODEL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x193AC6E0)
#define MOLEMOLE_UIMINISCAPEMAPPAGE_MAPICONDETAILWIDGETCONTROLLER_VIEWMODEL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x193AC720)
#define MOLEMOLE_UIMINISCAPEMAPPAGE_MAPICONDETAILWIDGETCONTROLLER_VIEWMODEL___C__ONCREATEPROPERTY_B__58_0_OFFSET UNITYSDK_OFFSET(0x193AC730)

namespace MoleMole
{
	inline static constexpr unsigned int UIMiniScapeMapPage_MapIconDetailWidgetController_ViewModel___c_TypeDefinitionIndex = 55632;

	class UIMiniScapeMapPage_MapIconDetailWidgetController_ViewModel___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIMiniScapeMapPage_MapIconDetailWidgetController_ViewModel___c_TypeDefinitionIndex)->GetStaticField(0x4ACC0);
		}
		static ::System::Func_1<::System::Boolean>** StaticGet___9__58_0()
		{
			return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIMiniScapeMapPage_MapIconDetailWidgetController_ViewModel___c_TypeDefinitionIndex)->GetStaticField(0x4ACC8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAPPAGE_MAPICONDETAILWIDGETCONTROLLER_VIEWMODEL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAPPAGE_MAPICONDETAILWIDGETCONTROLLER_VIEWMODEL___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnCreateProperty_b__58_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAPPAGE_MAPICONDETAILWIDGETCONTROLLER_VIEWMODEL___C__ONCREATEPROPERTY_B__58_0_OFFSET))(this);
		}
	};
}
