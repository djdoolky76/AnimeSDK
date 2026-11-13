#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_GAMECORE_GRAVITYBALLUIPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0x18476B70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GravityBallUIParam_TypeDefinitionIndex = 54068;

	class GravityBallUIParam : public ::System::Object
	{
	public:
		::System::Int32 ControlMode; // 0x10
		::System::Single RotationProgress; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRAVITYBALLUIPARAM_CTOR_OFFSET))(this);
		}

	};
}
