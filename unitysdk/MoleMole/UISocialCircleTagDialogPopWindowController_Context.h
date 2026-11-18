#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CCODFLJFPIJ.h"
#include "unitysdk/ILPGGLCIHIN.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define MOLEMOLE_UISOCIALCIRCLETAGDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1561F880)

namespace MoleMole
{
	inline static constexpr unsigned int UISocialCircleTagDialogPopWindowController_Context_TypeDefinitionIndex = 66855;

	class UISocialCircleTagDialogPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_2<::ILPGGLCIHIN, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*>* OnCloseCallback; // 0x28
		::System::Collections::Generic::IEnumerable_1<::System::Int32>* CurrentTags; // 0x30
		::CCODFLJFPIJ TagDialogMode; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLETAGDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
