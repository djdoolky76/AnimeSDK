#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_PINGPONGMODULE_PINGPONGADDPOINTUIINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x18D96A60)

namespace RPG::Client
{
	inline static constexpr unsigned int PingPongModule_PingPongAddPointUIInfo_TypeDefinitionIndex = 68400;

	class PingPongModule_PingPongAddPointUIInfo : public ::System::Object
	{
	public:
		::System::Int32 MaxHPPointNum; // 0x10
		::System::Int32 PointNum; // 0x14
		::System::Boolean AllowRacketLength; // 0x18
		::System::Boolean ShowAddPointUI; // 0x19
		::System::Boolean AllowRacketSpeed; // 0x1A
		::System::Boolean AllowSP; // 0x1B
		::System::Int32 MaxRacketSpeedPointNum; // 0x1C
		::System::Int32 MaxRacketLengthPointNum; // 0x20
		::System::Int32 MaxMPPointNum; // 0x24
		::System::Boolean AllowHP; // 0x28
		::System::Boolean AllowMP; // 0x29
		::System::Byte _padding0[0x2];
		::System::Int32 MaxSPPointNum; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PINGPONGMODULE_PINGPONGADDPOINTUIINFO_CTOR_OFFSET))(this);
		}

	};
}
