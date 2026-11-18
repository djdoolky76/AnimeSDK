#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class IBENDELLLAO;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_UIGACHAOPTITEMROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18099A00)

namespace MoleMole
{
	inline static constexpr unsigned int UIGachaOptItemRowWidgetController_Context_TypeDefinitionIndex = 71464;

	class UIGachaOptItemRowWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_1<::System::UInt32>* OnFocus; // 0x28
		::System::Func_2<::System::UInt32, ::System::Boolean>* IsSelectedFunc; // 0x30
		::System::Func_2<::System::UInt32, ::System::Boolean>* IsOwnedFunc; // 0x38
		::System::Action_1<::System::UInt32>* OnClick; // 0x40
		::System::Func_1<::System::Boolean>* IsSelectionFullFunc; // 0x48
		::System::Func_2<::System::UInt32, ::System::Boolean>* IsFocusedFunc; // 0x50
		::System::Func_2<::System::UInt32, ::IBENDELLLAO*>* GetItemBadgeNodeFunc; // 0x58
		::System::UInt32 ItemID; // 0x60
		::System::Boolean UseEmptyNode; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAOPTITEMROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
