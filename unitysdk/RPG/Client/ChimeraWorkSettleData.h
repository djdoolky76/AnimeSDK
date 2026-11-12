#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_CHIMERAWORKSETTLEDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xD4D1670)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraWorkSettleData_TypeDefinitionIndex = 64891;

	class ChimeraWorkSettleData : public ::System::Object
	{
	public:
		::System::UInt32 ReviveCnt; // 0x10
		::System::Single CauseDamage; // 0x14
		::System::UInt32 Kill; // 0x18
		::System::UInt32 SendEmoCnt; // 0x1C
		::System::UInt32 ChimeraID; // 0x20
		::System::Single TeammateBuffNum; // 0x24
		::System::Single RemainHP; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKSETTLEDATA_CTOR_OFFSET))(this);
		}

	};
}
