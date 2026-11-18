#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class OPDAKKMNLHA;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIGALGAMEREVIEWDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3D65E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgameReviewDialogPopWindowController_Context_TypeDefinitionIndex = 72070;

	class UIGalgameReviewDialogPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::OPDAKKMNLHA*>* reviewList; // 0x28
		::System::Action* closeCallback; // 0x30

		::System::Void _ctor(::System::Collections::Generic::List_1<::OPDAKKMNLHA*>* list, ::System::Action* closeCB)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::OPDAKKMNLHA*>*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEREVIEWDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this, list, closeCB);
		}
	};
}
