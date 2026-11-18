#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UISUMMERTIDETREASURESELLINGORDERLISTROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x166EAA60)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerTideTreasureSellingOrderListRowWidgetController_Context_TypeDefinitionIndex = 73737;

	class UISummerTideTreasureSellingOrderListRowWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Foundation::ViewObject::ViewObjectHandle Order; // 0x28
		::System::Action_1<::System::Object*>* OnClick; // 0x38
		::System::Func_2<::System::Object*, ::System::Boolean>* IsSelect; // 0x40
		::System::Int32 Index; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURESELLINGORDERLISTROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
