#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/BindSendMsgType.h"
#include "unitysdk/MoleMole/Config/HollowInteractType.h"
#include "unitysdk/MoleMole/Config/InteractPosType.h"
#include "unitysdk/MoleMole/Config/InteractTargetType.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigHollowInteractCondition; }
namespace MoleMole::Config { class ConfigHollowInteractEffect; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWINTERACTBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x164119C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowInteractBase_TypeDefinitionIndex = 73201;

	class ConfigHollowInteractBase : public ::System::Object
	{
	public:
		::MoleMole::Config::ConfigHollowInteractCondition* Condition; // 0x10
		::MoleMole::Config::ConfigHollowInteractEffect* FailureEffect; // 0x18
		::MoleMole::Config::ConfigHollowInteractEffect* Effect; // 0x20
		::System::Boolean BreakSleep; // 0x28
		::System::Boolean IsInteractFailure; // 0x29
		::System::Boolean ForbidMove; // 0x2A
		::System::Boolean DestroyAfterInteract; // 0x2B
		::System::Int32 Priority; // 0x2C
		::MoleMole::Config::InteractTargetType Type; // 0x30
		::MoleMole::Config::BindSendMsgType BindMove; // 0x34
		::MoleMole::Config::HollowInteractType InteractType; // 0x38
		::System::Int32 Group; // 0x3C
		::System::Boolean EnableDefault; // 0x40
		::System::Boolean TryMoveToTarget; // 0x41
		::System::Byte _padding0[0x2];
		::MoleMole::InputLogicEventType ConsoleOrKeyboardEvent; // 0x44
		::MoleMole::Config::InteractPosType PosType; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWINTERACTBASE__CTOR_OFFSET))(this);
		}
	};
}
