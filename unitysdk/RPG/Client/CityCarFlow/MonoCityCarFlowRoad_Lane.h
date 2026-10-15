#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }

#define RPG_CLIENT_CITYCARFLOW_MONOCITYCARFLOWROAD_LANE_CTOR_OFFSET UNITYSDK_OFFSET(0xCB73110)

namespace RPG::Client::CityCarFlow
{
	class MonoCityCarFlowRoad_Lane : public ::System::Object
	{
	public:
		::System::String* Name; // 0x10
		::System::Boolean Positive; // 0x18
		::System::Byte _padding0[0x3];
		::System::Single Offset; // 0x1C
		::System::Single Width; // 0x20
		::System::Single Weight; // 0x24
		::System::Single SpeedMultiplier; // 0x28
		::System::Byte _padding1[0x4];
		::Il2CppArray<::System::Object*>* Rules; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CITYCARFLOW_MONOCITYCARFLOWROAD_LANE_CTOR_OFFSET))(this);
		}

	};
}
