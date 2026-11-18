#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class IDGDIFDMIDP;
class MBODLFKOJOP;
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define MOLEMOLE_UICIRCLEREPORTSELECTDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x175662D0)

namespace MoleMole
{
	inline static constexpr unsigned int UICircleReportSelectDialogPopWindowController_Context_TypeDefinitionIndex = 73928;

	class UICircleReportSelectDialogPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::MBODLFKOJOP*>* MemberTitleList; // 0x28
		::System::Action_1<::System::Int32>* OnCloseAction; // 0x30
		::IDGDIFDMIDP* CircleData; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICIRCLEREPORTSELECTDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
