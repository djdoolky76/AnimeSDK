#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KGLPHMJIBNP.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class IDGDIFDMIDP;
class JDAHJPLCIFN;
class NHCBIIMKLBK;

#define MOLEMOLE_UISOCIALCIRCLEREPORTDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x185A21E0)

namespace MoleMole
{
	inline static constexpr unsigned int UISocialCircleReportDialogPopWindowController_Context_TypeDefinitionIndex = 45149;

	class UISocialCircleReportDialogPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::JDAHJPLCIFN* TextValidate; // 0x28
		::IDGDIFDMIDP* SocialCircleData; // 0x30
		::NHCBIIMKLBK* SocialCircleBriefData; // 0x38
		::KGLPHMJIBNP ReportDialogMode; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLEREPORTDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
