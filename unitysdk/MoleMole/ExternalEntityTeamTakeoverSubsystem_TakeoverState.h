#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HFAHKKFPHHM.h"
#include "unitysdk/JGMDNACJOPD.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_EXTERNALENTITYTEAMTAKEOVERSUBSYSTEM_TAKEOVERSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x16229BD0)

namespace MoleMole
{
	inline static constexpr unsigned int ExternalEntityTeamTakeoverSubsystem_TakeoverState_TypeDefinitionIndex = 89138;

	class ExternalEntityTeamTakeoverSubsystem_TakeoverState : public ::System::Object
	{
	public:
		::MoleMole::EntityHandle EntityHandle; // 0x10
		::System::Int32 GroupID; // 0x20
		::JGMDNACJOPD Phase; // 0x24
		::System::Boolean TargetLost; // 0x28
		::System::Boolean ScopeEntered; // 0x29
		::System::Byte _padding0[0x2];
		::HFAHKKFPHHM Type; // 0x2C
		::System::Int32 ConfigID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EXTERNALENTITYTEAMTAKEOVERSUBSYSTEM_TAKEOVERSTATE__CTOR_OFFSET))(this);
		}
	};
}
