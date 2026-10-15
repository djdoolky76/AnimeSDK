#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_GAMECORE_GRAVITYBALLUIPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0xE6C8CB0)

namespace RPG::GameCore
{
	class GravityBallUIParam : public ::System::Object
	{
	public:
		::System::Single RotationProgress; // 0x10
		::System::Int32 ControlMode; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRAVITYBALLUIPARAM_CTOR_OFFSET))(this);
		}

	};
}
