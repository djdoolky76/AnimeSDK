#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class JFOGKNLPCKH;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIZENKOVALTARBUFFDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x12FA2320)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovAltarBuffDialogPopWindowController_Context_TypeDefinitionIndex = 38309;

	class UIZenkovAltarBuffDialogPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* Desc; // 0x28
		::System::String* Title; // 0x30
		::System::String* EventLevel; // 0x38
		::System::Collections::Generic::List_1<::JFOGKNLPCKH*>* CardList; // 0x40
		::System::Boolean ShowEvent; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVALTARBUFFDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
