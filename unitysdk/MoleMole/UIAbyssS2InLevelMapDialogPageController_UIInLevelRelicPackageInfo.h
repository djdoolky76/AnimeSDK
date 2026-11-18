#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BKPEEBMCNPD;
class HGAJKHIMKJP;

#define MOLEMOLE_UIABYSSS2INLEVELMAPDIALOGPAGECONTROLLER_UIINLEVELRELICPACKAGEINFO_GETTEMPLATEINDEX_OFFSET UNITYSDK_OFFSET(0x15B0E0C0)
#define MOLEMOLE_UIABYSSS2INLEVELMAPDIALOGPAGECONTROLLER_UIINLEVELRELICPACKAGEINFO_SETBRIEF_OFFSET UNITYSDK_OFFSET(0x15B0E110)
#define MOLEMOLE_UIABYSSS2INLEVELMAPDIALOGPAGECONTROLLER_UIINLEVELRELICPACKAGEINFO_SETSELECT_OFFSET UNITYSDK_OFFSET(0x15B0E160)
#define MOLEMOLE_UIABYSSS2INLEVELMAPDIALOGPAGECONTROLLER_UIINLEVELRELICPACKAGEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x15B03DB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS2InLevelMapDialogPageController_UIInLevelRelicPackageInfo_TypeDefinitionIndex = 45477;

	class UIAbyssS2InLevelMapDialogPageController_UIInLevelRelicPackageInfo : public ::System::Object
	{
	public:
		::HGAJKHIMKJP* Data; // 0x10
		::BKPEEBMCNPD* IconData; // 0x18
		::System::Boolean BriefDesc; // 0x20
		::System::Boolean Expand; // 0x21
		::System::Boolean UseGamepadSelectable; // 0x22
		::System::Boolean IsSelect; // 0x23
		::System::Boolean HideLevel; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2INLEVELMAPDIALOGPAGECONTROLLER_UIINLEVELRELICPACKAGEINFO__CTOR_OFFSET))(this);
		}

		::System::Int32 GetTemplateIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2INLEVELMAPDIALOGPAGECONTROLLER_UIINLEVELRELICPACKAGEINFO_GETTEMPLATEINDEX_OFFSET))(this);
		}

		::System::Void SetBrief(::System::Boolean brief)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2INLEVELMAPDIALOGPAGECONTROLLER_UIINLEVELRELICPACKAGEINFO_SETBRIEF_OFFSET))(this, brief);
		}

		::System::Void SetSelect(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2INLEVELMAPDIALOGPAGECONTROLLER_UIINLEVELRELICPACKAGEINFO_SETSELECT_OFFSET))(this, isSelect);
		}
	};
}
