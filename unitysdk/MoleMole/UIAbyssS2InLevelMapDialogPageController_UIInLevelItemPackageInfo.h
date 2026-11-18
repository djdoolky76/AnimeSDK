#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BKPEEBMCNPD;
class HGAJKHIMKJP;

#define MOLEMOLE_UIABYSSS2INLEVELMAPDIALOGPAGECONTROLLER_UIINLEVELITEMPACKAGEINFO_GETTEMPLATEINDEX_OFFSET UNITYSDK_OFFSET(0x1883E600)
#define MOLEMOLE_UIABYSSS2INLEVELMAPDIALOGPAGECONTROLLER_UIINLEVELITEMPACKAGEINFO_SETBRIEF_OFFSET UNITYSDK_OFFSET(0x1883E650)
#define MOLEMOLE_UIABYSSS2INLEVELMAPDIALOGPAGECONTROLLER_UIINLEVELITEMPACKAGEINFO_SETSELECT_OFFSET UNITYSDK_OFFSET(0x1883E6A0)
#define MOLEMOLE_UIABYSSS2INLEVELMAPDIALOGPAGECONTROLLER_UIINLEVELITEMPACKAGEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1883E6F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS2InLevelMapDialogPageController_UIInLevelItemPackageInfo_TypeDefinitionIndex = 45478;

	class UIAbyssS2InLevelMapDialogPageController_UIInLevelItemPackageInfo : public ::System::Object
	{
	public:
		::HGAJKHIMKJP* Data; // 0x10
		::BKPEEBMCNPD* IconData; // 0x18
		::System::Boolean BriefDesc; // 0x20
		::System::Boolean UseGamepadSelectable; // 0x21
		::System::Boolean Expand; // 0x22
		::System::Boolean IsSelect; // 0x23

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2INLEVELMAPDIALOGPAGECONTROLLER_UIINLEVELITEMPACKAGEINFO__CTOR_OFFSET))(this);
		}

		::System::Int32 GetTemplateIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2INLEVELMAPDIALOGPAGECONTROLLER_UIINLEVELITEMPACKAGEINFO_GETTEMPLATEINDEX_OFFSET))(this);
		}

		::System::Void SetBrief(::System::Boolean brief)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2INLEVELMAPDIALOGPAGECONTROLLER_UIINLEVELITEMPACKAGEINFO_SETBRIEF_OFFSET))(this, brief);
		}

		::System::Void SetSelect(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2INLEVELMAPDIALOGPAGECONTROLLER_UIINLEVELITEMPACKAGEINFO_SETSELECT_OFFSET))(this, isSelect);
		}
	};
}
