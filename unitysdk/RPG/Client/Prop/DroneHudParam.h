#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class OverrideCustomDroneFuncBtn; }

#define RPG_CLIENT_PROP_DRONEHUDPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1A506810)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int DroneHudParam_TypeDefinitionIndex = 81295;

	class DroneHudParam : public ::System::Object
	{
	public:
		::RPG::GameCore::OverrideCustomDroneFuncBtn* OverrideConfig; // 0x10
		::System::Boolean ShowBack; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 PuzzleID; // 0x1C
		::System::UInt32 FuncID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DRONEHUDPARAM_CTOR_OFFSET))(this);
		}

	};
}
