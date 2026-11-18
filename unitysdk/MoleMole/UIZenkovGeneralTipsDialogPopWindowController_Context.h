#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIZENKOVGENERALTIPSDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1138FEE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovGeneralTipsDialogPopWindowController_Context_TypeDefinitionIndex = 76347;

	class UIZenkovGeneralTipsDialogPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* OnCloseAction; // 0x28
		::System::Action* OkAction; // 0x30
		::System::String* DescTextKey; // 0x38
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* ItemIdAndNum; // 0x40
		::System::Action* GoAction; // 0x48
		::System::String* GoBtnTextKey; // 0x50
		::System::String* TitleTextKey; // 0x58
		::System::Boolean ShowGoBtn; // 0x60
		::System::Boolean ShowCancelBtn; // 0x61

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVGENERALTIPSDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
