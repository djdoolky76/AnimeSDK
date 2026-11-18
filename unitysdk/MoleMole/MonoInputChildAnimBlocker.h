#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/MoleMole/MonoInputAnimBlocker.h"
#include "unitysdk/MoleMole/InputActionEvent.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_MONOINPUTCHILDANIMBLOCKER_ISINPUTHANDLED_OFFSET UNITYSDK_OFFSET(0x1A91C7D0)
#define MOLEMOLE_MONOINPUTCHILDANIMBLOCKER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A91C890)

namespace MoleMole
{
	inline static constexpr unsigned int MonoInputChildAnimBlocker_TypeDefinitionIndex = 65170;

	class MonoInputChildAnimBlocker : public ::MoleMole::MonoInputAnimBlocker
	{
	public:
		::System::Boolean IsInputHandledByBlocker; // 0x60
		::System::Byte _padding0[0x7];
		::System::Collections::Generic::List_1<::MoleMole::InputLogicEventType>* ExceptionLogicEventList; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINPUTCHILDANIMBLOCKER__CTOR_OFFSET))(this);
		}

		::System::Boolean IsInputHandled(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINPUTCHILDANIMBLOCKER_ISINPUTHANDLED_OFFSET))(this, inputAction);
		}
	};
}
