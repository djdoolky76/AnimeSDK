#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class FAKLNMJEGOJ;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class DFDEIDBBGHG_1;

#define MOLEMOLE_UIZENKOVGEMDEBUFFSELECTDIALOGPOPWINDOWCONTROLLER_CONTEXT_INITBYGEMS_OFFSET UNITYSDK_OFFSET(0x13B3F9C0)
#define MOLEMOLE_UIZENKOVGEMDEBUFFSELECTDIALOGPOPWINDOWCONTROLLER_CONTEXT_INITBYKOVITEMS_OFFSET UNITYSDK_OFFSET(0x13B3FB10)
#define MOLEMOLE_UIZENKOVGEMDEBUFFSELECTDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x13B3FBB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovGemDebuffSelectDialogPopWindowController_Context_TypeDefinitionIndex = 62289;

	class UIZenkovGemDebuffSelectDialogPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* OnCancel; // 0x28
		::System::Collections::Generic::List_1<::System::Int32>* ItemList; // 0x30
		::System::Action_1<::System::Int32>* OnConfirm; // 0x38
		::System::Boolean IsSelected; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVGEMDEBUFFSELECTDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}

		::System::Void InitByGems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVGEMDEBUFFSELECTDIALOGPOPWINDOWCONTROLLER_CONTEXT_INITBYGEMS_OFFSET))(this);
		}

		::System::Void InitByKovItems(::DFDEIDBBGHG_1<::FAKLNMJEGOJ*>* kovItemList)
		{
			return ((::System::Void(*)(::PVOID, ::DFDEIDBBGHG_1<::FAKLNMJEGOJ*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVGEMDEBUFFSELECTDIALOGPOPWINDOWCONTROLLER_CONTEXT_INITBYKOVITEMS_OFFSET))(this, kovItemList);
		}
	};
}
