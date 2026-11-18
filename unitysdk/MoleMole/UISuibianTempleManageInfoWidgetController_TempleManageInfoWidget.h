#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJEJBPGJPJN.h"

class OAOFCEFPEHP;
template <typename T> class LGFJMNEABJP_1;
template <typename T> class LJHFMILANJA_1;

#define MOLEMOLE_UISUIBIANTEMPLEMANAGEINFOWIDGETCONTROLLER_TEMPLEMANAGEINFOWIDGET_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x17DB0D20)
#define MOLEMOLE_UISUIBIANTEMPLEMANAGEINFOWIDGETCONTROLLER_TEMPLEMANAGEINFOWIDGET__CTOR_OFFSET UNITYSDK_OFFSET(0x17DB0E30)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleManageInfoWidgetController_TempleManageInfoWidget_TypeDefinitionIndex = 59416;

	class UISuibianTempleManageInfoWidgetController_TempleManageInfoWidget : public ::JJEJBPGJPJN
	{
	public:
		::LJHFMILANJA_1<::System::UInt32>* GoodShelveID; // 0x88
		::LJHFMILANJA_1<::System::Int32>* CurSelectProductID; // 0x90
		::LJHFMILANJA_1<::System::UInt32>* CurrentBenchID; // 0x98
		::LGFJMNEABJP_1<::System::Int32>* ProductIDList; // 0xA0
		::LGFJMNEABJP_1<::OAOFCEFPEHP*>* ProductCanShowList; // 0xA8
		::LJHFMILANJA_1<::System::Int32>* InitSelectProductID; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMANAGEINFOWIDGETCONTROLLER_TEMPLEMANAGEINFOWIDGET__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMANAGEINFOWIDGETCONTROLLER_TEMPLEMANAGEINFOWIDGET_ONCREATEPROPERTY_OFFSET))(this);
		}
	};
}
