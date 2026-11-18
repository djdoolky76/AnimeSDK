#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GLBHPDANCJN.h"
#include "unitysdk/MoleMole/InputActionEventType.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define MOLEMOLE_INPUTACTIONEVENT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x69D790)
#define MOLEMOLE_INPUTACTIONEVENT_EQUALS_OFFSET UNITYSDK_OFFSET(0x69D720)
#define MOLEMOLE_INPUTACTIONEVENT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x69D6D0)
#define MOLEMOLE_INPUTACTIONEVENT_GET_EMPTY_OFFSET UNITYSDK_OFFSET(0x11925E90)
#define MOLEMOLE_INPUTACTIONEVENT_GET_INPUTDEVICEUSAGE_OFFSET UNITYSDK_OFFSET(0x363D60)
#define MOLEMOLE_INPUTACTIONEVENT_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x69D810)
#define MOLEMOLE_INPUTACTIONEVENT_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x69D7A0)
#define MOLEMOLE_INPUTACTIONEVENT_SET_INPUTDEVICEUSAGE_OFFSET UNITYSDK_OFFSET(0x3A45D0)

namespace MoleMole
{
	inline static constexpr unsigned int InputActionEvent_TypeDefinitionIndex = 50035;

	struct alignas(4) InputActionEvent
	{
		::MoleMole::InputActionEventType actionEvent; // 0x10
		::MoleMole::InputLogicEventType logicEvent; // 0x14
		::GLBHPDANCJN _inputDeviceUsage; // 0x18

		/*
		static ::MoleMole::InputActionEvent get_Empty()
		{
			return ((::MoleMole::InputActionEvent(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_INPUTACTIONEVENT_GET_EMPTY_OFFSET))();
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_INPUTACTIONEVENT_GETHASHCODE_OFFSET))(this);
		}

		/*
		::System::Boolean Equals(::MoleMole::InputActionEvent LIBPKNHDIGP)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_INPUTACTIONEVENT_EQUALS_OFFSET))(this, LIBPKNHDIGP);
		}
		*/

		::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_INPUTACTIONEVENT_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
		}

		::GLBHPDANCJN get_InputDeviceUsage()
		{
			return ((::GLBHPDANCJN(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_INPUTACTIONEVENT_GET_INPUTDEVICEUSAGE_OFFSET))(this);
		}

		::System::Void set_InputDeviceUsage(::GLBHPDANCJN EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::GLBHPDANCJN))((::PBYTE)hIl2Cpp + MOLEMOLE_INPUTACTIONEVENT_SET_INPUTDEVICEUSAGE_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_INPUTACTIONEVENT_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Int32 HLPHPBAODIF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_INPUTACTIONEVENT_HLPHPBAODIF_OFFSET))(this);
		}
	};
}
