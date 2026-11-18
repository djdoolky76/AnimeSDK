#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class FMHDMLBDIJC;
class HGAJKHIMKJP;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIZENKOVBATCHSCREENDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xEB19D80)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovBatchScreenDialogPopWindowController_Context_TypeDefinitionIndex = 86789;

	class UIZenkovBatchScreenDialogPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* OnCloseAction; // 0x28
		::System::String* TitleKey; // 0x30
		::System::Collections::Generic::List_1<::HGAJKHIMKJP*>* GatherItems; // 0x38
		::System::Action* GoAction; // 0x40
		::System::Collections::Generic::List_1<::FMHDMLBDIJC*>* GatherBagIndices; // 0x48
		::System::String* GoBtnTextKey; // 0x50
		::System::String* TextEnKey; // 0x58
		::System::Boolean ShowDesc; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVBATCHSCREENDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
