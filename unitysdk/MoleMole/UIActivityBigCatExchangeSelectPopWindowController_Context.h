#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class HGAJKHIMKJP;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIACTIVITYBIGCATEXCHANGESELECTPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x13A1A250)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityBigCatExchangeSelectPopWindowController_Context_TypeDefinitionIndex = 40994;

	class UIActivityBigCatExchangeSelectPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* OnTakeReward; // 0x28
		::System::Collections::Generic::List_1<::HGAJKHIMKJP*>* itemList; // 0x30
		::System::Boolean isWeapon; // 0x38
		::System::Byte _padding0[0x3];
		::System::Int32 defaultIndex; // 0x3C
		::System::UInt32 activityId; // 0x40
		::System::UInt32 taskId; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBIGCATEXCHANGESELECTPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
