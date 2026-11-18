#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace MoleMole { class UIWidgetController; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIDIGIBOOINPUTWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFEA9A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIDigibooInputWidgetController_Context_TypeDefinitionIndex = 59873;

	class UIDigibooInputWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_1<::System::String*>* onClickOKTriggerLogic; // 0x28
		::System::String* tipsText; // 0x30
		::System::Action_1<::System::String*>* onInputChanged; // 0x38
		::System::String* defaultText; // 0x40
		::System::Action_2<::System::String*, ::MoleMole::UIWidgetController*>* onInputSuccess; // 0x48
		::System::String* inputTipsText; // 0x50
		::System::Int32 maxByteLength; // 0x58
		::System::Boolean useOutsideConfirmLogic; // 0x5C
		::System::Boolean enableBtnWhenInputEmpty; // 0x5D

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDIGIBOOINPUTWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
