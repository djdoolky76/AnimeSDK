#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BFOPAEHFPMM.h"
#include "unitysdk/HHHJKACNJLG.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define MOLEMOLE_UIGENERALDROPDOWNCONTROLLERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x188F32F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralDropDownControllerContext_TypeDefinitionIndex = 46152;

	class UIGeneralDropDownControllerContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* OnClose; // 0x28
		::Il2CppArray<::BFOPAEHFPMM>* selects; // 0x30
		::System::Action_2<::System::Int32, ::System::Boolean>* OnValueChange; // 0x38
		::UnityEngine::Vector2 cellSize; // 0x40
		::System::Boolean isUp; // 0x48
		::System::Boolean IgnoreGamepadLeftStickButtonClose; // 0x49
		::System::Boolean useLocalYHeight; // 0x4A
		::System::Boolean autoDirection; // 0x4B
		::MoleMole::InputLogicEventType closeEvent; // 0x4C
		::HHHJKACNJLG widgetType; // 0x50
		::System::Boolean IsAutoCloseWhenLayoutPlatformChanged; // 0x54
		::System::Boolean AutoClose; // 0x55
		::System::Boolean inverseDropDirection; // 0x56
		::System::Byte _padding0[0x1];
		::System::Int32 maxHeight; // 0x58
		::UnityEngine::Vector2 positionOffset; // 0x5C
		::System::Int32 defaultSelectIndex; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDROPDOWNCONTROLLERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
