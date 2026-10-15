#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_AIRLINEVARIABLESCALEPOINT_CTOR_OFFSET UNITYSDK_OFFSET(0xC640790)

namespace RPG::Client
{
	class AirlineVariableScalePoint : public ::System::Object
	{
	public:
		::System::Int32 connIndex; // 0x10
		::System::Single scaleMultiplier; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINEVARIABLESCALEPOINT_CTOR_OFFSET))(this);
		}

	};
}
