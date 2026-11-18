#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JBGGDKBCNMO.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }

#define MOLEMOLE_HACKERDRONENEWBIESUBSYSTEM_INPUTHOLDENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x135903A0)

namespace MoleMole
{
	inline static constexpr unsigned int HackerDroneNewbieSubsystem_InputHoldEntry_TypeDefinitionIndex = 73002;

	class HackerDroneNewbieSubsystem_InputHoldEntry : public ::System::Object
	{
	public:
		::System::Action* OnDispose; // 0x10
		::System::String* Tag; // 0x18
		::System::Action* OnTriggered; // 0x20
		::System::Boolean DisposeAfterTriggered; // 0x28
		::System::Boolean IsPressing; // 0x29
		::System::Byte _padding0[0x2];
		::JBGGDKBCNMO InputType; // 0x2C
		::System::Single HoldTimeThreshold; // 0x30
		::System::Single PressTimer; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERDRONENEWBIESUBSYSTEM_INPUTHOLDENTRY__CTOR_OFFSET))(this);
		}
	};
}
