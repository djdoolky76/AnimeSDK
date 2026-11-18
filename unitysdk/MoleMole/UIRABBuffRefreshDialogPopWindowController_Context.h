#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class CANOPECPHCD;
class DCFKHKBLIMA;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIRABBUFFREFRESHDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x186F2AA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABBuffRefreshDialogPopWindowController_Context_TypeDefinitionIndex = 71189;

	class UIRABBuffRefreshDialogPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::CANOPECPHCD* FactorData; // 0x28
		::System::Action* OnConfirm; // 0x30
		::System::Collections::Generic::List_1<::System::Int32>* ValidFactorType; // 0x38
		::DCFKHKBLIMA* BuddyData; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBUFFREFRESHDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
