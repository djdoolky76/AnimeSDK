#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IKFBCIGNNEP;
namespace MoleMole { class UIRecommendTypePropertyRowWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIRECOMMENDTYPEPROPERTYROWWIDGETCONTROLLER___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18FF8280)
#define MOLEMOLE_UIRECOMMENDTYPEPROPERTYROWWIDGETCONTROLLER___C__DISPLAYCLASS12_0__REFRESHVIEW_B__2_OFFSET UNITYSDK_OFFSET(0x18FF8290)
#define MOLEMOLE_UIRECOMMENDTYPEPROPERTYROWWIDGETCONTROLLER___C__DISPLAYCLASS12_0__REFRESHVIEW_G__ISCANSELECT_1_OFFSET UNITYSDK_OFFSET(0x18FF8520)
#define MOLEMOLE_UIRECOMMENDTYPEPROPERTYROWWIDGETCONTROLLER___C__DISPLAYCLASS12_0__REFRESHVIEW_G__ONPROPERTYROWCLICK_0_OFFSET UNITYSDK_OFFSET(0x18FF82C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRecommendTypePropertyRowWidgetController___c__DisplayClass12_0_TypeDefinitionIndex = 88975;

	class UIRecommendTypePropertyRowWidgetController___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* propertyIdList; // 0x10
		::IKFBCIGNNEP* data; // 0x18
		::MoleMole::UIRecommendTypePropertyRowWidgetController* __4__this; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDTYPEPROPERTYROWWIDGETCONTROLLER___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshView_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDTYPEPROPERTYROWWIDGETCONTROLLER___C__DISPLAYCLASS12_0__REFRESHVIEW_B__2_OFFSET))(this);
		}

		::System::Void _RefreshView_g__OnPropertyRowClick_0(::System::UInt32 propertyId, ::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDTYPEPROPERTYROWWIDGETCONTROLLER___C__DISPLAYCLASS12_0__REFRESHVIEW_G__ONPROPERTYROWCLICK_0_OFFSET))(this, propertyId, isSelect);
		}

		::System::Boolean _RefreshView_g__IsCanSelect_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDTYPEPROPERTYROWWIDGETCONTROLLER___C__DISPLAYCLASS12_0__REFRESHVIEW_G__ISCANSELECT_1_OFFSET))(this);
		}
	};
}
