#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BDEHNBMOHMG.h"
#include "unitysdk/EFIFKJHLKCF.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class GBINEPNHKKO;
class IDGDIFDMIDP;
class JGBMOOJHMBF;
namespace MoleMole { class UIBaseController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIPERSONALINFOEDITPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x14CB2EF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIPersonalInfoEditPopWindowController_Context_TypeDefinitionIndex = 60651;

	class UIPersonalInfoEditPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::JGBMOOJHMBF* playerSysInfo; // 0x28
		::MoleMole::UIBaseController* openController; // 0x30
		::GBINEPNHKKO* CircleMemberData; // 0x38
		::System::Collections::Generic::List_1<::BDEHNBMOHMG>* extraReportTypes; // 0x40
		::System::Collections::Generic::List_1<::System::Int32>* btnIDList; // 0x48
		::IDGDIFDMIDP* CircleData; // 0x50
		::UnityEngine::Events::UnityAction* overrideReportBtnAction; // 0x58
		::EFIFKJHLKCF IdentityType; // 0x60
		::System::Int32 moduleID; // 0x64
		::System::Boolean isAccountCancelled; // 0x68
		::System::Boolean isShowingBirthday; // 0x69
		::System::Boolean isMyEditWindow; // 0x6A
		::System::Boolean isRealPlayer; // 0x6B

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERSONALINFOEDITPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
