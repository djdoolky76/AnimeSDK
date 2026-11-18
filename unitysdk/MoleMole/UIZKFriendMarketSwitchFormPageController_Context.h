#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/PGCKDGJCNLH.h"

namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIZKFRIENDMARKETSWITCHFORMPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x13E881C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIZKFriendMarketSwitchFormPageController_Context_TypeDefinitionIndex = 88952;

	class UIZKFriendMarketSwitchFormPageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::PGCKDGJCNLH>* FormList; // 0x28
		::System::Action_1<::System::Int32>* OnConfirmForm; // 0x30
		::System::Int32 InitConfirmSelectedFormId; // 0x38
		::System::Int32 InitFormId; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZKFRIENDMARKETSWITCHFORMPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
